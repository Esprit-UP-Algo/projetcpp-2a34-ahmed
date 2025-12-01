#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connection.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QDate>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QTableWidgetItem>
#include <QModelIndexList>
#include <QHeaderView>
#include <QDebug>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QTextEdit>
#include <QTabWidget>
#include <QDialog>
#include <QPushButton>
#include <QDialogButtonBox>
#include <QTimer>
#include <QtCharts>
#include <QFileDialog>
#include <QDateTime>
#include <QRandomGenerator>
#include <QHash>
#include <QCryptographicHash>
#include <QMenu>
#include <QInputDialog>
#include <QClipboard>
#include <QGroupBox>
#include <QApplication>
#include <QStyle>
#include <QPainter>
#include <QSystemTrayIcon>
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Initialisation des membres de notification
    alertCount = 0;
    trayIcon = nullptr;
    trayMenu = nullptr;
    doubleClickTimer = nullptr;
    clickCount = false;

    // === CONFIGURATION DU DOUBLE-CLIC ===
    setupDoubleClick();

    // === NOTIFICATION ICON ===
    setupTrayIcon();

    // === CONNEXION BASE DE DONNÉES ===
    Connection c;
    if (!c.connect()) {
        QMessageBox::critical(this, "Erreur", "Connexion à la base de données échouée !");
    }

    // === CONFIGURATION DE L'INTERFACE VÉHICULES ===
    ui->tab->setColumnCount(6);
    ui->tab->setHorizontalHeaderLabels({"Immatriculation", "Modèle", "Kilométrage", "Date assurance", "État", "Température"});

    // Ajuster la largeur des colonnes
    ui->tab->setColumnWidth(0, 150);
    ui->tab->setColumnWidth(1, 200);
    ui->tab->setColumnWidth(2, 120);
    ui->tab->setColumnWidth(3, 120);
    ui->tab->setColumnWidth(4, 100);
    ui->tab->setColumnWidth(5, 120);

    // === CONTRÔLES DE SAISIE ===
    QRegularExpression immatRegex("^[A-Z]{2}-\\d{3}-[A-Z]{2}$|^\\d{3,4}-[A-Z]{2}-\\d{3,4}$");
    ui->Immatriculation_3->setValidator(new QRegularExpressionValidator(immatRegex, this));
    ui->Immatriculation_3->setPlaceholderText("AB-123-CD ou 123-AB-1200");

    QRegularExpression modeleRegex("^[a-zA-Z0-9\\s\\-]{0,20}$");
    ui->mo->setValidator(new QRegularExpressionValidator(modeleRegex, this));
    ui->mo->setMaxLength(20);
    ui->mo->setPlaceholderText("Max 20 caractères");

    QRegularExpression kmRegex("^\\d{0,7}$");
    ui->kilo->setValidator(new QRegularExpressionValidator(kmRegex, this));
    ui->kilo->setPlaceholderText("Ex: 150000");

    QRegularExpression dateRegex("^(0[1-9]|[12][0-9]|3[01])/(0[1-9]|1[0-2])/\\d{4}$");
    ui->date_3->setValidator(new QRegularExpressionValidator(dateRegex, this));
    ui->date_3->setPlaceholderText("JJ/MM/AAAA");

    QRegularExpression etatRegex("^[a-zA-Zéèêëàâäôöûüç\\s]{0,20}$");
    ui->ett->setValidator(new QRegularExpressionValidator(etatRegex, this));
    ui->ett->setMaxLength(20);
    ui->ett->setPlaceholderText("Ex: neuf, bon, usé...");

    ui->identifant_5->setPlaceholderText("Entrez une immatriculation");

    // ComboBox pour le tri
    ui->comboBox_5->addItem("Trier par...");
    ui->comboBox_5->addItem("Immatriculation");
    ui->comboBox_5->addItem("Kilométrage");
    ui->comboBox_5->addItem("État");
    ui->comboBox_5->addItem("Date assurance");
    ui->comboBox_5->addItem("Température");

    // Boutons de tri
    ui->pushButton_19->setText("↑");
    ui->pushButton_20->setText("↓");

    // Charger tous les véhicules au démarrage
    chargerTousLesVehicules();

    // === SYSTEME D'ALERTES ASSURANCE ===
    QTimer::singleShot(1000, this, &MainWindow::verifierAlertesAssurance);

    QTimer *timerAlertes = new QTimer(this);
    connect(timerAlertes, &QTimer::timeout, this, &MainWindow::verifierAlertesAssurance);
    timerAlertes->start(3600000); // 1 heure

    // === SYSTEME D'ALERTES INTELLIGENTES ===
    QTimer::singleShot(1500, this, &MainWindow::verifierAssurances30Jours);

    QTimer *timerAlertesAuto = new QTimer(this);
    connect(timerAlertesAuto, &QTimer::timeout, this, &MainWindow::verifierAssurances30Jours);
    timerAlertesAuto->start(3600000); // Vérifie toutes les heures
}

MainWindow::~MainWindow()
{
    if (trayIcon) {
        trayIcon->hide();
    }
    if (doubleClickTimer) {
        doubleClickTimer->stop();
        delete doubleClickTimer;
    }
    delete ui;
}

// === CONFIGURATION DU DOUBLE-CLIC ===
void MainWindow::setupDoubleClick()
{
    // Trouver le bouton Vehicule_6
    QPushButton *btnVehicule6 = findChild<QPushButton*>("Vehicule_6");
    if (!btnVehicule6) {
        qDebug() << "Bouton Vehicule_6 non trouvé";
        return;
    }

    // Créer le timer pour la détection du double-clic
    doubleClickTimer = new QTimer(this);
    doubleClickTimer->setSingleShot(true);
    doubleClickTimer->setInterval(250); // Intervalle de 250ms pour le double-clic

    connect(doubleClickTimer, &QTimer::timeout, this, [this]() {
        // Simple clic détecté
        if (clickCount) {
            on_Vehicule_6_clicked();
            clickCount = false;
        }
    });

    // Installer un event filter pour capturer les clics
    btnVehicule6->installEventFilter(this);
}

// === EVENT FILTER POUR DÉTECTION DU DOUBLE-CLIC ===
bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    QPushButton *btnVehicule6 = findChild<QPushButton*>("Vehicule_6");
    if (!btnVehicule6 || obj != btnVehicule6) {
        return QMainWindow::eventFilter(obj, event);
    }

    if (event->type() == QEvent::MouseButtonPress) {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
        if (mouseEvent->button() == Qt::LeftButton) {
            if (!clickCount) {
                // Premier clic
                clickCount = true;
                doubleClickTimer->start();
            } else {
                // Deuxième clic - double-clic détecté
                doubleClickTimer->stop();
                clickCount = false;
                on_Vehicule_6_doubleClicked();
            }
            return true; // Événement traité
        }
    }

    return QMainWindow::eventFilter(obj, event);
}

// === FONCTION POUR DOUBLE-CLIC ===
void MainWindow::on_Vehicule_6_doubleClicked()
{
    qDebug() << "=== DOUBLE-CLIC SUR Vehicule_6 ===";

    // Afficher une notification
    showTrayNotification("🚀 Accès Rapide",
                         "Ouverture du système d'alertes et statistiques...",
                         0);

    // Ouvrir directement le système d'alertes et statistiques
    on_pushButton_alertes_clicked();

    qDebug() << "Système d'alertes et statistiques ouvert via double-clic";
}

// === FONCTION POUR SIMPLE CLIC (EXISTANTE) ===
void MainWindow::on_Vehicule_6_clicked()
{
    qDebug() << "=== SIMPLE CLIC SUR Vehicule_6 ===";
    verifierAssurances30Jours();
    QTimer::singleShot(1000, this, &MainWindow::on_pushButton_alertes_clicked);
    showTrayNotification("🔔 Vérification Manuelle",
                         "Scan des assurances déclenché manuellement\nRésultats dans l'interface alertes",
                         0);
}

// === SYSTÈME DE NOTIFICATION AVEC ICÔNE ===
void MainWindow::setupTrayIcon()
{
    trayIcon = new QSystemTrayIcon(this);
    trayMenu = new QMenu(this);

    QAction *restoreAction = new QAction("&Ouvrir", this);
    QAction *notificationAction = new QAction("&Voir alertes", this);
    QAction *quitAction = new QAction("&Quitter", this);

    connect(restoreAction, &QAction::triggered, this, &MainWindow::on_restore_window);
    connect(notificationAction, &QAction::triggered, this, &MainWindow::on_pushButton_alertes_clicked);
    connect(quitAction, &QAction::triggered, this, &MainWindow::on_quit_application);

    trayMenu->addAction(restoreAction);
    trayMenu->addAction(notificationAction);
    trayMenu->addSeparator();
    trayMenu->addAction(quitAction);

    trayIcon->setContextMenu(trayMenu);
    updateTrayIcon();

    connect(trayIcon, &QSystemTrayIcon::activated, this, &MainWindow::on_trayIcon_activated);
    connect(trayIcon, &QSystemTrayIcon::messageClicked, this, &MainWindow::on_show_notification);

    trayIcon->show();
}

void MainWindow::updateTrayIcon()
{
    QIcon icon;

    if (alertCount > 0) {
        QPixmap pixmap(32, 32);
        pixmap.fill(Qt::transparent);

        QPainter painter(&pixmap);
        painter.setRenderHint(QPainter::Antialiasing);

        painter.setBrush(QBrush(QColor(255, 0, 0)));
        painter.setPen(Qt::NoPen);
        painter.drawEllipse(0, 0, 32, 32);

        painter.setPen(QPen(Qt::white));
        painter.setFont(QFont("Arial", 12, QFont::Bold));

        QString alertText = alertCount > 9 ? "9+" : QString::number(alertCount);
        painter.drawText(pixmap.rect(), Qt::AlignCenter, alertText);

        icon = QIcon(pixmap);
        trayIcon->setToolTip(QString("Gestion Véhicules - %1 alerte(s)").arg(alertCount));
    } else {
        icon = QApplication::style()->standardIcon(QStyle::SP_ComputerIcon);
        trayIcon->setToolTip("Gestion Véhicules - Aucune alerte");
    }

    trayIcon->setIcon(icon);
}

void MainWindow::showTrayNotification(const QString &title, const QString &message, int alertLevel)
{
    if (!trayIcon->isVisible()) return;

    QSystemTrayIcon::MessageIcon icon = QSystemTrayIcon::Information;

    switch(alertLevel) {
    case 0: icon = QSystemTrayIcon::Information; break;
    case 1: icon = QSystemTrayIcon::Warning; break;
    case 2: icon = QSystemTrayIcon::Critical; break;
    }

    trayIcon->showMessage(title, message, icon, 10000);

    if (alertLevel > 0) {
        alertCount++;
        updateTrayIcon();
    }
}

void MainWindow::on_trayIcon_activated(QSystemTrayIcon::ActivationReason reason)
{
    switch (reason) {
    case QSystemTrayIcon::DoubleClick:
    case QSystemTrayIcon::Trigger:
        on_restore_window();
        break;
    case QSystemTrayIcon::MiddleClick:
        on_pushButton_alertes_clicked();
        break;
    default:
        break;
    }
}

void MainWindow::on_show_notification()
{
    on_pushButton_alertes_clicked();
}

void MainWindow::on_hide_window()
{
    this->hide();
    showTrayNotification("Gestion Véhicules",
                         "L'application continue de fonctionner en arrière-plan.\nCliquez sur l'icône pour rouvrir.",
                         0);
}

void MainWindow::on_restore_window()
{
    this->show();
    this->raise();
    this->activateWindow();
    alertCount = 0;
    updateTrayIcon();
}

void MainWindow::on_quit_application()
{
    trayIcon->hide();
    QApplication::quit();
}

// === FONCTIONS GESTION VÉHICULES ===
void MainWindow::chargerTousLesVehicules() {
    QSqlQuery query("SELECT IMMATRICULATION, MODÈLE_DU_VEHICLE, KILOMÉTRAGE, DATE_ASSURANCE, ÉTAT, TEMPERATURE FROM VEHICULE ORDER BY IMMATRICULATION");
    ui->tab->setRowCount(0);

    while (query.next()) {
        int row = ui->tab->rowCount();
        ui->tab->insertRow(row);

        ui->tab->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));
        ui->tab->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));
        ui->tab->setItem(row, 2, new QTableWidgetItem(query.value(2).toString()));

        QString dateText = "";
        if (!query.value(3).isNull()) {
            QDate date = query.value(3).toDate();
            dateText = date.toString("dd/MM/yyyy");
        }
        ui->tab->setItem(row, 3, new QTableWidgetItem(dateText));

        ui->tab->setItem(row, 4, new QTableWidgetItem(query.value(4).toString()));

        QString temperature = "";
        if (!query.value(5).isNull()) {
            temperature = QString::number(query.value(5).toInt()) + "°C";
        }
        ui->tab->setItem(row, 5, new QTableWidgetItem(temperature));
    }

    qDebug() << "Véhicules chargés:" << ui->tab->rowCount();
}

void MainWindow::on_ajouter_clicked()
{
    QString imm = ui->Immatriculation_3->text().trimmed().toUpper();
    QString modele = ui->mo->text().trimmed();
    QString kilometrage = ui->kilo->text().trimmed();
    QString dateText = ui->date_3->text().trimmed();
    QString etat = ui->ett->text().trimmed();

    // Validation immatriculation
    if (imm.isEmpty()) {
        QMessageBox::warning(this, "Attention", "Immatriculation vide !");
        ui->Immatriculation_3->setFocus();
        return;
    }

    QRegularExpression immatRegex("^[A-Z]{2}-\\d{3}-[A-Z]{2}$|^\\d{3,4}-[A-Z]{2}-\\d{3,4}$");
    if (!immatRegex.match(imm).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "Format d'immatriculation invalide!");
        ui->Immatriculation_3->setFocus();
        return;
    }

    // Validation kilométrage
    if (!kilometrage.isEmpty()) {
        bool ok;
        int km = kilometrage.toInt(&ok);
        if (!ok || km < 0 || km > 9999999) {
            QMessageBox::warning(this, "Erreur", "Kilométrage invalide!");
            ui->kilo->setFocus();
            return;
        }
    }

    // Validation date
    if (!dateText.isEmpty()) {
        QRegularExpression dateRegex("^(0[1-9]|[12][0-9]|3[01])/(0[1-9]|1[0-2])/\\d{4}$");
        if (!dateRegex.match(dateText).hasMatch()) {
            QMessageBox::warning(this, "Erreur", "Format de date invalide!");
            ui->date_3->setFocus();
            return;
        }

        QDate date = QDate::fromString(dateText, "dd/MM/yyyy");
        if (!date.isValid()) {
            QMessageBox::warning(this, "Erreur", "Date invalide!");
            ui->date_3->setFocus();
            return;
        }
    }

    // AJOUT/MODIFICATION
    QModelIndexList selectedIndexes = ui->tab->selectionModel()->selectedIndexes();
    bool isModification = !selectedIndexes.isEmpty();

    QSqlQuery query;

    if (isModification) {
        int row = selectedIndexes.first().row();
        QString immOriginal = ui->tab->item(row, 0)->text();
        query.prepare("UPDATE VEHICULE SET IMMATRICULATION = :imm, MODÈLE_DU_VEHICLE = :modele, KILOMÉTRAGE = :km, DATE_ASSURANCE = :date_ass, ÉTAT = :etat WHERE IMMATRICULATION = :imm_original");
        query.bindValue(":imm_original", immOriginal);
    } else {
        query.prepare("INSERT INTO VEHICULE (IMMATRICULATION, MODÈLE_DU_VEHICLE, KILOMÉTRAGE, DATE_ASSURANCE, ÉTAT, TEMPERATURE) VALUES (:imm, :modele, :km, :date_ass, :etat, NULL)");
    }

    query.bindValue(":imm", imm);
    query.bindValue(":modele", modele);
    query.bindValue(":km", kilometrage.isEmpty() ? QVariant() : kilometrage.toInt());

    if (dateText.isEmpty()) {
        query.bindValue(":date_ass", QVariant());
    } else {
        query.bindValue(":date_ass", QDate::fromString(dateText, "dd/MM/yyyy"));
    }

    query.bindValue(":etat", etat.isEmpty() ? QVariant() : etat);

    if (query.exec()) {
        QString message = isModification ? "Véhicule modifié avec succès !" : "Véhicule ajouté avec succès !";
        QMessageBox::information(this, "Succès", message);

        chargerTousLesVehicules();
        ui->Immatriculation_3->clear();
        ui->mo->clear();
        ui->kilo->clear();
        ui->date_3->clear();
        ui->ett->clear();
        ui->tab->clearSelection();

        QTimer::singleShot(500, this, &MainWindow::verifierAlertesAssurance);

    } else {
        if (query.lastError().text().contains("unique", Qt::CaseInsensitive)) {
            QMessageBox::warning(this, "Erreur", "Cette immatriculation existe déjà !");
        } else {
            QMessageBox::critical(this, "Erreur", "Opération échouée : " + query.lastError().text());
        }
    }
}

void MainWindow::on_annuler_7_clicked()
{
    ui->Immatriculation_3->clear();
    ui->mo->clear();
    ui->kilo->clear();
    ui->date_3->clear();
    ui->ett->clear();
    ui->tab->clearSelection();
    ui->Immatriculation_3->setFocus();
}

void MainWindow::on_modifier_5_clicked()
{
    QModelIndexList selectedIndexes = ui->tab->selectionModel()->selectedIndexes();
    if (selectedIndexes.isEmpty()) {
        QMessageBox::warning(this, "Attention", "Veuillez sélectionner un véhicule à modifier.");
        return;
    }

    int row = selectedIndexes.first().row();
    ui->Immatriculation_3->setText(ui->tab->item(row, 0)->text());
    ui->mo->setText(ui->tab->item(row, 1)->text());
    ui->kilo->setText(ui->tab->item(row, 2)->text());
    ui->date_3->setText(ui->tab->item(row, 3)->text());
    ui->ett->setText(ui->tab->item(row, 4)->text());

    QMessageBox::information(this, "Modification", "Véhicule chargé pour modification.");
}

void MainWindow::on_valider_clicked()
{
    QString immRecherche = ui->identifant_5->text().trimmed().toUpper();

    if (immRecherche.isEmpty()) {
        QMessageBox::warning(this, "Attention", "Veuillez entrer une immatriculation à rechercher.");
        ui->identifant_5->setFocus();
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT IMMATRICULATION, MODÈLE_DU_VEHICLE, KILOMÉTRAGE, DATE_ASSURANCE, ÉTAT, TEMPERATURE FROM VEHICULE WHERE IMMATRICULATION = :imm");
    query.bindValue(":imm", immRecherche);

    if (query.exec() && query.next()) {
        ui->tab->setRowCount(0);
        int row = ui->tab->rowCount();
        ui->tab->insertRow(row);

        ui->tab->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));
        ui->tab->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));
        ui->tab->setItem(row, 2, new QTableWidgetItem(query.value(2).toString()));

        QString dateText = "";
        if (!query.value(3).isNull()) {
            dateText = query.value(3).toDate().toString("dd/MM/yyyy");
        }
        ui->tab->setItem(row, 3, new QTableWidgetItem(dateText));
        ui->tab->setItem(row, 4, new QTableWidgetItem(query.value(4).toString()));

        QString temperature = "";
        if (!query.value(5).isNull()) {
            temperature = QString::number(query.value(5).toInt()) + "°C";
        }
        ui->tab->setItem(row, 5, new QTableWidgetItem(temperature));

        ui->tab->selectRow(row);
        QMessageBox::information(this, "Recherche", "Véhicule trouvé !");

    } else {
        // Recherche partielle
        QSqlQuery queryPartiel;
        queryPartiel.prepare("SELECT IMMATRICULATION, MODÈLE_DU_VEHICLE, KILOMÉTRAGE, DATE_ASSURANCE, ÉTAT, TEMPERATURE FROM VEHICULE WHERE IMMATRICULATION LIKE :imm");
        queryPartiel.bindValue(":imm", "%" + immRecherche + "%");

        if (queryPartiel.exec()) {
            ui->tab->setRowCount(0);
            int count = 0;

            while (queryPartiel.next()) {
                int row = ui->tab->rowCount();
                ui->tab->insertRow(row);

                ui->tab->setItem(row, 0, new QTableWidgetItem(queryPartiel.value(0).toString()));
                ui->tab->setItem(row, 1, new QTableWidgetItem(queryPartiel.value(1).toString()));
                ui->tab->setItem(row, 2, new QTableWidgetItem(queryPartiel.value(2).toString()));

                QString dateText = "";
                if (!queryPartiel.value(3).isNull()) {
                    dateText = queryPartiel.value(3).toDate().toString("dd/MM/yyyy");
                }
                ui->tab->setItem(row, 3, new QTableWidgetItem(dateText));
                ui->tab->setItem(row, 4, new QTableWidgetItem(queryPartiel.value(4).toString()));

                QString temperature = "";
                if (!queryPartiel.value(5).isNull()) {
                    temperature = QString::number(queryPartiel.value(5).toInt()) + "°C";
                }
                ui->tab->setItem(row, 5, new QTableWidgetItem(temperature));

                count++;
            }

            if (count > 0) {
                QMessageBox::information(this, "Recherche", QString("%1 véhicule(s) trouvé(s)").arg(count));
            } else {
                QMessageBox::warning(this, "Recherche", "Aucun véhicule trouvé.");
                chargerTousLesVehicules();
            }
        } else {
            QMessageBox::warning(this, "Recherche", "Aucun véhicule trouvé.");
            chargerTousLesVehicules();
        }
    }
}

void MainWindow::on_Supprimer_5_clicked()
{
    QModelIndexList selectedIndexes = ui->tab->selectionModel()->selectedIndexes();
    if (selectedIndexes.isEmpty()) {
        QMessageBox::warning(this, "Attention", "Veuillez sélectionner un véhicule à supprimer.");
        return;
    }

    int row = selectedIndexes.first().row();
    QString imm = ui->tab->item(row, 0)->text();
    QString modele = ui->tab->item(row, 1)->text();

    QMessageBox::StandardButton reply = QMessageBox::question(this, "Confirmation",
                                                              QString("Supprimer le véhicule:\n%1 - %2?").arg(imm).arg(modele),
                                                              QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QSqlQuery query;
        query.prepare("DELETE FROM VEHICULE WHERE IMMATRICULATION = :imm");
        query.bindValue(":imm", imm);

        if (query.exec()) {
            chargerTousLesVehicules();
            ui->Immatriculation_3->clear();
            ui->mo->clear();
            ui->kilo->clear();
            ui->date_3->clear();
            ui->ett->clear();
            QMessageBox::information(this, "Suppression", "Véhicule supprimé avec succès !");
            QTimer::singleShot(500, this, &MainWindow::verifierAlertesAssurance);
        } else {
            QMessageBox::critical(this, "Erreur", "Erreur lors de la suppression : " + query.lastError().text());
        }
    }
}

void MainWindow::on_comboBox_5_currentTextChanged(const QString &arg1)
{
    if (arg1 == "Trier par...") {
        chargerTousLesVehicules();
        return;
    }

    QString orderBy;
    if (arg1 == "Immatriculation") orderBy = "IMMATRICULATION ASC";
    else if (arg1 == "Kilométrage") orderBy = "KILOMÉTRAGE ASC";
    else if (arg1 == "État") orderBy = "ÉTAT ASC";
    else if (arg1 == "Date assurance") orderBy = "DATE_ASSURANCE ASC";
    else if (arg1 == "Température") orderBy = "TEMPERATURE ASC";
    else return;

    QSqlQuery query(QString("SELECT IMMATRICULATION, MODÈLE_DU_VEHICLE, KILOMÉTRAGE, DATE_ASSURANCE, ÉTAT, TEMPERATURE FROM VEHICULE ORDER BY %1").arg(orderBy));

    ui->tab->setRowCount(0);
    while (query.next()) {
        int row = ui->tab->rowCount();
        ui->tab->insertRow(row);
        ui->tab->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));
        ui->tab->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));
        ui->tab->setItem(row, 2, new QTableWidgetItem(query.value(2).toString()));

        QString dateText = "";
        if (!query.value(3).isNull()) {
            dateText = query.value(3).toDate().toString("dd/MM/yyyy");
        }
        ui->tab->setItem(row, 3, new QTableWidgetItem(dateText));
        ui->tab->setItem(row, 4, new QTableWidgetItem(query.value(4).toString()));

        QString temperature = "";
        if (!query.value(5).isNull()) {
            temperature = QString::number(query.value(5).toInt()) + "°C";
        }
        ui->tab->setItem(row, 5, new QTableWidgetItem(temperature));
    }
}

void MainWindow::on_pushButton_19_clicked() // Tri ascendant
{
    QString critere = ui->comboBox_5->currentText();
    if (critere == "Trier par...") return;

    QString orderBy;
    if (critere == "Immatriculation") orderBy = "IMMATRICULATION ASC";
    else if (critere == "Kilométrage") orderBy = "KILOMÉTRAGE ASC";
    else if (critere == "État") orderBy = "ÉTAT ASC";
    else if (critere == "Date assurance") orderBy = "DATE_ASSURANCE ASC";
    else if (critere == "Température") orderBy = "TEMPERATURE ASC";
    else return;

    trierTableau(orderBy);
}

void MainWindow::on_pushButton_20_clicked() // Tri descendant
{
    QString critere = ui->comboBox_5->currentText();
    if (critere == "Trier par...") return;

    QString orderBy;
    if (critere == "Immatriculation") orderBy = "IMMATRICULATION DESC";
    else if (critere == "Kilométrage") orderBy = "KILOMÉTRAGE DESC";
    else if (critere == "État") orderBy = "ÉTAT DESC";
    else if (critere == "Date assurance") orderBy = "DATE_ASSURANCE DESC";
    else if (critere == "Température") orderBy = "TEMPERATURE DESC";
    else return;

    trierTableau(orderBy);
}

void MainWindow::trierTableau(const QString& orderBy)
{
    QSqlQuery query(QString("SELECT IMMATRICULATION, MODÈLE_DU_VEHICLE, KILOMÉTRAGE, DATE_ASSURANCE, ÉTAT, TEMPERATURE FROM VEHICULE ORDER BY %1").arg(orderBy));

    ui->tab->setRowCount(0);
    while (query.next()) {
        int row = ui->tab->rowCount();
        ui->tab->insertRow(row);
        ui->tab->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));
        ui->tab->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));
        ui->tab->setItem(row, 2, new QTableWidgetItem(query.value(2).toString()));

        QString dateText = "";
        if (!query.value(3).isNull()) {
            dateText = query.value(3).toDate().toString("dd/MM/yyyy");
        }
        ui->tab->setItem(row, 3, new QTableWidgetItem(dateText));
        ui->tab->setItem(row, 4, new QTableWidgetItem(query.value(4).toString()));

        QString temperature = "";
        if (!query.value(5).isNull()) {
            temperature = QString::number(query.value(5).toInt()) + "°C";
        }
        ui->tab->setItem(row, 5, new QTableWidgetItem(temperature));
    }
}

// === FONCTIONS STATISTIQUES ===
void MainWindow::on_pushButton_statistique_6_clicked()
{
    afficherStatistiquesKilometrage();
}

void MainWindow::afficherStatistiquesKilometrage()
{
    QDialog* statsDialog = new QDialog(this);
    statsDialog->setWindowTitle("Statistiques du Kilométrage");
    statsDialog->resize(1000, 700);

    QVBoxLayout* mainLayout = new QVBoxLayout(statsDialog);

    QLabel* titleLabel = new QLabel("STATISTIQUES DU KILOMÉTRAGE");
    titleLabel->setStyleSheet("font-size: 18px; font-weight: bold; color: #2c3e50; padding: 10px;");
    titleLabel->setAlignment(Qt::AlignCenter);
    mainLayout->addWidget(titleLabel);

    // Récupérer les données
    QSqlQuery query("SELECT KILOMÉTRAGE FROM VEHICULE WHERE KILOMÉTRAGE IS NOT NULL");

    int totalVehicules = 0;
    int sommeKilometrage = 0;
    int minKm = INT_MAX;
    int maxKm = 0;
    QVector<int> kilometrages;

    while (query.next()) {
        int km = query.value(0).toInt();
        kilometrages.append(km);
        sommeKilometrage += km;
        totalVehicules++;
        if (km < minKm) minKm = km;
        if (km > maxKm) maxKm = km;
    }

    if (totalVehicules == 0) {
        QLabel* labelVide = new QLabel("Aucune donnée de kilométrage disponible");
        labelVide->setStyleSheet("font-size: 14px; color: #e74c3c; padding: 20px;");
        labelVide->setAlignment(Qt::AlignCenter);
        mainLayout->addWidget(labelVide);

        QDialogButtonBox* buttonBox = new QDialogButtonBox(QDialogButtonBox::Close);
        connect(buttonBox, &QDialogButtonBox::rejected, statsDialog, &QDialog::reject);
        mainLayout->addWidget(buttonBox);

        statsDialog->exec();
        return;
    }

    double moyenneKm = (double)sommeKilometrage / totalVehicules;

    // Calcul des plages
    QMap<QString, int> plages;
    for (int km : kilometrages) {
        QString plage;
        if (km < 10000) plage = "0-10,000 km";
        else if (km < 50000) plage = "10,000-50,000 km";
        else if (km < 100000) plage = "50,000-100,000 km";
        else if (km < 200000) plage = "100,000-200,000 km";
        else plage = "200,000+ km";
        plages[plage]++;
    }

    QTabWidget* tabWidget = new QTabWidget();

    // Onglet Graphique
    QWidget* tabGraphique = new QWidget();
    QVBoxLayout* layoutGraphique = new QVBoxLayout(tabGraphique);

    QChart* chartBar = new QChart();
    chartBar->setTitle("Répartition par plage de kilométrage");
    chartBar->setAnimationOptions(QChart::SeriesAnimations);

    QBarSeries* seriesBar = new QBarSeries();

    QVector<QColor> couleurs = {QColor("#3498db"), QColor("#2ecc71"), QColor("#e74c3c"), QColor("#f39c12")};
    int colorIndex = 0;

    for (auto it = plages.begin(); it != plages.end(); ++it) {
        QBarSet* set = new QBarSet(it.key());
        *set << it.value();
        set->setColor(couleurs[colorIndex % couleurs.size()]);
        seriesBar->append(set);
        colorIndex++;
    }

    chartBar->addSeries(seriesBar);

    QStringList categories;
    for (auto it = plages.begin(); it != plages.end(); ++it) {
        categories << it.key();
    }

    QBarCategoryAxis* axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chartBar->addAxis(axisX, Qt::AlignBottom);
    seriesBar->attachAxis(axisX);

    QValueAxis* axisY = new QValueAxis();
    chartBar->addAxis(axisY, Qt::AlignLeft);
    seriesBar->attachAxis(axisY);

    QChartView* chartViewBar = new QChartView(chartBar);
    chartViewBar->setRenderHint(QPainter::Antialiasing);
    layoutGraphique->addWidget(chartViewBar);
    tabWidget->addTab(tabGraphique, "Diagramme");

    // Onglet Statistiques détaillées
    QWidget* tabNumeriques = new QWidget();
    QVBoxLayout* layoutNumeriques = new QVBoxLayout(tabNumeriques);

    QTextEdit* textStats = new QTextEdit();
    textStats->setReadOnly(true);

    QString html = QString(
                       "<html><body style='font-family: Arial; margin: 20px;'>"
                       "<h2>Statistiques Détaillées</h2>"
                       "<table width='100%' border='1' style='border-collapse: collapse;'>"
                       "<tr style='background-color: #3498db; color: white;'><th>Paramètre</th><th>Valeur</th></tr>"
                       "<tr><td>Nombre total de véhicules</td><td><b>%1</b></td></tr>"
                       "<tr><td>Kilométrage minimum</td><td><b>%2 km</b></td></tr>"
                       "<tr><td>Kilométrage maximum</td><td><b>%3 km</b></td></tr>"
                       "<tr><td>Kilométrage moyen</td><td><b>%4 km</b></td></tr>"
                       "<tr><td>Kilométrage total</td><td><b>%5 km</b></td></tr>"
                       "</table>"
                       "<h3>Répartition par Plages</h3>"
                       "<table width='100%' border='1' style='border-collapse: collapse;'>"
                       "<tr style='background-color: #3498db; color: white;'><th>Plage</th><th>Nombre</th><th>Pourcentage</th></tr>"
                       ).arg(totalVehicules).arg(minKm).arg(maxKm).arg(moyenneKm, 0, 'f', 0).arg(sommeKilometrage);

    for (auto it = plages.begin(); it != plages.end(); ++it) {
        double pourcentage = (it.value() * 100.0) / totalVehicules;
        html += QString("<tr><td>%1</td><td>%2</td><td><b>%3%</b></td></tr>")
                    .arg(it.key()).arg(it.value()).arg(pourcentage, 0, 'f', 1);
    }

    html += "</table></body></html>";
    textStats->setHtml(html);
    layoutNumeriques->addWidget(textStats);
    tabWidget->addTab(tabNumeriques, "Détails");

    mainLayout->addWidget(tabWidget);

    QDialogButtonBox* buttonBox = new QDialogButtonBox(QDialogButtonBox::Close);
    connect(buttonBox, &QDialogButtonBox::rejected, statsDialog, &QDialog::reject);
    mainLayout->addWidget(buttonBox);

    statsDialog->exec();
}

void MainWindow::on_pushButton_retour_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_Employe_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

// === FONCTIONS ALERTES ASSURANCE ===
void MainWindow::analyserTableauPourAlertes() {
    QMap<QString, QVector<QString>> vehiculesParCategorie;
    QDate aujourdhui = QDate::currentDate();
    int urgentCount = 0;
    int attentionCount = 0;

    for (int row = 0; row < ui->tab->rowCount(); ++row) {
        QTableWidgetItem* itemDate = ui->tab->item(row, 3);
        QTableWidgetItem* itemImmat = ui->tab->item(row, 0);
        QTableWidgetItem* itemModele = ui->tab->item(row, 1);

        if (itemDate && !itemDate->text().isEmpty() && itemImmat) {
            QDate dateAssurance = QDate::fromString(itemDate->text(), "dd/MM/yyyy");
            if (dateAssurance.isValid()) {
                int joursRestants = aujourdhui.daysTo(dateAssurance);
                QString infoVehicule = QString("%1 - %2 (Expire: %3)")
                                           .arg(itemImmat->text())
                                           .arg(itemModele ? itemModele->text() : "N/A")
                                           .arg(dateAssurance.toString("dd/MM/yyyy"));

                if (joursRestants <= 7 && joursRestants >= 0) {
                    vehiculesParCategorie["URGENT"].append(infoVehicule);
                    urgentCount++;
                } else if (joursRestants <= 30 && joursRestants > 7) {
                    vehiculesParCategorie["ATTENTION"].append(infoVehicule);
                    attentionCount++;
                }
            }
        }
    }

    if (urgentCount > 0 || attentionCount > 0) {
        afficherAlerteAssurance(urgentCount, attentionCount, vehiculesParCategorie);
    }
}

void MainWindow::verifierAlertesAssurance() {
    analyserTableauPourAlertes();
}

void MainWindow::afficherAlerteAssurance(int urgentCount, int attentionCount, const QMap<QString, QVector<QString>>& vehiculesParCategorie) {
    QDialog *alerteDialog = new QDialog(this);
    alerteDialog->setWindowTitle("ALERTES ASSURANCE");
    alerteDialog->resize(600, 400);

    QVBoxLayout *layout = new QVBoxLayout(alerteDialog);

    QLabel *titleLabel = new QLabel("ALERTES ASSURANCE VÉHICULES");
    titleLabel->setStyleSheet("font-size: 18px; font-weight: bold; color: #c0392b; padding: 10px;");
    titleLabel->setAlignment(Qt::AlignCenter);
    layout->addWidget(titleLabel);

    QTextEdit *alertContent = new QTextEdit();
    alertContent->setReadOnly(true);

    QString htmlContent = "<html><body style='font-family: Arial; font-size: 11pt;'>";
    htmlContent += "<p style='color: #7f8c8d;'>Analyse effectuée le " + QDate::currentDate().toString("dd/MM/yyyy") + "</p>";

    if (urgentCount > 0) {
        htmlContent += QString(
                           "<div style='background-color: #ffebee; border-left: 5px solid #c0392b; padding: 15px; margin: 10px 0;'>"
                           "<h3 style='color: #c0392b; margin: 0;'>URGENT - Expire dans 7 jours</h3>"
                           "<p style='margin: 5px 0;'><strong>%1 véhicule(s)</strong></p>"
                           "</div>"
                           ).arg(urgentCount);
    }

    if (attentionCount > 0) {
        htmlContent += QString(
                           "<div style='background-color: #fff3e0; border-left: 5px solid #f39c12; padding: 15px; margin: 10px 0;'>"
                           "<h3 style='color: #f39c12; margin: 0;'>ATTENTION - Expire dans 8-30 jours</h3>"
                           "<p style='margin: 5px 0;'><strong>%1 véhicule(s)</strong></p>"
                           "</div>"
                           ).arg(attentionCount);
    }

    htmlContent += "<h4>Véhicules concernés :</h4>";

    for (auto it = vehiculesParCategorie.begin(); it != vehiculesParCategorie.end(); ++it) {
        QString categorie = it.key();
        QVector<QString> vehicules = it.value();

        if (!vehicules.isEmpty()) {
            htmlContent += "<h5>" + categorie + "</h5><ul>";
            for (const QString& vehicule : vehicules) {
                htmlContent += "<li>" + vehicule + "</li>";
            }
            htmlContent += "</ul>";
        }
    }

    htmlContent += "</body></html>";
    alertContent->setHtml(htmlContent);
    layout->addWidget(alertContent);

    QDialogButtonBox *buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok);
    connect(buttonBox, &QDialogButtonBox::accepted, alerteDialog, &QDialog::accept);
    layout->addWidget(buttonBox);

    alerteDialog->exec();
}

// === FONCTIONS ALERTES INTELLIGENTES ===
void MainWindow::on_pushButton_alertes_clicked()
{
    QDialog *alertesDialog = new QDialog(this);
    alertesDialog->setWindowTitle("🚨 Système d'Alertes et Statistiques");
    alertesDialog->resize(900, 700);

    QVBoxLayout *layout = new QVBoxLayout(alertesDialog);

    // Titre principal
    QLabel *titleLabel = new QLabel("🚨 SYSTÈME D'ALERTES ET STATISTIQUES");
    titleLabel->setStyleSheet("font-size: 22px; font-weight: bold; color: #e74c3c; padding: 20px; background: linear-gradient(135deg, #ffebee, #fff3e0); border-radius: 15px;");
    titleLabel->setAlignment(Qt::AlignCenter);
    layout->addWidget(titleLabel);

    // Message d'information
    QLabel *infoLabel = new QLabel("📊 Vue complète des alertes et statistiques de votre flotte automobile");
    infoLabel->setStyleSheet("font-size: 14px; color: #7f8c8d; padding: 10px; text-align: center;");
    infoLabel->setAlignment(Qt::AlignCenter);
    layout->addWidget(infoLabel);

    // Conteneur avec onglets
    QTabWidget *tabWidget = new QTabWidget();
    tabWidget->setStyleSheet("QTabWidget::pane { border: 2px solid #bdc3c7; border-radius: 10px; }"
                             "QTabBar::tab { background: #ecf0f1; padding: 10px; border-radius: 5px; }"
                             "QTabBar::tab:selected { background: #3498db; color: white; }");

    // === ONGLET ALERTES ASSURANCE ===
    QWidget *tabAssurance = new QWidget();
    QVBoxLayout *layoutAssurance = new QVBoxLayout(tabAssurance);

    QTextEdit *assuranceContent = new QTextEdit();
    assuranceContent->setReadOnly(true);

    // Analyser les assurances
    QDate aujourdhui = QDate::currentDate();
    QMap<QString, QVector<QString>> vehiculesParCategorie;
    int urgentCount = 0;
    int attentionCount = 0;
    int normalCount = 0;
    int expireCount = 0;

    QSqlQuery query("SELECT IMMATRICULATION, MODÈLE_DU_VEHICLE, DATE_ASSURANCE FROM VEHICULE WHERE DATE_ASSURANCE IS NOT NULL");

    while (query.next()) {
        QString immatriculation = query.value(0).toString();
        QString modele = query.value(1).toString();
        QDate dateAssurance = query.value(2).toDate();

        if (dateAssurance.isValid()) {
            int joursRestants = aujourdhui.daysTo(dateAssurance);
            QString infoVehicule = QString("%1 - %2 (Expire: %3 - J-%4)")
                                       .arg(immatriculation)
                                       .arg(modele)
                                       .arg(dateAssurance.toString("dd/MM/yyyy"))
                                       .arg(joursRestants);

            if (joursRestants < 0) {
                vehiculesParCategorie["EXPIRE"].append(infoVehicule.replace("J-" + QString::number(joursRestants), "EXPIRÉE"));
                expireCount++;
            }
            else if (joursRestants <= 7) {
                vehiculesParCategorie["URGENT"].append(infoVehicule);
                urgentCount++;
            } else if (joursRestants <= 30) {
                vehiculesParCategorie["ATTENTION"].append(infoVehicule);
                attentionCount++;
            } else {
                vehiculesParCategorie["NORMAL"].append(infoVehicule);
                normalCount++;
            }
        }
    }

    // Générer le contenu HTML
    QString htmlContent = "<html><body style='font-family: Arial; font-size: 11pt;'>";

    // Résumé avec indicateurs visuels
    htmlContent += "<div style='background: linear-gradient(135deg, #f8f9fa, #e9ecef); padding: 20px; border-radius: 10px; margin-bottom: 20px;'>";
    htmlContent += "<h3 style='color: #2c3e50; margin-top: 0; text-align: center;'>📊 TABLEAU DE BORD DES ALERTES</h3>";
    htmlContent += "<table width='100%' style='border-collapse: collapse; font-size: 12pt;'>";

    htmlContent += QString("<tr style='background-color: #8B0000; color: white;'><td style='padding: 12px; text-align: center;'><strong>⛔ EXPIRÉ</strong></td><td style='padding: 12px; text-align: center;'><strong>%1 véhicule(s)</strong></td></tr>").arg(expireCount);
    htmlContent += QString("<tr style='background-color: #e74c3c; color: white;'><td style='padding: 12px; text-align: center;'><strong>🔴 URGENT (≤ 7 jours)</strong></td><td style='padding: 12px; text-align: center;'><strong>%1 véhicule(s)</strong></td></tr>").arg(urgentCount);
    htmlContent += QString("<tr style='background-color: #f39c12; color: white;'><td style='padding: 12px; text-align: center;'><strong>🟡 ATTENTION (8-30 jours)</strong></td><td style='padding: 12px; text-align: center;'><strong>%1 véhicule(s)</strong></td></tr>").arg(attentionCount);
    htmlContent += QString("<tr style='background-color: #27ae60; color: white;'><td style='padding: 12px; text-align: center;'><strong>🟢 NORMAL (> 30 jours)</strong></td><td style='padding: 12px; text-align: center;'><strong>%1 véhicule(s)</strong></td></tr>").arg(normalCount);

    htmlContent += "</table></div>";

    // Alertes détaillées
    for (auto it = vehiculesParCategorie.begin(); it != vehiculesParCategorie.end(); ++it) {
        QString categorie = it.key();
        QVector<QString> vehicules = it.value();

        if (!vehicules.isEmpty()) {
            QString couleurFond, couleurTexte, icone;

            if (categorie == "EXPIRE") {
                couleurFond = "#ffcccc";
                couleurTexte = "#8B0000";
                icone = "⛔";
            } else if (categorie == "URGENT") {
                couleurFond = "#ffebee";
                couleurTexte = "#c0392b";
                icone = "🔴";
            } else if (categorie == "ATTENTION") {
                couleurFond = "#fff3e0";
                couleurTexte = "#e67e22";
                icone = "🟡";
            } else {
                couleurFond = "#e8f5e8";
                couleurTexte = "#27ae60";
                icone = "🟢";
            }

            htmlContent += QString(
                               "<div style='background-color: %1; border-left: 5px solid %2; padding: 15px; margin: 10px 0; border-radius: 8px;'>"
                               "<h3 style='color: %2; margin: 0 0 10px 0;'>%3 %4 (%5 véhicule(s))</h3>"
                               "<ul style='color: %2; margin: 0;'>"
                               ).arg(couleurFond).arg(couleurTexte).arg(icone).arg(categorie).arg(vehicules.size());

            for (const QString& vehicule : vehicules) {
                htmlContent += "<li style='margin-bottom: 5px;'>" + vehicule + "</li>";
            }

            htmlContent += "</ul></div>";
        }
    }

    if (expireCount == 0 && urgentCount == 0 && attentionCount == 0) {
        htmlContent += "<div style='background-color: #e8f5e8; padding: 30px; text-align: center; border-radius: 10px;'>";
        htmlContent += "<h3 style='color: #27ae60;'>✅ TOUT EST EN ORDRE</h3>";
        htmlContent += "<p style='font-size: 14px;'>Aucune alerte d'assurance urgente à signaler.</p>";
        htmlContent += "</div>";
    }

    htmlContent += "</body></html>";
    assuranceContent->setHtml(htmlContent);
    layoutAssurance->addWidget(assuranceContent);

    tabWidget->addTab(tabAssurance, "🚨 Alertes Assurance");

    // === ONGLET STATISTIQUES DÉTAILLÉES ===
    QWidget *tabStats = new QWidget();
    QVBoxLayout *layoutStats = new QVBoxLayout(tabStats);

    QTextEdit *statsContent = new QTextEdit();
    statsContent->setReadOnly(true);

    // Calculer les statistiques
    int totalVehicules = expireCount + urgentCount + attentionCount + normalCount;
    QString statsHtml = "<html><body style='font-family: Arial; font-size: 11pt;'>";
    statsHtml += "<h3 style='color: #2c3e50; text-align: center;'>📈 STATISTIQUES DÉTAILLÉES</h3>";

    if (totalVehicules > 0) {
        double pourcentageExpire = (expireCount * 100.0) / totalVehicules;
        double pourcentageUrgent = (urgentCount * 100.0) / totalVehicules;
        double pourcentageAttention = (attentionCount * 100.0) / totalVehicules;
        double pourcentageNormal = (normalCount * 100.0) / totalVehicules;

        statsHtml += "<div style='background: linear-gradient(135deg, #f8f9fa, #e9ecef); padding: 20px; border-radius: 10px; margin: 15px 0;'>";
        statsHtml += "<table width='100%' style='border-collapse: collapse;'>";
        statsHtml += "<tr style='background-color: #34495e; color: white;'>"
                     "<th style='padding: 12px; text-align: center;'>Catégorie</th>"
                     "<th style='padding: 12px; text-align: center;'>Nombre</th>"
                     "<th style='padding: 12px; text-align: center;'>Pourcentage</th>"
                     "<th style='padding: 12px; text-align: center;'>Visualisation</th></tr>";

        statsHtml += QString("<tr><td style='padding: 10px; border: 1px solid #ddd; text-align: center;'>⛔ EXPIRÉ</td>"
                             "<td style='padding: 10px; border: 1px solid #ddd; text-align: center;'>%1</td>"
                             "<td style='padding: 10px; border: 1px solid #ddd; text-align: center;'>%2%</td>"
                             "<td style='padding: 10px; border: 1px solid #ddd; text-align: center;'>"
                             "<div style='background-color: #8B0000; height: 20px; width: %3%; border-radius: 3px;'></div></td></tr>")
                         .arg(expireCount).arg(pourcentageExpire, 0, 'f', 1).arg(pourcentageExpire);

        statsHtml += QString("<tr><td style='padding: 10px; border: 1px solid #ddd; text-align: center;'>🔴 URGENT</td>"
                             "<td style='padding: 10px; border: 1px solid #ddd; text-align: center;'>%1</td>"
                             "<td style='padding: 10px; border: 1px solid #ddd; text-align: center;'>%2%</td>"
                             "<td style='padding: 10px; border: 1px solid #ddd; text-align: center;'>"
                             "<div style='background-color: #e74c3c; height: 20px; width: %3%; border-radius: 3px;'></div></td></tr>")
                         .arg(urgentCount).arg(pourcentageUrgent, 0, 'f', 1).arg(pourcentageUrgent);

        statsHtml += QString("<tr><td style='padding: 10px; border: 1px solid #ddd; text-align: center;'>🟡 ATTENTION</td>"
                             "<td style='padding: 10px; border: 1px solid #ddd; text-align: center;'>%1</td>"
                             "<td style='padding: 10px; border: 1px solid #ddd; text-align: center;'>%2%</td>"
                             "<td style='padding: 10px; border: 1px solid #ddd; text-align: center;'>"
                             "<div style='background-color: #f39c12; height: 20px; width: %3%; border-radius: 3px;'></div></td></tr>")
                         .arg(attentionCount).arg(pourcentageAttention, 0, 'f', 1).arg(pourcentageAttention);

        statsHtml += QString("<tr><td style='padding: 10px; border: 1px solid #ddd; text-align: center;'>🟢 NORMAL</td>"
                             "<td style='padding: 10px; border: 1px solid #ddd; text-align: center;'>%1</td>"
                             "<td style='padding: 10px; border: 1px solid #ddd; text-align: center;'>%2%</td>"
                             "<td style='padding: 10px; border: 1px solid #ddd; text-align: center;'>"
                             "<div style='background-color: #27ae60; height: 20px; width: %3%; border-radius: 3px;'></div></td></tr>")
                         .arg(normalCount).arg(pourcentageNormal, 0, 'f', 1).arg(pourcentageNormal);

        statsHtml += "</table></div>";

        // Recommandations
        statsHtml += "<div style='background-color: #e3f2fd; padding: 20px; border-radius: 10px; margin-top: 20px; border-left: 5px solid #1976d2;'>";
        statsHtml += "<h4 style='color: #1976d2;'>💡 RECOMMANDATIONS STRATÉGIQUES</h4>";
        statsHtml += "<ul style='color: #2c3e50;'>";
        if (expireCount > 0) {
            statsHtml += "<li style='margin-bottom: 8px;'><strong>ACTION IMMÉDIATE CRITIQUE :</strong> Les assurances de " + QString::number(expireCount) + " véhicule(s) sont EXPIRÉES ! Renouvellement urgent requis.</li>";
        }
        if (urgentCount > 0) {
            statsHtml += "<li style='margin-bottom: 8px;'><strong>Action prioritaire :</strong> " + QString::number(urgentCount) + " véhicule(s) nécessitent un renouvellement immédiat (expirent dans ≤ 7 jours)</li>";
        }
        if (attentionCount > 0) {
            statsHtml += "<li style='margin-bottom: 8px;'><strong>Planification recommandée :</strong> Prévoyez le renouvellement des " + QString::number(attentionCount) + " véhicule(s) en alerte ATTENTION</li>";
        }
        if (normalCount == totalVehicules) {
            statsHtml += "<li style='margin-bottom: 8px;'><strong>Excellent :</strong> Toutes les assurances sont à jour pour plus de 30 jours. Maintenez cette situation.</li>";
        }
        statsHtml += "</ul></div>";
    } else {
        statsHtml += "<p style='color: #7f8c8d; text-align: center; padding: 30px;'>Aucune donnée d'assurance disponible.</p>";
    }

    statsHtml += "</body></html>";
    statsContent->setHtml(statsHtml);
    layoutStats->addWidget(statsContent);

    tabWidget->addTab(tabStats, "📊 Statistiques Détaillées");

    layout->addWidget(tabWidget);

    // Boutons d'action
    QHBoxLayout *buttonLayout = new QHBoxLayout();

    QPushButton *btnRafraichir = new QPushButton("🔄 Actualiser");
    QPushButton *btnExport = new QPushButton("📤 Exporter Rapport");
    QPushButton *btnFermer = new QPushButton("Fermer");

    btnRafraichir->setStyleSheet("QPushButton { background-color: #3498db; color: white; padding: 10px; border-radius: 5px; font-weight: bold; }");
    btnExport->setStyleSheet("QPushButton { background-color: #27ae60; color: white; padding: 10px; border-radius: 5px; font-weight: bold; }");
    btnFermer->setStyleSheet("QPushButton { background-color: #95a5a6; color: white; padding: 10px; border-radius: 5px; font-weight: bold; }");

    connect(btnRafraichir, &QPushButton::clicked, alertesDialog, [this, alertesDialog]() {
        alertesDialog->close();
        on_pushButton_alertes_clicked();
    });

    connect(btnExport, &QPushButton::clicked, this, [this]() {
        QMessageBox::information(this, "Export", "Fonction d'export à implémenter");
    });

    connect(btnFermer, &QPushButton::clicked, alertesDialog, &QDialog::close);

    buttonLayout->addWidget(btnRafraichir);
    buttonLayout->addWidget(btnExport);
    buttonLayout->addWidget(btnFermer);

    layout->addLayout(buttonLayout);

    alertesDialog->exec();
}

void MainWindow::verifierAssurances30Jours()
{
    QDate aujourdhui = QDate::currentDate();
    int vehiculesAlerte = 0;
    int vehiculesUrgents = 0;
    int vehiculesExpires = 0;
    QStringList vehiculesConcernes;
    QStringList vehiculesUrgentsList;
    QStringList vehiculesExpiresList;

    QSqlQuery query("SELECT IMMATRICULATION, MODÈLE_DU_VEHICLE, DATE_ASSURANCE FROM VEHICULE WHERE DATE_ASSURANCE IS NOT NULL");

    while (query.next()) {
        QDate dateAssurance = query.value(2).toDate();
        if (dateAssurance.isValid()) {
            int joursRestants = aujourdhui.daysTo(dateAssurance);

            if (joursRestants < 0) {
                // ASSURANCE EXPIREE
                vehiculesExpires++;
                QString vehiculeInfo = QString("%1 - %2 (EXPIRÉE)")
                                           .arg(query.value(0).toString())
                                           .arg(query.value(1).toString());
                vehiculesExpiresList << vehiculeInfo;
            }
            else if (joursRestants <= 30) {
                vehiculesAlerte++;
                QString vehiculeInfo = QString("%1 - %2 (J-%3)")
                                           .arg(query.value(0).toString())
                                           .arg(query.value(1).toString())
                                           .arg(joursRestants);
                vehiculesConcernes << vehiculeInfo;

                if (joursRestants <= 7) {
                    vehiculesUrgents++;
                    vehiculesUrgentsList << vehiculeInfo;
                }
            }
        }
    }

    // METTRE À JOUR LE BOUTON
    mettreAJourBoutonAlertes(vehiculesAlerte, vehiculesUrgents, vehiculesExpires);

    if (vehiculesExpires > 0 || vehiculesAlerte > 0) {
        // Afficher une alerte discrète dans la barre de status
        QString message;
        if (vehiculesExpires > 0) {
            message = QString("⛔ %1 véhicule(s) avec assurance EXPIRÉE").arg(vehiculesExpires);
            statusBar()->setStyleSheet("background-color: #8B0000; color: white; padding: 5px;");
        } else {
            message = QString("⚠️ %1 véhicule(s) avec assurance expirant dans ≤ 30 jours").arg(vehiculesAlerte);
            statusBar()->setStyleSheet("background-color: #fff3cd; color: #856404; padding: 5px;");
        }
        statusBar()->showMessage(message, 10000);

        // NOTIFICATION AVEC ICÔNE
        int alertLevel;
        QString notificationTitle;
        QString notificationMessage;

        if (vehiculesExpires > 0) {
            alertLevel = 2; // Critique
            notificationTitle = "⛔ ASSURANCES EXPIRÉES !";
            notificationMessage = QString("%1 véhicule(s) avec assurance EXPIRÉE\n%2 véhicule(s) URGENTS\n%3 véhicule(s) à surveiller")
                                      .arg(vehiculesExpires)
                                      .arg(vehiculesUrgents)
                                      .arg(vehiculesAlerte - vehiculesUrgents);
        } else if (vehiculesUrgents > 0) {
            alertLevel = 2; // Critique
            notificationTitle = "🚨 ALERTE URGENTE - Assurances";
            notificationMessage = QString("%1 véhicule(s) URGENTS (%2 au total)\nExpirent dans ≤ 7 jours")
                                      .arg(vehiculesUrgents)
                                      .arg(vehiculesAlerte);
        } else {
            alertLevel = 1; // Avertissement
            notificationTitle = "⚠️ Alertes Assurances";
            notificationMessage = QString("%1 véhicule(s) à surveiller\nExpiration dans 8-30 jours")
                                      .arg(vehiculesAlerte);
        }

        showTrayNotification(notificationTitle, notificationMessage, alertLevel);

        // Afficher aussi un message dans la console
        qDebug() << "=== ALERTES ASSURANCE ===";
        qDebug() << "Message:" << message;
        if (vehiculesExpires > 0) {
            qDebug() << "Véhicules EXPIRÉS:" << vehiculesExpiresList;
        }
        qDebug() << "Véhicules concernés:" << vehiculesConcernes;
        if (vehiculesUrgents > 0) {
            qDebug() << "Véhicules URGENTS:" << vehiculesUrgentsList;
        }

    } else {
        // Aucune alerte - notification positive
        showTrayNotification("✅ Aucune Alerte",
                             "Toutes les assurances sont à jour pour plus de 30 jours",
                             0); // Niveau information

        statusBar()->showMessage("✅ Aucun véhicule avec assurance expirant dans ≤ 30 jours", 5000);
        statusBar()->setStyleSheet("background-color: #d4edda; color: #155724; padding: 5px;");

        qDebug() << "✅ Aucun véhicule avec assurance expirant dans ≤ 30 jours";

        // Réinitialiser le compteur si plus d'alertes
        alertCount = 0;
        updateTrayIcon();
    }
}

void MainWindow::mettreAJourBoutonAlertes(int vehiculesAlerte, int vehiculesUrgents, int vehiculesExpires)
{
    QPushButton *btnVehicule6 = findChild<QPushButton*>("Vehicule_6");
    if (!btnVehicule6) return;

    QString texteBouton;
    QString styleSheet;

    if (vehiculesExpires > 0) {
        // ASSURANCE EXPIREE - bouton rouge foncé avec emoji d'expiration
        texteBouton = QString("⛔ Véhicule (%1 EXP.)").arg(vehiculesExpires);
        styleSheet =
            "QPushButton {"
            "    background-color: #8B0000;"
            "    color: white;"
            "    font-weight: bold;"
            "    font-size: 14px;"
            "    padding: 10px;"
            "    border: 2px solid #660000;"
            "    border-radius: 8px;"
            "}"
            "QPushButton:hover {"
            "    background-color: #660000;"
            "    border: 2px solid #550000;"
            "}"
            "QPushButton:pressed {"
            "    background-color: #550000;"
            "}";
    }
    else if (vehiculesUrgents > 0) {
        // Alerte URGENTE - bouton rouge avec emoji d'urgence
        texteBouton = QString("🚨 Véhicule (%1 URG.)").arg(vehiculesUrgents);
        styleSheet =
            "QPushButton {"
            "    background-color: #ff4444;"
            "    color: white;"
            "    font-weight: bold;"
            "    font-size: 14px;"
            "    padding: 10px;"
            "    border: 2px solid #cc0000;"
            "    border-radius: 8px;"
            "}"
            "QPushButton:hover {"
            "    background-color: #cc0000;"
            "    border: 2px solid #aa0000;"
            "}"
            "QPushButton:pressed {"
            "    background-color: #aa0000;"
            "}";
    }
    else if (vehiculesAlerte > 0) {
        // Alerte normale - bouton orange avec emoji d'avertissement
        texteBouton = QString("⚠️ Véhicule (%1 Alt.)").arg(vehiculesAlerte);
        styleSheet =
            "QPushButton {"
            "    background-color: #ffaa00;"
            "    color: white;"
            "    font-weight: bold;"
            "    font-size: 14px;"
            "    padding: 10px;"
            "    border: 2px solid #cc8800;"
            "    border-radius: 8px;"
            "}"
            "QPushButton:hover {"
            "    background-color: #cc8800;"
            "    border: 2px solid #aa6600;"
            "}"
            "QPushButton:pressed {"
            "    background-color: #aa6600;"
            "}";
    }
    else {
        // Aucune alerte - bouton VERT sans emoji
        texteBouton = "Véhicule";
        styleSheet =
            "QPushButton {"
            "    background-color: #4CAF50;"
            "    color: white;"
            "    font-weight: bold;"
            "    font-size: 14px;"
            "    padding: 10px;"
            "    border: 2px solid #45a049;"
            "    border-radius: 8px;"
            "}"
            "QPushButton:hover {"
            "    background-color: #45a049;"
            "    border: 2px solid #3d8b40;"
            "}"
            "QPushButton:pressed {"
            "    background-color: #3d8b40;"
            "}";
    }

    btnVehicule6->setText(texteBouton);
    btnVehicule6->setStyleSheet(styleSheet);
}
