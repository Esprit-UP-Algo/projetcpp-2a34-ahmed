#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connection.h"
#include "employee.h"
#include "apprenant.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QTime>
#include <QMap>
#include <QSettings>
#include "examen.h"
#include <QMessageBox>
#include <QDebug>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QPushButton>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QTextToSpeech>
#include <QApplication>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QProgressBar>
#include <QScrollArea>
#include <QFrame>
#include <QPrinter>
#include <QPainter>
#include <QFileDialog>
#include <QDateTime>
#include <QCalendarWidget>
#include <QDialog>
#include <QTextDocument>
#include <QDateEdit>
#include <QDate>
#include <algorithm>
#include <QPrintDialog>
#include <QDesktopServices>
#include <QTimer>
#include <QPixmap>
#include <QtMath>
#include <QVector>
#include <QMap>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QComboBox>
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>
#include <QEasingCurve>
#include <QGroupBox>
#include <QFile>
#include <QTextStream>
#include "backup.h"
#include "import.h"
#include "vehicule.h"
#include "arduino.h"
#include <QCheckBox>
#include <QtMath>
#include <QHeaderView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , ligneSelectionnee(-1)
    , critereTriActuel("")
    , calendarWidget(nullptr)
    , prevWeekBtn(nullptr)
    , nextWeekBtn(nullptr)
    , currentWeekLabel(nullptr)
    , employeeFilter(nullptr)
    , addAvailabilityBtn(nullptr)
    , calendar(nullptr)
    , timeSlotsTable(nullptr)
{
    ui->setupUi(this);
    setupArduino();
    // ==================== CONFIGURATION INITIALE ====================

    // Configuration pour la gestion des employés
    ui->tableWidget->setColumnCount(5);
    QStringList headersEmployes;
    headersEmployes << "CIN" << "Nom" << "Prénom" << "Téléphone" << "Disponibilité";
    ui->tableWidget->setHorizontalHeaderLabels(headersEmployes);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setRowCount(0);

    // Configuration pour la gestion des examens
    ui->tableWidget_2->setColumnCount(6);
    QStringList headersExamens = {"ID", "Type Examen", "Date", "Numéro", "Nom Apprenant", "Nb Utilisations"};
    ui->tableWidget_2->setHorizontalHeaderLabels(headersExamens);
    ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_2->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);

    // Configuration des dates
    ui->dateEdit->setDate(QDate::currentDate());
    ui->dateEdit->setMinimumDate(QDate::currentDate());
    ui->dateEdit->setDisplayFormat("dd/MM/yyyy");

    // Configuration des combobox
    ui->comboBox->addItem("Sélectionner un critère");
    ui->comboBox->addItem("Disponibilité");
    ui->comboBox->addItem("Téléphone");

    ui->comboBox_2->addItem("Type d'examen");
    ui->comboBox_2->addItem("Date d'examen");
    ui->comboBox_2->addItem("Nb utilisations");

    // Chargement initial des données
    mettreAJourTableauEmployes();
    refreshTableExamens();
    ui->tab->setColumnCount(6);
    QStringList headersVehicules;
    headersVehicules << "Immatriculation" << "Modèle" << "Kilométrage" << "Date Assurance" << "État" << "Température";
    ui->tab->setHorizontalHeaderLabels(headersVehicules);
    ui->tab->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tab->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tab->setEditTriggers(QAbstractItemView::NoEditTriggers);
    refreshTableVehicules();

    // ==================== VALIDATEURS DE SAISIE ====================

    // Validateurs pour les employés
    QRegularExpression nomPrenomRegex("^[A-Za-zÀ-ÿ\\s\\-']+$");
    ui->textimm->setValidator(new QRegularExpressionValidator(nomPrenomRegex, this));
    ui->textimm->setPlaceholderText("Lettres seulement");

    QRegularExpression cinRegex("^\\d{0,8}$");
    ui->textemodel->setValidator(new QRegularExpressionValidator(cinRegex, this));
    ui->textemodel->setPlaceholderText("8 chiffres maximum");

    ui->identifant->setPlaceholderText("Rechercher par CIN");

    // ==================== CONNEXIONS DES SIGNALS/SLOTS ====================

    // Connexions pour les employés
    connect(ui->modifier, &QPushButton::clicked, this, &MainWindow::on_btnModifier_clicked);
    connect(ui->annuler_4, &QPushButton::clicked, this, &MainWindow::on_annuler_4_clicked);
    connect(ui->Supprimer, &QPushButton::clicked, this, &MainWindow::on_Supprimer_clicked);
    connect(ui->btnajouter, &QPushButton::clicked, this, &MainWindow::on_btnajouter_clicked);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::on_pushButton_clicked);
    connect(ui->triup, &QPushButton::clicked, this, &MainWindow::on_triup_clicked);
    connect(ui->tridown, &QPushButton::clicked, this, &MainWindow::on_tridown_clicked);

    // Connexions pour les examens
    connect(ui->modifier_2, &QPushButton::clicked, this, &MainWindow::on_modifier_2_clicked);
    connect(ui->Supprimer_2, &QPushButton::clicked, this, &MainWindow::on_Supprimer_2_clicked);
    connect(ui->btnajouter_2, &QPushButton::clicked, this, &MainWindow::on_btnajouter_2_clicked);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::on_pushButton_2_clicked);
    connect(ui->triup_2, &QPushButton::clicked, this, &MainWindow::on_triup_2_clicked);
    connect(ui->tridown_2, &QPushButton::clicked, this, &MainWindow::on_tridown_2_clicked);

    // Connexions fonctionnalités avancées
    connect(ui->lire, &QPushButton::clicked, this, &MainWindow::on_lire_clicked);
    connect(ui->statistique, &QPushButton::clicked, this, &MainWindow::on_statistique_clicked);
    if (QPushButton *btn = findChild<QPushButton*>("pushButton_statistiques_2")) {
        connect(btn, &QPushButton::clicked, this, &MainWindow::on_statistique_clicked);
    }
    if (QPushButton *btn2 = findChild<QPushButton*>("pushButton_statistique_5")) {
        connect(btn2, &QPushButton::clicked, this, &MainWindow::on_statistique_clicked);
    }
    connect(ui->exportPdf, &QPushButton::clicked, this, &MainWindow::on_exportPdf_clicked);
    connect(ui->btnstat, &QPushButton::clicked, this, &MainWindow::on_btnstat_clicked);
    connect(ui->btnpdf, &QPushButton::clicked, this, &MainWindow::on_btnpdf_clicked);
    if (QPushButton *btnBackup = findChild<QPushButton*>("backup_2")) {
        connect(btnBackup, &QPushButton::clicked, this, [this]() {
            Backup bkp(this);
            bkp.exportDatabase(this);
        });
    }
    if (QPushButton *btnImport = findChild<QPushButton*>("importer_2")) {
        connect(btnImport, &QPushButton::clicked, this, [this]() {
            Import imp(this);
            imp.importDatabase(this);
            refreshTableApprenants();
        });
    }
    if (QPushButton *apprenantPdfBtn = findChild<QPushButton*>("pushButton_pdf_2")) {
        connect(apprenantPdfBtn, &QPushButton::clicked, this, &MainWindow::on_exportPdf_clicked);
    }

    if (ui->page_4) {
        const auto vehBtns = ui->page_4->findChildren<QPushButton*>();
        for (QPushButton *btn : vehBtns) {
            if (btn->text().contains("Exportation PDF", Qt::CaseInsensitive)) {
                connect(btn, &QPushButton::clicked, this, &MainWindow::on_exportPdf_clicked);
            }
        }
    }

    // Connexion SMS
    QPushButton *btnSMS = findChild<QPushButton*>("btnsms");
    if (btnSMS) {
        connect(btnSMS, &QPushButton::clicked, this, &MainWindow::on_btnsms_clicked);
    }

    // Connexions des combobox et tableaux
    connect(ui->comboBox, QOverload<int>::of(&QComboBox::currentIndexChanged),
            this, &MainWindow::on_comboBox_currentIndexChanged);
    connect(ui->tableWidget, &QTableWidget::cellClicked, this, &MainWindow::on_tableWidget_cellClicked);
    connect(ui->tableWidget_2, &QTableWidget::cellClicked, this, &MainWindow::on_tableWidget_2_cellClicked);

    // ==================== CALENDRIER ====================
    connect(ui->calendrierButton, &QPushButton::clicked, this, &MainWindow::on_calendrierButton_clicked);

    ui->tableWidget_4->setColumnCount(6);
    QStringList headersApprenants = {"Nom", "Prénom", "Email", "Mot de passe", "Téléphone", "CIN"};
    ui->tableWidget_4->setHorizontalHeaderLabels(headersApprenants);
    ui->tableWidget_4->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_4->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget_4->setEditTriggers(QAbstractItemView::NoEditTriggers);

    connect(ui->pushButton_ajouter_2, &QPushButton::clicked, this, &MainWindow::on_pushButton_ajouter_2_clicked);
    connect(ui->annuler_3, &QPushButton::clicked, this, &MainWindow::on_annuler_3_clicked);
    connect(ui->pushButton_modifier_2, &QPushButton::clicked, this, &MainWindow::on_pushButton_modifier_2_clicked);
    connect(ui->Supprimer_4, &QPushButton::clicked, this, &MainWindow::on_Supprimer_4_clicked);
    connect(ui->pushButton_15, &QPushButton::clicked, this, &MainWindow::on_pushButton_15_clicked);
    connect(ui->pushButton_10, &QPushButton::clicked, this, &MainWindow::on_pushButton_10_clicked);
    connect(ui->pushButton_11, &QPushButton::clicked, this, &MainWindow::on_pushButton_11_clicked);
    connect(ui->tableWidget_4, &QTableWidget::cellClicked, this, &MainWindow::on_tableWidget_4_cellClicked);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::on_pushButton_3_clicked);
    QPushButton* btnVerifyCin = findChild<QPushButton*>("pushButton_rechercher_by_id_2");
    if (btnVerifyCin) {
        connect(btnVerifyCin, &QPushButton::clicked, this, &MainWindow::on_pushButton_rechercher_by_id_2_clicked);
    }

    refreshTableApprenants();

    if (ui->tableWidget_5) {
        ui->tableWidget_5->setColumnCount(6);
        ui->tableWidget_5->setHorizontalHeaderLabels(headersApprenants);
        ui->tableWidget_5->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tableWidget_5->setSelectionMode(QAbstractItemView::SingleSelection);
        ui->tableWidget_5->setEditTriggers(QAbstractItemView::NoEditTriggers);
        connect(ui->tableWidget_5, &QTableWidget::cellClicked, this, &MainWindow::on_tableWidget_5_cellClicked);
    }
    QPushButton* btnAfficherTout = findChild<QPushButton*>("pushButton_afficher_tout_2");
    if (btnAfficherTout) {
        connect(btnAfficherTout, &QPushButton::clicked, this, [this]() {
            refreshTableApprenants();
        });
    }

    // Connexions pour les véhicules
    if (ui->ajouter) connect(ui->ajouter, &QPushButton::clicked, this, &MainWindow::on_ajouter_clicked);
    if (ui->modifier_5) connect(ui->modifier_5, &QPushButton::clicked, this, &MainWindow::on_modifier_5_clicked);
    if (ui->annuler_7) connect(ui->annuler_7, &QPushButton::clicked, this, &MainWindow::on_annuler_7_clicked);
    if (ui->tab) connect(ui->tab, &QTableWidget::cellClicked, this, &MainWindow::on_tab_cellClicked);
    if (ui->valider) connect(ui->valider, &QPushButton::clicked, this, &MainWindow::on_valider_clicked);
    if (ui->pushButton_alertes) connect(ui->pushButton_alertes, &QPushButton::clicked, this, &MainWindow::on_pushButton_alertes_clicked);
    if (ui->pushButton_statistique_6) connect(ui->pushButton_statistique_6, &QPushButton::clicked, this, &MainWindow::on_pushButton_statistique_6_clicked);
    if (ui->pushButton_19) connect(ui->pushButton_19, &QPushButton::clicked, this, &MainWindow::on_pushButton_19_clicked);
    if (ui->pushButton_20) connect(ui->pushButton_20, &QPushButton::clicked, this, &MainWindow::on_pushButton_20_clicked);
    if (ui->Supprimer_5) connect(ui->Supprimer_5, &QPushButton::clicked, this, &MainWindow::on_Supprimer_5_clicked);
    if (ui->pushButton_4) connect(ui->pushButton_4, &QPushButton::clicked, this, &MainWindow::on_pushButton_4_clicked);
    if (ui->vehicule_btn) connect(ui->vehicule_btn, &QPushButton::clicked, this, &MainWindow::on_vehicule_btn_clicked);
    if (ui->apprenant_btn) connect(ui->apprenant_btn, &QPushButton::clicked, this, &MainWindow::on_apprenant_btn_clicked);
}

MainWindow::~MainWindow()
{
    if(arduino->isOpen())
        arduino->close();
    delete ui;
}

// ==================== MÉTHODES COMMUNES ====================

void MainWindow::viderChampsEmployes()
{
    ui->textimm->clear();
    ui->textemodel->clear();
    ui->textkilo->clear();
    ui->texteDate->clear();
    ui->textetat->clear();
    ui->identifant->clear();
}

void MainWindow::viderChampsExamens()
{
    ui->textetat_examen->clear();
    ui->textemodel_2->clear();
    ui->texteDate_2->clear();
    ui->identifiant->clear();
    ui->dateEdit->setDate(QDate::currentDate());
}

// ==================== MÉTHODES POUR LES EMPLOYÉS ====================

bool MainWindow::validerDisponibiliter(const QString& disponibiliter)
{
    QStringList disponibilitesValides = {"Disponible", "Occupé", "En congé", "Absent"};
    return disponibilitesValides.contains(disponibiliter, Qt::CaseInsensitive);
}

bool MainWindow::validerNomPrenom(const QString& texte)
{
    QRegularExpression regex("^[A-Za-zÀ-ÿ\\s\\-']+$");
    return regex.match(texte).hasMatch() && !texte.trimmed().isEmpty();
}

bool MainWindow::validerTelephone(const QString& telephone)
{
    QRegularExpression regex("^\\d{8}$");
    return regex.match(telephone).hasMatch();
}

void MainWindow::mettreAJourTableauEmployes()
{
    ui->tableWidget->setRowCount(0);
    QList<Employee> employees = Employee::chargerTousLesEmployees();
    for (const Employee &emp : employees) {
        int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(emp.getCin()));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(emp.getNom()));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(emp.getPrenom()));
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(emp.getTelephone()));
        ui->tableWidget->setItem(row, 4, new QTableWidgetItem(emp.getDisponibilite()));
    }
}

void MainWindow::afficherEmployees(const QList<Employee>& employees)
{
    ui->tableWidget->setRowCount(0);
    for (const Employee &emp : employees) {
        int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(emp.getCin()));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(emp.getNom()));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(emp.getPrenom()));
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(emp.getTelephone()));
        ui->tableWidget->setItem(row, 4, new QTableWidgetItem(emp.getDisponibilite()));
    }
}

void MainWindow::supprimerLigneTableau(const QString& cin)
{
    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QTableWidgetItem *itemCIN = ui->tableWidget->item(row, 0);
        if (itemCIN && itemCIN->text() == cin) {
            ui->tableWidget->removeRow(row);
            break;
        }
    }
}

// ==================== MÉTHODES POUR LES EXAMENS ====================

bool MainWindow::validerTypeExamen(const QString& typeExamen)
{
    QString typeLower = typeExamen.toLower();
    return (typeLower == "théorique" || typeLower == "pratique" || typeLower == "theorique");
}

bool MainWindow::validerNumero(const QString& num)
{
    return Examen::validerNum(num);
}

bool MainWindow::validerDate(const QDate& date)
{
    return Examen::validerDate(date);
}

void MainWindow::refreshTableExamens()
{
    ui->tableWidget_2->setRowCount(0);
    QList<Examen> examens = Examen::chargerTousLesExamens();

    for (const Examen& exam : examens) {
        int row = ui->tableWidget_2->rowCount();
        ui->tableWidget_2->insertRow(row);

        ui->tableWidget_2->setItem(row, 0, new QTableWidgetItem(QString::number(exam.getId())));
        ui->tableWidget_2->setItem(row, 1, new QTableWidgetItem(exam.getTypeExamen()));
        ui->tableWidget_2->setItem(row, 2, new QTableWidgetItem(exam.getDateExamen().toString("dd/MM/yyyy")));
        ui->tableWidget_2->setItem(row, 3, new QTableWidgetItem(exam.getNum()));
        ui->tableWidget_2->setItem(row, 4, new QTableWidgetItem(exam.getNomApprenant()));
        ui->tableWidget_2->setItem(row, 5, new QTableWidgetItem(QString::number(exam.getNbUtilisations())));
    }
}

void MainWindow::trierTableauExamens(int ordre)
{
    QString critere = ui->comboBox_2->currentText();
    int colonne = -1;

    if (critere == "Type d'examen") {
        colonne = 1;
    } else if (critere == "Date d'examen") {
        colonne = 2;
    } else if (critere == "Nb utilisations") {
        colonne = 5;
    } else {
        return;
    }

    QList<QList<QTableWidgetItem*>> lignes;
    int rowCount = ui->tableWidget_2->rowCount();
    int colCount = ui->tableWidget_2->columnCount();

    for (int i = 0; i < rowCount; ++i) {
        QList<QTableWidgetItem*> ligne;
        for (int j = 0; j < colCount; ++j) {
            ligne.append(ui->tableWidget_2->takeItem(i, j));
        }
        lignes.append(ligne);
    }

    if (colonne == 1) {
        std::sort(lignes.begin(), lignes.end(), [ordre](const QList<QTableWidgetItem*>& a, const QList<QTableWidgetItem*>& b) {
            bool aPratique = a[1]->text().contains("pratique", Qt::CaseInsensitive);
            bool bPratique = b[1]->text().contains("pratique", Qt::CaseInsensitive);
            return ordre == 1 ? aPratique < bPratique : aPratique > bPratique;
        });
    } else if (colonne == 2) {
        std::sort(lignes.begin(), lignes.end(), [ordre](const QList<QTableWidgetItem*>& a, const QList<QTableWidgetItem*>& b) {
            QDate dateA = QDate::fromString(a[2]->text(), "dd/MM/yyyy");
            QDate dateB = QDate::fromString(b[2]->text(), "dd/MM/yyyy");
            return ordre == 1 ? dateA < dateB : dateA > dateB;
        });
    } else if (colonne == 5) {
        std::sort(lignes.begin(), lignes.end(), [ordre](const QList<QTableWidgetItem*>& a, const QList<QTableWidgetItem*>& b) {
            int nbA = a[5]->text().toInt();
            int nbB = b[5]->text().toInt();
            return ordre == 1 ? nbA < nbB : nbA > nbB;
        });
    }

    ui->tableWidget_2->setRowCount(0);
    for (const QList<QTableWidgetItem*>& ligne : lignes) {
        int row = ui->tableWidget_2->rowCount();
        ui->tableWidget_2->insertRow(row);
        for (int j = 0; j < ligne.size(); ++j) {
            ui->tableWidget_2->setItem(row, j, ligne[j]);
        }
    }
}

void MainWindow::on_btnajouter_clicked()
{
    try {
        // Récupération des valeurs
        QString cin = ui->textemodel->text().trimmed();
        QString nom = ui->textimm->text().trimmed();
        QString prenom = ui->texteDate->toPlainText().trimmed();
        QString telephone = ui->textkilo->toPlainText().trimmed();
        QString disponibilite = ui->textetat->toPlainText().trimmed();

        // Validation des champs
        if (cin.isEmpty() || nom.isEmpty() || prenom.isEmpty() || telephone.isEmpty() || disponibilite.isEmpty()) {
            QMessageBox::warning(this, "Champs manquants", "Tous les champs sont obligatoires !");
            return;
        }

        // Vérification du format du CIN (8 chiffres)
        QRegularExpression cinRegex("^\\d{8}$");
        if (!cinRegex.match(cin).hasMatch()) {
            QMessageBox::warning(this, "Format invalide", "Le CIN doit contenir exactement 8 chiffres !");
            return;
        }

        // Validation du format du téléphone (8 chiffres)
        QRegularExpression telRegex("^\\d{8}$");
        if (!telRegex.match(telephone).hasMatch()) {
            QMessageBox::warning(this, "Format invalide", "Le numéro de téléphone doit contenir exactement 8 chiffres !");
            return;
        }

        // Validation du nom et prénom (lettres et espaces uniquement)
        QRegularExpression nomPrenomRegex("^[A-Za-zÀ-ÿ\\s\\-']+$");
        if (!nomPrenomRegex.match(nom).hasMatch() || !nomPrenomRegex.match(prenom).hasMatch()) {
            QMessageBox::warning(this, "Format invalide", "Le nom et le prénom ne doivent contenir que des lettres et des espaces !");
            return;
        }

        // Création et ajout de l'employé
        Employee emp(cin, nom, prenom, telephone, disponibilite);

        // Afficher une boîte de dialogue de confirmation
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirmation",
                                      "Voulez-vous vraiment ajouter cet employé ?\n"
                                      "CIN: " + cin + "\n" +
                                          "Nom: " + nom + "\n" +
                                          "Prénom: " + prenom,
                                      QMessageBox::Yes|QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            if (emp.ajouter()) {
                QMessageBox::information(this, "Succès", "L'employé a été ajouté avec succès !");
                viderChampsEmployes();
                mettreAJourTableauEmployes();
            } else {
                QMessageBox::critical(this, "Erreur", "Impossible d'ajouter l'employé.\nVérifiez que le CIN n'existe pas déjà.");
            }
        }
    } catch (const std::exception &e) {
        QMessageBox::critical(this, "Erreur", "Une erreur inattendue est survenue : " + QString(e.what()));
        qDebug() << "Exception in on_btnajouter_clicked:" << e.what();
    }
}

void MainWindow::on_btnModifier_clicked()
{
    try {
        // Vérifier si une ligne est sélectionnée
        if (ligneSelectionnee == -1) {
            QMessageBox::warning(this, "Sélection requise", "Veuillez sélectionner un employé à modifier !");
            return;
        }

        // Récupérer les valeurs des champs
        QString cin = ui->textemodel->text().trimmed();
        QString nom = ui->textimm->text().trimmed();
        QString prenom = ui->texteDate->toPlainText().trimmed();
        QString telephone = ui->textkilo->toPlainText().trimmed();
        QString disponibilite = ui->textetat->toPlainText().trimmed();

        // Validation des champs
        if (cin.isEmpty() || nom.isEmpty() || prenom.isEmpty() || telephone.isEmpty() || disponibilite.isEmpty()) {
            QMessageBox::warning(this, "Champs manquants", "Tous les champs sont obligatoires !");
            return;
        }

        // Vérification du format du CIN (8 chiffres)
        QRegularExpression cinRegex("^\\d{8}$");
        if (!cinRegex.match(cin).hasMatch()) {
            QMessageBox::warning(this, "Erreur", "CIN invalide ! Le CIN doit contenir exactement 8 chiffres.");
            ui->textemodel->setFocus();
            ui->textemodel->selectAll();
            return;
        }

        // Vérification du format du téléphone (8 chiffres)
        if (!validerTelephone(telephone)) {
            QMessageBox::warning(this, "Erreur", "Téléphone invalide ! Le téléphone doit contenir exactement 8 chiffres.");
            ui->textkilo->setFocus();
            ui->textkilo->selectAll();
            return;
        }

        // Vérification de la disponibilité
        if (!validerDisponibiliter(disponibilite)) {
            QMessageBox::warning(this, "Erreur", "Disponibilité invalide ! Valeurs acceptées : Disponible, Occupé, En congé, Absent");
            ui->textetat->setFocus();
            ui->textetat->selectAll();
            return;
        }

        // Demande de confirmation
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirmation",
                                      "Êtes-vous sûr de vouloir modifier cet employé ?",
                                      QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            // Création de l'objet Employee et mise à jour
            Employee emp(cin, nom, prenom, telephone, disponibilite);

            if (emp.modifier()) {
                // Mise à jour de l'interface
                mettreAJourTableauEmployes();
                viderChampsEmployes();
                ligneSelectionnee = -1;
                ui->tableWidget->clearSelection();

                QMessageBox::information(this, "Succès", "Employé modifié avec succès !");
            } else {
                QMessageBox::critical(this, "Erreur", "Échec de la modification de l'employé !");
            }
        }
    } catch (const std::exception& e) {
        QMessageBox::critical(this, "Erreur", QString("Erreur lors de la modification : ") + e.what());
    } catch (...) {
        QMessageBox::critical(this, "Erreur", "Une erreur inconnue est survenue lors de la modification.");
    }
}

void MainWindow::on_Supprimer_clicked()
{
    if (ligneSelectionnee == -1 || ligneSelectionnee >= ui->tableWidget->rowCount()) {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner un employé à supprimer!");
        return;
    }

    QString cin = ui->tableWidget->item(ligneSelectionnee, 0)->text();
    QString nom = ui->tableWidget->item(ligneSelectionnee, 1)->text();

    QMessageBox::StandardButton reply = QMessageBox::question(
        this, "Confirmation de suppression",
        "Voulez-vous vraiment supprimer l'employé :\nCIN: " + cin + "\nNom: " + nom + " ?",
        QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        Employee emp;
        emp.setCin(cin);

        if (emp.supprimer()) {
            supprimerLigneTableau(cin);
            viderChampsEmployes();
            ligneSelectionnee = -1;
            ui->tableWidget->clearSelection();
            QMessageBox::information(this, "Succès", "Employé supprimé avec succès!");
        } else {
            QMessageBox::warning(this, "Erreur", "Échec de la suppression! L'employé n'existe peut-être pas.");
        }
    }
}

void MainWindow::on_annuler_4_clicked()
{
    viderChampsEmployes();
    ligneSelectionnee = -1;
    ui->tableWidget->clearSelection();
    QMessageBox::information(this, "Annulé", "Opération annulée - Tous les champs ont été vidés");
}

void MainWindow::on_tableWidget_cellClicked(int row, int column)
{
    Q_UNUSED(column);
    ligneSelectionnee = row;

    if (ligneSelectionnee >= 0 && ligneSelectionnee < ui->tableWidget->rowCount()) {
        ui->textemodel->setText(ui->tableWidget->item(row, 0)->text());
        ui->textimm->setText(ui->tableWidget->item(row, 1)->text());
        ui->texteDate->setPlainText(ui->tableWidget->item(row, 2)->text());
        ui->textkilo->setPlainText(ui->tableWidget->item(row, 3)->text());
        ui->textetat->setPlainText(ui->tableWidget->item(row, 4)->text());
    }
}

void MainWindow::on_pushButton_clicked()
{
    QString cinRecherche = ui->identifant->text().trimmed();

    if (cinRecherche.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir un CIN à rechercher!");
        return;
    }

    if (cinRecherche.length() != 8 || !cinRecherche.toInt()) {
        QMessageBox::warning(this, "Erreur", "CIN invalide! Doit contenir exactement 8 chiffres.");
        return;
    }

    Employee emp = Employee::chargerParCin(cinRecherche);

    if (emp.getCin() != "") {
        ui->textemodel->setText(emp.getCin());
        ui->textimm->setText(emp.getNom());
        ui->texteDate->setPlainText(emp.getPrenom());
        ui->textkilo->setPlainText(emp.getTelephone());
        ui->textetat->setPlainText(emp.getDisponibilite());

        for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
            QTableWidgetItem *itemCIN = ui->tableWidget->item(row, 0);
            if (itemCIN && itemCIN->text() == cinRecherche) {
                ligneSelectionnee = row;
                ui->tableWidget->selectRow(row);
                break;
            }
        }

        QMessageBox::information(this, "Succès", "Employé trouvé avec le CIN: " + cinRecherche);
    } else {
        QMessageBox::warning(this, "Erreur", "Aucun employé trouvé avec ce CIN !");
        viderChampsEmployes();
        ligneSelectionnee = -1;
        ui->tableWidget->clearSelection();
    }
}

void MainWindow::on_triup_clicked()
{
    if (critereTriActuel.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez d'abord sélectionner un critère de tri!");
        return;
    }

    QList<Employee> employees;

    if (critereTriActuel == "Disponibilité") {
        employees = Employee::trierParDisponibilite(true);
    } else if (critereTriActuel == "Téléphone") {
        employees = Employee::trierParTelephone(true);
    }

    afficherEmployees(employees);
    QMessageBox::information(this, "Tri effectué",
                             QString("Tri %1 par ordre ascendant effectué avec succès!").arg(critereTriActuel));
}

void MainWindow::on_tridown_clicked()
{
    if (critereTriActuel.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez d'abord sélectionner un critère de tri!");
        return;
    }

    QList<Employee> employees;

    if (critereTriActuel == "Disponibilité") {
        employees = Employee::trierParDisponibilite(false);
    } else if (critereTriActuel == "Téléphone") {
        employees = Employee::trierParTelephone(false);
    }

    afficherEmployees(employees);
    QMessageBox::information(this, "Tri effectué",
                             QString("Tri %1 par ordre descendant effectué avec succès!").arg(critereTriActuel));
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    if (index == 0) {
        critereTriActuel = "";
        return;
    }
    critereTriActuel = ui->comboBox->currentText();
}

// ==================== SLOTS POUR LES EXAMENS ====================

void MainWindow::on_btnajouter_2_clicked()
{
    try {
        // Récupération et nettoyage des valeurs
        QString nomApprenant = ui->textetat_examen->toPlainText().trimmed();
        QString typeExamen = ui->textemodel_2->text().trimmed();
        QDate dateExamen = ui->dateEdit->date();
        QString num = ui->texteDate_2->toPlainText().trimmed();

        // Validation des champs obligatoires
        if (nomApprenant.isEmpty() || typeExamen.isEmpty() || num.isEmpty()) {
            QMessageBox::warning(this, "Champs manquants",
                                 "Veuillez remplir tous les champs obligatoires !\n"
                                 "- Nom de l'apprenant\n"
                                 "- Type d'examen\n"
                                 "- Numéro");
            return;
        }

        // Validation du type d'examen
        if (!validerTypeExamen(typeExamen)) {
            QMessageBox::warning(this, "Type d'examen invalide",
                                 "Type d'examen invalide !\n"
                                 "Valeurs acceptées : 'Théorique' ou 'Pratique'");
            ui->textemodel_2->setFocus();
            ui->textemodel_2->selectAll();
            return;
        }

        // Validation du numéro
        if (!validerNumero(num)) {
            QMessageBox::warning(this, "Numéro invalide",
                                 "Numéro invalide !\n"
                                 "Le numéro doit :\n"
                                 "- Commencer par 2, 5 ou 9\n"
                                 "- Contenir exactement 8 chiffres");
            ui->texteDate_2->setFocus();
            ui->texteDate_2->selectAll();
            return;
        }

        // Validation de la date
        if (!validerDate(dateExamen)) {
            QMessageBox::warning(this, "Date invalide",
                                 "Date invalide !\n"
                                 "La date d'examen doit être aujourd'hui ou une date future.");
            ui->dateEdit->setFocus();
            return;
        }

        // Vérification si le numéro est déjà utilisé
        int nbUtilisationsActuel = Examen::getNbUtilisationsNumero(num);
        if (nbUtilisationsActuel > 0) {
            QMessageBox::StandardButton reply = QMessageBox::question(
                this,
                "Numéro déjà utilisé",
                QString("⚠️ Attention : Ce numéro est déjà utilisé %1 fois(s).\n\n"
                        "Voulez-vous quand même l'utiliser pour cet examen ?")
                    .arg(nbUtilisationsActuel),
                QMessageBox::Yes | QMessageBox::No,
                QMessageBox::No
                );

            if (reply == QMessageBox::No) {
                ui->texteDate_2->setFocus();
                ui->texteDate_2->selectAll();
                return;
            }
        }

        // Créer l'objet Examen et utiliser sa méthode ajouter()
        Examen nouvelExamen(nomApprenant, typeExamen, dateExamen, num);

        // Demande de confirmation avant ajout
        QMessageBox::StandardButton confirmation = QMessageBox::question(
            this,
            "Confirmation d'ajout",
            QString("Voulez-vous vraiment ajouter cet examen ?\n\n"
                    "👤 Apprenant: %1\n"
                    "📝 Type: %2\n"
                    "📅 Date: %3\n"
                    "🔢 Numéro: %4")
                .arg(nomApprenant)
                .arg(typeExamen)
                .arg(dateExamen.toString("dd/MM/yyyy"))
                .arg(num),
            QMessageBox::Yes | QMessageBox::No,
            QMessageBox::Yes
            );

        if (confirmation == QMessageBox::Yes) {
            // Utiliser la méthode ajouter() de l'objet Examen
            if (nouvelExamen.ajouter()) {
                // Succès
                QString messageSucces = QString(
                                            "✅ Examen ajouté avec succès !\n\n"
                                            "📋 Détails :\n"
                                            "• ID: %1\n"
                                            "• Apprenant: %2\n"
                                            "• Type: %3\n"
                                            "• Date: %4\n"
                                            "• Numéro: %5")
                                            .arg(nouvelExamen.getId())
                                            .arg(nomApprenant)
                                            .arg(typeExamen)
                                            .arg(dateExamen.toString("dd/MM/yyyy"))
                                            .arg(num);

                QMessageBox::information(this, "Succès", messageSucces);

                // Mise à jour de l'interface
                refreshTableExamens();
                viderChampsExamens();

                qDebug() << "Examen ajouté avec succès - ID:" << nouvelExamen.getId();

            } else {
                // Échec de l'ajout
                QMessageBox::critical(this, "Erreur d'ajout",
                                      "❌ Erreur lors de l'ajout de l'examen dans la base de données !\n\n"
                                      "Causes possibles :\n"
                                      "• Problème de connexion à la base de données\n"
                                      "• Contrainte d'intégrité violée\n"
                                      "• Erreur du serveur de base de données");

                qDebug() << "Échec de l'ajout de l'examen dans la base de données";
            }
        } else {
            QMessageBox::information(this, "Ajout annulé", "L'ajout de l'examen a été annulé.");
        }

    } catch (const std::exception &e) {
        // Gestion des exceptions
        QMessageBox::critical(this, "Erreur inattendue",
                              QString("Une erreur inattendue est survenue :\n%1")
                                  .arg(e.what()));
        qDebug() << "Exception dans on_btnajouter_2_clicked:" << e.what();

    } catch (...) {
        // Gestion des exceptions non spécifiées
        QMessageBox::critical(this, "Erreur inconnue",
                              "Une erreur inconnue est survenue lors de l'ajout de l'examen.");
        qDebug() << "Exception inconnue dans on_btnajouter_2_clicked";
    }
}

void MainWindow::on_modifier_2_clicked()
{
    if (ligneSelectionnee == -1) {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner un examen à modifier!");
        return;
    }

    int id = ui->tableWidget_2->item(ligneSelectionnee, 0)->text().toInt();
    QString nomApprenant = ui->textetat_examen->toPlainText();
    QString typeExamen = ui->textemodel_2->text();
    QDate dateExamen = ui->dateEdit->date();
    QString num = ui->texteDate_2->toPlainText();

    if (nomApprenant.isEmpty() || typeExamen.isEmpty() || num.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs!");
        return;
    }

    Examen ancienExamen = Examen::chargerParId(id);
    QString ancienNum = ancienExamen.getNum();

    if (ancienNum != num) {
        int nbUtilisationsNouveauNum = Examen::getNbUtilisationsNumero(num);
        if (nbUtilisationsNouveauNum > 0) {
            QMessageBox::StandardButton reply = QMessageBox::question(this, "Numéro déjà utilisé",
                                                                      QString("Ce numéro est déjà utilisé %1 fois(s).\nVoulez-vous quand même l'utiliser ?").arg(nbUtilisationsNouveauNum),
                                                                      QMessageBox::Yes | QMessageBox::No);

            if (reply == QMessageBox::No) {
                return;
            }
        }
    }

    Examen examen(id, nomApprenant, typeExamen, dateExamen, num);
    if (examen.modifier()) {
        QMessageBox::information(this, "Succès", "Examen modifié avec succès!");
        refreshTableExamens();
        viderChampsExamens();
        ligneSelectionnee = -1;
    } else {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la modification!");
    }
}

void MainWindow::on_Supprimer_2_clicked()
{
    if (ligneSelectionnee == -1) {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner un examen à supprimer!");
        return;
    }

    int id = ui->tableWidget_2->item(ligneSelectionnee, 0)->text().toInt();
    QString nomApprenant = ui->tableWidget_2->item(ligneSelectionnee, 4)->text();
    QString typeExamen = ui->tableWidget_2->item(ligneSelectionnee, 1)->text();

    QMessageBox::StandardButton reply = QMessageBox::question(this, "Confirmation",
                                                              QString("Voulez-vous supprimer l'examen de:\n%1\nType: %2?").arg(nomApprenant).arg(typeExamen),
                                                              QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        Examen examen;
        examen.setId(id);
        if (examen.supprimer()) {
            QMessageBox::information(this, "Succès", "Examen supprimé!");
            refreshTableExamens();
            viderChampsExamens();
            ligneSelectionnee = -1;
        } else {
            QMessageBox::critical(this, "Erreur", "Erreur lors de la suppression!");
        }
    }
}

void MainWindow::on_tableWidget_2_cellClicked(int row, int column)
{
    Q_UNUSED(column);
    ligneSelectionnee = row;

    ui->identifiant->setText(ui->tableWidget_2->item(row, 0)->text());
    ui->textetat_examen->setPlainText(ui->tableWidget_2->item(row, 4)->text());
    ui->textemodel_2->setText(ui->tableWidget_2->item(row, 1)->text());
    ui->texteDate_2->setPlainText(ui->tableWidget_2->item(row, 3)->text());

    QString dateStr = ui->tableWidget_2->item(row, 2)->text();
    QDate date = QDate::fromString(dateStr, "dd/MM/yyyy");
    ui->dateEdit->setDate(date.isValid() ? date : QDate::currentDate());
}

void MainWindow::on_pushButton_2_clicked()
{
    QString idRecherche = ui->identifiant->text();

    if (idRecherche.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir un ID!");
        return;
    }

    Examen clientTrouve = Examen::chargerParId(idRecherche.toInt());

    if (clientTrouve.getId() != -1) {
        afficherClientUnique(clientTrouve);
        QMessageBox::information(this, "Recherche", "Client trouvé et affiché!");
    } else {
        QMessageBox::warning(this, "Erreur", "Aucun client trouvé avec cet ID!");
        viderChampsExamens();
        ligneSelectionnee = -1;
        refreshTableExamens();
    }
}

void MainWindow::afficherClientUnique(const Examen& client)
{
    ui->tableWidget_2->setRowCount(0);
    int row = ui->tableWidget_2->rowCount();
    ui->tableWidget_2->insertRow(row);

    ui->tableWidget_2->setItem(row, 0, new QTableWidgetItem(QString::number(client.getId())));
    ui->tableWidget_2->setItem(row, 1, new QTableWidgetItem(client.getTypeExamen()));
    ui->tableWidget_2->setItem(row, 2, new QTableWidgetItem(client.getDateExamen().toString("dd/MM/yyyy")));
    ui->tableWidget_2->setItem(row, 3, new QTableWidgetItem(client.getNum()));
    ui->tableWidget_2->setItem(row, 4, new QTableWidgetItem(client.getNomApprenant()));
    ui->tableWidget_2->setItem(row, 5, new QTableWidgetItem(QString::number(client.getNbUtilisations())));

    ui->tableWidget_2->selectRow(row);
    ligneSelectionnee = row;

    ui->textetat_examen->setPlainText(client.getNomApprenant());
    ui->textemodel_2->setText(client.getTypeExamen());
    ui->texteDate_2->setPlainText(client.getNum());
    ui->dateEdit->setDate(client.getDateExamen());
}

void MainWindow::on_triup_2_clicked()
{
    trierTableauExamens(1);
    QMessageBox::information(this, "Tri", "Tri croissant appliqué !");
}

void MainWindow::on_tridown_2_clicked()
{
    trierTableauExamens(-1);
    QMessageBox::information(this, "Tri", "Tri décroissant appliqué !");
}

// ==================== FONCTIONNALITÉS AVANCÉES - EMPLOYÉS ====================

void MainWindow::on_lire_clicked()
{
    qDebug() << "🔊 Bouton 'lire' cliqué - Lecture des employés du tableau";
    QApplication::beep();
    ui->statusBar->showMessage("Lecture des employés du tableau...");
    lireEmployesDuTableau();
    ui->statusBar->showMessage("Lecture terminée", 3000);
}

void MainWindow::lireEmployesDuTableau()
{
    if (ui->tableWidget->rowCount() == 0) {
        QMessageBox::information(this, "Information", "Le tableau est vide. Aucun employé à lire.");
        return;
    }

    QString message = "Liste des employés dans le tableau. ";
    int totalEmployes = ui->tableWidget->rowCount();
    int disponibles = 0;
    int absents = 0;
    int occupes = 0;
    int conges = 0;

    message += QString("Il y a %1 employé%2 au total. ").arg(totalEmployes).arg(totalEmployes > 1 ? "s" : "");

    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QString nom = ui->tableWidget->item(row, 1)->text();
        QString prenom = ui->tableWidget->item(row, 2)->text();
        QString disponibilite = ui->tableWidget->item(row, 4)->text();

        if (disponibilite.compare("Disponible", Qt::CaseInsensitive) == 0) {
            disponibles++;
        } else if (disponibilite.compare("Absent", Qt::CaseInsensitive) == 0) {
            absents++;
        } else if (disponibilite.compare("Occupé", Qt::CaseInsensitive) == 0) {
            occupes++;
        } else if (disponibilite.compare("En congé", Qt::CaseInsensitive) == 0) {
            conges++;
        }

        if (row < 8) {
            message += QString("%1 %2, %3. ")
            .arg(prenom)
                .arg(nom)
                .arg(disponibilite);
        }
    }

    message += QString("Résumé: %1 disponible%2, %3 occupé%4, %5 en congé, %6 absent%7. ")
                   .arg(disponibles)
                   .arg(disponibles > 1 ? "s" : "")
                   .arg(occupes)
                   .arg(occupes > 1 ? "s" : "")
                   .arg(conges)
                   .arg(absents)
                   .arg(absents > 1 ? "s" : "");

    if (totalEmployes > 8) {
        message += QString("Et %1 autre%2 non détaillé%2. ")
                       .arg(totalEmployes - 8)
                       .arg((totalEmployes - 8) > 1 ? "s" : "");
    }

    message += "Fin de la liste.";
    afficherResumeLecture(totalEmployes, disponibles, occupes, conges, absents);
    Employee::lireMessage(message);
}

void MainWindow::afficherResumeLecture(int total, int disponibles, int occupes, int conges, int absents)
{
    QString resume = QString("<h3>📊 Résumé de la Lecture</h3>"
                             "<p><b>👥 Total employés dans le tableau:</b> %1</p>"
                             "<p><b>✅ Disponibles:</b> %2</p>"
                             "<p><b>🟡 Occupés:</b> %3</p>"
                             "<p><b>🏖️ En congé:</b> %4</p>"
                             "<p><b>❌ Absents:</b> %5</p>")
                         .arg(total)
                         .arg(disponibles)
                         .arg(occupes)
                         .arg(conges)
                         .arg(absents);

    QMessageBox::information(this, "Résumé Lecture", resume);
}

// ==================== AJOUTS POUR LE BOUTON STATISTIQUE ====================

// --------------------- STATISTIQUES DE PRÉSENCE ---------------------
void MainWindow::on_statistique_clicked()
{
    qDebug() << "📊 Bouton 'statistique' cliqué - Affichage des statistiques";

    int currentIndex = ui->stackedWidget->currentIndex();
    if (currentIndex == 2 || currentIndex == 3) {
        QList<Apprenant> apprenants = Apprenant::chargerTous();
        if (apprenants.isEmpty()) {
            QMessageBox::information(this, "Statistiques", "Aucun apprenant trouvé dans la base de données.");
            return;
        }

        QDialog *statsDialog = new QDialog(this);
        statsDialog->setWindowTitle("📊 Tableau de Bord - Statistiques Emails Apprenants");
        statsDialog->setMinimumSize(1000, 750);
        statsDialog->setStyleSheet("background-color: #f8f9fa;");

        QScrollArea *scrollArea = new QScrollArea(statsDialog);
        scrollArea->setWidgetResizable(true);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setStyleSheet(
            "QScrollArea {"
            "    border: none;"
            "    background-color: #f8f9fa;"
            "}"
            "QScrollBar:vertical {"
            "    border: none;"
            "    background-color: #ecf0f1;"
            "    width: 12px;"
            "    margin: 0px;"
            "    border-radius: 6px;"
            "}"
            "QScrollBar::handle:vertical {"
            "    background-color: #bdc3c7;"
            "    border-radius: 6px;"
            "    min-height: 20px;"
            "}"
            "QScrollBar::handle:vertical:hover {"
            "    background-color: #95a5a6;"
            "}"
            "QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {"
            "    border: none;"
            "    background: none;"
            "}"
            "QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {"
            "    background: none;"
            "}"
        );

        QWidget *scrollContent = new QWidget;
        scrollContent->setStyleSheet("background-color: #f8f9fa;");
        QVBoxLayout *mainLayout = new QVBoxLayout(scrollContent);
        mainLayout->setSpacing(25);
        mainLayout->setContentsMargins(35, 35, 35, 35);

        QLabel *titleLabel = new QLabel("📊 Répartition des Fournisseurs d'Email (Apprenants)");
        titleLabel->setStyleSheet("font-size: 28px; font-weight: bold; color: #2c3e50; margin-bottom: 10px;");
        titleLabel->setAlignment(Qt::AlignCenter);
        mainLayout->addWidget(titleLabel);

        QLabel *summaryLabel = new QLabel(QString("Résumé Global - %1 Apprenants").arg(apprenants.size()));
        summaryLabel->setStyleSheet("font-size: 16px; color: #7f8c8d; margin-bottom: 30px;");
        summaryLabel->setAlignment(Qt::AlignCenter);
        mainLayout->addWidget(summaryLabel);

        int gmail = 0, yahoo = 0, apple = 0, outlook = 0, autres = 0;
        for (const Apprenant &a : apprenants) {
            QString em = a.getEmail().trimmed().toLower();
            int atIdx = em.indexOf('@');
            QString domain = atIdx >= 0 ? em.mid(atIdx + 1) : QString();
            if (domain.contains("gmail.")) {
                gmail++;
            } else if (domain.contains("yahoo.")) {
                yahoo++;
            } else if (domain.contains("icloud.") || domain.contains("me.") || domain.contains("mac.") || domain.contains("apple.")) {
                apple++;
            } else if (domain.contains("outlook.") || domain.contains("hotmail.") || domain.contains("live.") || domain.contains("msn.")) {
                outlook++;
            } else if (!domain.isEmpty()) {
                autres++;
            }
        }

        int totalEmails = gmail + yahoo + apple + outlook + autres;
        double pGmail = totalEmails > 0 ? (gmail * 100.0) / totalEmails : 0;
        double pYahoo = totalEmails > 0 ? (yahoo * 100.0) / totalEmails : 0;
        double pApple = totalEmails > 0 ? (apple * 100.0) / totalEmails : 0;
        double pOutlook = totalEmails > 0 ? (outlook * 100.0) / totalEmails : 0;
        double pAutres = totalEmails > 0 ? (autres * 100.0) / totalEmails : 0;

        QWidget *pieChartContainer = new QWidget;
        pieChartContainer->setMinimumSize(600, 500);
        QHBoxLayout *chartLayout = new QHBoxLayout(pieChartContainer);
        chartLayout->setAlignment(Qt::AlignCenter);

        class EmailPieChart : public QWidget {
        private:
            QVector<double> m_percentages;
            QVector<int> m_counts;
            int m_total;
            double m_progress;
            QTime m_start;
            bool m_running;
            QVector<QColor> m_colors;
            QVector<QString> m_labels;
        public:
            EmailPieChart(const QVector<int> &counts,
                          const QVector<double> &percentages,
                          const QVector<QColor> &colors,
                          const QVector<QString> &labels,
                          int total,
                          QWidget *parent = nullptr)
                : QWidget(parent), m_percentages(percentages), m_counts(counts), m_total(total), m_progress(0.0), m_running(false), m_colors(colors), m_labels(labels) {}
        private:
            void startAnimation() {
                if (!m_running) {
                    m_running = true;
                    m_start = QTime::currentTime();
                    updateAnimation();
                }
            }
            void updateAnimation() {
                if (!m_running) return;
                int elapsed = m_start.msecsTo(QTime::currentTime());
                double duration = 1800.0;
                m_progress = qMin(elapsed / duration, 1.0);
                m_progress = 1.0 - qPow(1.0 - m_progress, 3);
                update();
                if (m_progress < 1.0) {
                    QMetaObject::invokeMethod(this, [this]() { updateAnimation(); }, Qt::QueuedConnection);
                } else {
                    m_running = false;
                }
            }
        protected:
            void showEvent(QShowEvent *event) override {
                QWidget::showEvent(event);
                QMetaObject::invokeMethod(this, &EmailPieChart::startAnimation, Qt::QueuedConnection);
            }
            void paintEvent(QPaintEvent *event) override {
                QPainter painter(this);
                painter.setRenderHint(QPainter::Antialiasing, true);
                painter.setRenderHint(QPainter::SmoothPixmapTransform, true);
                painter.setRenderHint(QPainter::TextAntialiasing, true);
                int size = qMin(width(), height()) * 0.85;
                int centerX = width() / 2;
                int centerY = height() / 2;
                QRectF chartRect(centerX - size/2, centerY - size/2, size, size);
                double startAngle = 0;
                for (int i = 0; i < m_percentages.size(); ++i) {
                    if (m_percentages[i] > 0) {
                        double animatedPercentage = m_percentages[i] * m_progress;
                        double spanAngle = animatedPercentage * 360 / 100;
                        QRadialGradient gradient(chartRect.center(), size/2);
                        gradient.setColorAt(0, m_colors[i].lighter(150));
                        gradient.setColorAt(0.7, m_colors[i]);
                        gradient.setColorAt(1, m_colors[i].darker(120));
                        painter.setBrush(gradient);
                        painter.setPen(QPen(m_colors[i].darker(150), 1.5));
                        painter.drawPie(chartRect, startAngle * 16, spanAngle * 16);
                        if (m_progress >= 0.1 && m_percentages[i] > 0.1) {
                            drawLabel(painter, chartRect, startAngle, spanAngle, i);
                        }
                        startAngle += spanAngle;
                    }
                }
                drawCenter(painter, chartRect);
                if (m_progress < 1.0) {
                    painter.save();
                    painter.setPen(QColor(44, 62, 80, 180));
                    QFont font = painter.font();
                    font.setPointSize(10);
                    font.setItalic(true);
                    painter.setFont(font);
                    QString loadingText = QString("Génération du diagramme... %1%")
                                              .arg(m_progress * 100, 0, 'f', 0);
                    painter.drawText(chartRect, Qt::AlignCenter, loadingText);
                    painter.restore();
                }
            }
        private:
            void drawCenter(QPainter &painter, const QRectF &outerRect) {
                double donutRatio = 0.35;
                double centerSize = outerRect.width() * donutRatio;
                QRectF centerRect(outerRect.center().x() - centerSize/2,
                                  outerRect.center().y() - centerSize/2,
                                  centerSize, centerSize);
                QRadialGradient centerGrad(centerRect.center(), centerSize/2);
                centerGrad.setColorAt(0, QColor(255, 255, 255, 250));
                centerGrad.setColorAt(1, QColor(240, 240, 240, 250));
                painter.setBrush(centerGrad);
                painter.setPen(QPen(QColor(200, 200, 200), 1));
                painter.drawEllipse(centerRect);
                painter.setPen(QColor("#2c3e50"));
                QFont font = painter.font();
                font.setFamily("Arial");
                font.setPointSize(11);
                font.setBold(true);
                painter.setFont(font);
                int animatedCount = m_progress * m_total;
                QString countText = QString("%1").arg(animatedCount);
                QString labelText = "Apprenants";
                font.setPointSize(16);
                font.setWeight(QFont::Bold);
                painter.setFont(font);
                painter.drawText(centerRect, Qt::AlignCenter, countText);
                font.setPointSize(9);
                font.setWeight(QFont::Normal);
                painter.setFont(font);
                QRectF labelRect = centerRect;
                labelRect.setTop(centerRect.center().y() + 5);
                painter.drawText(labelRect, Qt::AlignCenter, labelText);
            }
            void drawLabel(QPainter &painter, const QRectF &chartRect,
                           double startAngle, double spanAngle, int i) {
                double midAngle = startAngle + spanAngle / 2;
                double labelRadius = chartRect.width() * 0.62;
                double radian = qDegreesToRadians(midAngle);
                double x = chartRect.center().x() + labelRadius * qCos(radian);
                double y = chartRect.center().y() + labelRadius * qSin(radian);
                QString percentageText = QString("%1%").arg(m_percentages[i], 0, 'f', 1);
                QString countText = QString("%1").arg(m_counts[i]);
                QFont font = painter.font();
                font.setPointSize(9);
                font.setBold(true);
                painter.setFont(font);
                QFontMetrics fm(font);
                int textWidth = qMax(fm.horizontalAdvance(percentageText), fm.horizontalAdvance(countText)) + 16;
                int textHeight = fm.height() * 2 + 12;
                QRect textRect(0, 0, textWidth, textHeight);
                textRect.moveCenter(QPoint(x, y));
                painter.save();
                painter.setPen(Qt::NoPen);
                painter.setBrush(QColor(0, 0, 0, 40));
                painter.drawRoundedRect(textRect.translated(2, 2), 8, 8);
                painter.setBrush(QColor(255, 255, 255, 240));
                painter.drawRoundedRect(textRect, 8, 8);
                painter.setPen(QPen(m_colors[i].darker(), 2));
                painter.setBrush(Qt::NoBrush);
                painter.drawRoundedRect(textRect, 8, 8);
                painter.restore();
                painter.setPen(QColor(44, 62, 80));
                QRect percentageRect = textRect;
                percentageRect.setHeight(textRect.height() / 2);
                percentageRect.adjust(4, 4, -4, 0);
                painter.drawText(percentageRect, Qt::AlignCenter, percentageText);
                font.setPointSize(8);
                font.setBold(false);
                painter.setFont(font);
                painter.setPen(QColor(127, 140, 141));
                QRect countRect = textRect;
                countRect.setTop(percentageRect.bottom());
                countRect.adjust(4, 0, -4, -4);
                painter.drawText(countRect, Qt::AlignCenter, countText);
            }
        };

        QVector<int> counts = {gmail, yahoo, apple, outlook, autres};
        QVector<double> percentages = {pGmail, pYahoo, pApple, pOutlook, pAutres};
        QVector<QColor> colors = {QColor("#e74c3c"), QColor("#8e44ad"), QColor("#2ecc71"), QColor("#3498db"), QColor("#95a5a6")};
        QVector<QString> labels = {"Gmail", "Yahoo", "Apple", "Outlook", "Autres"};
        EmailPieChart *pieChart = new EmailPieChart(counts, percentages, colors, labels, apprenants.size());
        pieChart->setMinimumSize(450, 450);
        chartLayout->addWidget(pieChart);

        QWidget *legendWidget = new QWidget;
        legendWidget->setMaximumWidth(350);
        QVBoxLayout *legendLayout = new QVBoxLayout(legendWidget);
        legendLayout->setSpacing(15);
        legendLayout->setContentsMargins(25, 25, 25, 25);

        QLabel *legendTitle = new QLabel("📊 RÉPARTITION PAR FOURNISSEUR");
        legendTitle->setStyleSheet(
            "font-size: 16px; font-weight: bold; color: #2c3e50; "
            "margin-bottom: 20px; padding: 12px; "
            "background-color: #ecf0f1; border-radius: 8px; "
            "border-left: 4px solid #3498db;"
        );
        legendTitle->setAlignment(Qt::AlignCenter);
        legendLayout->addWidget(legendTitle);

        QStringList icons = {"✉️", "✉️", "🍎", "✉️", "✉️"};
        for (int i = 0; i < labels.size(); ++i) {
            QWidget *legendItem = new QWidget;
            legendItem->setFixedHeight(85);
            legendItem->setStyleSheet(
                "QWidget {"
                "    background-color: white;"
                "    border-radius: 10px;"
                "    border: 2px solid " + colors[i].name() + ";"
                "    padding: 2px;"
                "}"
            );
            QHBoxLayout *itemLayout = new QHBoxLayout(legendItem);
            itemLayout->setContentsMargins(12, 8, 12, 8);
            itemLayout->setSpacing(12);
            QWidget *leftWidget = new QWidget;
            leftWidget->setFixedWidth(50);
            QVBoxLayout *leftLayout = new QVBoxLayout(leftWidget);
            leftLayout->setSpacing(6);
            leftLayout->setContentsMargins(0, 0, 0, 0);
            leftLayout->setAlignment(Qt::AlignCenter);
            QWidget *colorCircle = new QWidget;
            colorCircle->setFixedSize(28, 28);
            colorCircle->setStyleSheet(
                "background: qradialgradient(cx:0.5, cy:0.5, radius:0.8, "
                "stop:0 " + colors[i].lighter(150).name() + ", "
                "stop:1 " + colors[i].darker(120).name() + ");"
                "border-radius: 14px;"
                "border: 2px solid " + colors[i].darker(150).name() + ";"
            );
            QLabel *iconLabel = new QLabel(icons[i]);
            iconLabel->setStyleSheet("font-size: 16px; background: transparent; font-weight: bold;");
            iconLabel->setAlignment(Qt::AlignCenter);
            leftLayout->addWidget(colorCircle);
            leftLayout->addWidget(iconLabel);
            QWidget *textWidget = new QWidget;
            QVBoxLayout *textLayout = new QVBoxLayout(textWidget);
            textLayout->setSpacing(4);
            textLayout->setContentsMargins(0, 0, 0, 0);
            QLabel *categoryLabel = new QLabel(labels[i]);
            categoryLabel->setStyleSheet(
                "font-weight: bold; color: " + colors[i].name() + "; font-size: 12px;"
            );
            QLabel *statsLabel = new QLabel(
                QString("%1 emails • %2% du total").arg(counts[i]).arg(percentages[i], 0, 'f', 1)
            );
            statsLabel->setStyleSheet("color: #2c3e50; font-size: 11px; font-weight: bold;");
            QWidget *progressContainer = new QWidget;
            progressContainer->setFixedHeight(6);
            progressContainer->setStyleSheet(
                "QWidget {"
                "    background-color: #ecf0f1;"
                "    border-radius: 3px;"
                "    margin-top: 2px;"
                "}"
            );
            QWidget *progressBar = new QWidget(progressContainer);
            progressBar->setFixedHeight(6);
            progressBar->setStyleSheet(
                "background-color: " + colors[i].name() + ";"
                "border-radius: 3px;"
            );
            progressBar->setFixedWidth(percentages[i] * 1.8);
            textLayout->addWidget(categoryLabel);
            textLayout->addWidget(statsLabel);
            textLayout->addWidget(progressContainer);
            itemLayout->addWidget(leftWidget);
            itemLayout->addWidget(textWidget);
            legendLayout->addWidget(legendItem);
            if (i < labels.size() - 1) {
                QWidget *spacer = new QWidget;
                spacer->setFixedHeight(8);
                legendLayout->addWidget(spacer);
            }
        }
        legendLayout->addStretch();

        QWidget *chartContainer = new QWidget;
        chartContainer->setStyleSheet(
            "background-color: white; "
            "border-radius: 15px; "
            "padding: 25px; "
            "border: 1px solid #dfe6e9;"
            "background: qlineargradient(x1:0, y1:0, x2:1, y2:1, "
            "stop:0 #ffffff, stop:1 #f8f9fa);"
        );
        QHBoxLayout *containerLayout = new QHBoxLayout(chartContainer);
        containerLayout->setSpacing(30);
        containerLayout->setContentsMargins(20, 20, 20, 20);
        containerLayout->addWidget(pieChartContainer, 3);
        containerLayout->addWidget(legendWidget, 1);
        mainLayout->addWidget(chartContainer, 1);

        QWidget *buttonContainer = new QWidget;
        buttonContainer->setStyleSheet("background-color: white; border-radius: 10px; padding: 15px;");
        QHBoxLayout *buttonLayout = new QHBoxLayout(buttonContainer);
        buttonLayout->setSpacing(15);
        buttonLayout->addStretch();
        QPushButton *closeButton = new QPushButton("Fermer");
        closeButton->setStyleSheet(
            "QPushButton {"
            "    background-color: #95a5a6;"
            "    color: white;"
            "    border: none;"
            "    padding: 14px 28px;"
            "    border-radius: 8px;"
            "    font-weight: bold;"
            "    font-size: 14px;"
            "    min-width: 180px;"
            "}"
            "QPushButton:hover {"
            "    background-color: #7f8c8d;"
            "}"
            "QPushButton:pressed {"
            "    background-color: #6c7b7d;"
            "}"
        );
        connect(closeButton, &QPushButton::clicked, statsDialog, &QDialog::accept);
        buttonLayout->addWidget(closeButton);
        mainLayout->addWidget(buttonContainer);

        scrollArea->setWidget(scrollContent);
        QVBoxLayout *dialogLayout = new QVBoxLayout(statsDialog);
        dialogLayout->setContentsMargins(0, 0, 0, 0);
        dialogLayout->addWidget(scrollArea);
        statsDialog->exec();
        delete statsDialog;
        return;
    }

    // Charger tous les employés depuis la base de données
    QList<Employee> employees = Employee::chargerTousLesEmployees();

    if (employees.isEmpty()) {
        QMessageBox::information(this, "Statistiques", "Aucun employé trouvé dans la base de données.");
        return;
    }

    // Créer et afficher la boîte de dialogue des statistiques
    QDialog *statsDialog = new QDialog(this);
    statsDialog->setWindowTitle("📊 Tableau de Bord - Statistiques Employés");
    statsDialog->setMinimumSize(1000, 750); // Augmenté la taille pour mieux voir
    statsDialog->setStyleSheet("background-color: #f8f9fa;");

    // Créer un widget principal avec scroll area
    QScrollArea *scrollArea = new QScrollArea(statsDialog);
    scrollArea->setWidgetResizable(true);
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    scrollArea->setStyleSheet(
        "QScrollArea {"
        "    border: none;"
        "    background-color: #f8f9fa;"
        "}"
        "QScrollBar:vertical {"
        "    border: none;"
        "    background-color: #ecf0f1;"
        "    width: 12px;"
        "    margin: 0px;"
        "    border-radius: 6px;"
        "}"
        "QScrollBar::handle:vertical {"
        "    background-color: #bdc3c7;"
        "    border-radius: 6px;"
        "    min-height: 20px;"
        "}"
        "QScrollBar::handle:vertical:hover {"
        "    background-color: #95a5a6;"
        "}"
        "QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {"
        "    border: none;"
        "    background: none;"
        "}"
        "QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {"
        "    background: none;"
        "}"
        );

    // Widget contenu pour la scroll area
    QWidget *scrollContent = new QWidget;
    scrollContent->setStyleSheet("background-color: #f8f9fa;");

    QVBoxLayout *mainLayout = new QVBoxLayout(scrollContent);
    mainLayout->setSpacing(25);
    mainLayout->setContentsMargins(35, 35, 35, 35);

    // Title
    QLabel *titleLabel = new QLabel("📊 Tableau de Bord des Employés");
    titleLabel->setStyleSheet("font-size: 28px; font-weight: bold; color: #2c3e50; margin-bottom: 10px;");
    titleLabel->setAlignment(Qt::AlignCenter);
    mainLayout->addWidget(titleLabel);

    // Summary card
    QLabel *summaryLabel = new QLabel(QString("Résumé Global - %1 Employés").arg(employees.size()));
    summaryLabel->setStyleSheet("font-size: 16px; color: #7f8c8d; margin-bottom: 30px;");
    summaryLabel->setAlignment(Qt::AlignCenter);
    mainLayout->addWidget(summaryLabel);

    // Count employees by status
    int totalEmployees = employees.size();
    int disponibles = 0;
    int occupes = 0;
    int conges = 0;
    int absents = 0;

    for (const Employee &emp : employees) {
        QString disponibilite = emp.getDisponibilite().toLower();
        if (disponibilite == "disponible") {
            disponibles++;
        } else if (disponibilite == "occupé") {
            occupes++;
        } else if (disponibilite == "en congé") {
            conges++;
        } else if (disponibilite == "absent") {
            absents++;
        }
    }

    // Calculate percentages
    double pourcentageDisponibles = totalEmployees > 0 ? (disponibles * 100.0) / totalEmployees : 0;
    double pourcentageOccupes = totalEmployees > 0 ? (occupes * 100.0) / totalEmployees : 0;
    double pourcentageConges = totalEmployees > 0 ? (conges * 100.0) / totalEmployees : 0;
    double pourcentageAbsents = totalEmployees > 0 ? (absents * 100.0) / totalEmployees : 0;

    // Create pie chart container
    QWidget *pieChartContainer = new QWidget;
    pieChartContainer->setMinimumSize(600, 500); // Augmenté la taille

    QHBoxLayout *chartLayout = new QHBoxLayout(pieChartContainer);
    chartLayout->setAlignment(Qt::AlignCenter);

    // Professional animated pie chart widget
    class ProfessionalPieChart : public QWidget {
    private:
        double m_pourcentages[4];
        int m_counts[4];
        int m_totalEmployees;
        double m_animationProgress;
        QTime m_animationStartTime;
        bool m_animationRunning;

        // Professional color palette
        QColor m_colors[4] = {
            QColor("#27ae60"), // Disponibles - Professional Green
            QColor("#f39c12"), // Occupés - Professional Orange
            QColor("#3498db"), // Congés - Professional Blue
            QColor("#e74c3c")  // Absents - Professional Red
        };

        QString m_labels[4] = {"Disponibles", "Occupés", "En Congé", "Absents"};

    public:
        ProfessionalPieChart(int disp, int occ, int cong, int abs, int total,
                             double pDisp, double pOcc, double pCong, double pAbs, QWidget *parent = nullptr)
            : QWidget(parent), m_totalEmployees(total), m_animationProgress(0.0), m_animationRunning(false)
        {
            m_counts[0] = disp; m_counts[1] = occ; m_counts[2] = cong; m_counts[3] = abs;
            m_pourcentages[0] = pDisp; m_pourcentages[1] = pOcc; m_pourcentages[2] = pCong; m_pourcentages[3] = pAbs;
        }

    private:
        void startAnimation() {
            if (!m_animationRunning) {
                m_animationRunning = true;
                m_animationStartTime = QTime::currentTime();
                updateAnimation();
            }
        }

        void updateAnimation() {
            if (!m_animationRunning) return;

            int elapsed = m_animationStartTime.msecsTo(QTime::currentTime());
            double duration = 1800.0; // 1.8 seconds for smoother animation

            m_animationProgress = qMin(elapsed / duration, 1.0);
            m_animationProgress = 1.0 - qPow(1.0 - m_animationProgress, 3); // Smooth easing

            update();

            if (m_animationProgress < 1.0) {
                QMetaObject::invokeMethod(this, [this]() {
                    updateAnimation();
                }, Qt::QueuedConnection);
            } else {
                m_animationRunning = false;
            }
        }

    protected:
        void showEvent(QShowEvent *event) override {
            QWidget::showEvent(event);
            QMetaObject::invokeMethod(this, &ProfessionalPieChart::startAnimation, Qt::QueuedConnection);
        }

        void paintEvent(QPaintEvent *event) override {
            QPainter painter(this);
            painter.setRenderHint(QPainter::Antialiasing, true);
            painter.setRenderHint(QPainter::SmoothPixmapTransform, true);
            painter.setRenderHint(QPainter::TextAntialiasing, true);

            // Calculate chart dimensions
            int size = qMin(width(), height()) * 0.85; // Slightly smaller for labels
            int centerX = width() / 2;
            int centerY = height() / 2;
            QRectF chartRect(centerX - size/2, centerY - size/2, size, size);

            double startAngle = 0;

            // Draw animated pie segments with professional styling
            for (int i = 0; i < 4; ++i) {
                if (m_pourcentages[i] > 0) {
                    double animatedPercentage = m_pourcentages[i] * m_animationProgress;
                    double spanAngle = animatedPercentage * 360 / 100;

                    // Create gradient for professional look
                    QRadialGradient gradient(chartRect.center(), size/2);
                    gradient.setColorAt(0, m_colors[i].lighter(150));
                    gradient.setColorAt(0.7, m_colors[i]);
                    gradient.setColorAt(1, m_colors[i].darker(120));

                    painter.setBrush(gradient);
                    painter.setPen(QPen(m_colors[i].darker(150), 1.5));

                    painter.drawPie(chartRect, startAngle * 16, spanAngle * 16);

                    // Draw segment labels when animation completes - TOUJOURS VISIBLE
                    if (m_animationProgress >= 0.1 && m_pourcentages[i] > 0.1) {
                        drawProfessionalLabel(painter, chartRect, startAngle, spanAngle, i);
                    }

                    startAngle += spanAngle;
                }
            }

            // Draw center donut hole with professional styling
            drawCenterDonut(painter, chartRect);

            // Draw loading indicator during animation
            if (m_animationProgress < 1.0) {
                drawLoadingIndicator(painter, chartRect);
            }
        }

    private:
        void drawCenterDonut(QPainter &painter, const QRectF &outerRect) {
            // Professional center donut
            double donutRatio = 0.35; // Size of center hole
            double centerSize = outerRect.width() * donutRatio;
            QRectF centerRect(outerRect.center().x() - centerSize/2,
                              outerRect.center().y() - centerSize/2,
                              centerSize, centerSize);

            // Center gradient
            QRadialGradient centerGrad(centerRect.center(), centerSize/2);
            centerGrad.setColorAt(0, QColor(255, 255, 255, 250));
            centerGrad.setColorAt(1, QColor(240, 240, 240, 250));

            painter.setBrush(centerGrad);
            painter.setPen(QPen(QColor(200, 200, 200), 1));
            painter.drawEllipse(centerRect);

            // Center text with professional typography
            painter.setPen(QColor("#2c3e50"));
            QFont font = painter.font();
            font.setFamily("Arial");
            font.setPointSize(11);
            font.setBold(true);
            painter.setFont(font);

            int animatedCount = m_animationProgress * m_totalEmployees;
            QString countText = QString("%1").arg(animatedCount);
            QString employeeText = "Employés";

            // Draw count
            font.setPointSize(16);
            font.setWeight(QFont::Bold);
            painter.setFont(font);
            painter.drawText(centerRect, Qt::AlignCenter, countText);

            // Draw label below count
            font.setPointSize(9);
            font.setWeight(QFont::Normal);
            painter.setFont(font);
            QRectF labelRect = centerRect;
            labelRect.setTop(centerRect.center().y() + 5);
            painter.drawText(labelRect, Qt::AlignCenter, employeeText);
        }

        void drawProfessionalLabel(QPainter &painter, const QRectF &chartRect,
                                   double startAngle, double spanAngle, int segmentIndex) {
            double midAngle = startAngle + spanAngle / 2;

            // Use different radius based on segment size for better placement
            double labelRadius = chartRect.width() * 0.62; // Inside the chart for better visibility

            // Calculate label position
            double radian = qDegreesToRadians(midAngle);
            double x = chartRect.center().x() + labelRadius * qCos(radian);
            double y = chartRect.center().y() + labelRadius * qSin(radian);

            QString percentageText = QString("%1%").arg(m_pourcentages[segmentIndex], 0, 'f', 1);
            QString countText = QString("%1").arg(m_counts[segmentIndex]);

            // Set font first to calculate text size
            QFont font = painter.font();
            font.setPointSize(9);
            font.setBold(true);
            painter.setFont(font);

            QFontMetrics fm(font);
            int textWidth = qMax(fm.horizontalAdvance(percentageText), fm.horizontalAdvance(countText)) + 16;
            int textHeight = fm.height() * 2 + 12;

            QRect textRect(0, 0, textWidth, textHeight);
            textRect.moveCenter(QPoint(x, y));

            // Draw label background with high contrast
            painter.save();
            painter.setPen(Qt::NoPen);

            // White background with shadow effect
            painter.setBrush(QColor(0, 0, 0, 40));
            painter.drawRoundedRect(textRect.translated(2, 2), 8, 8);

            painter.setBrush(QColor(255, 255, 255, 240));
            painter.drawRoundedRect(textRect, 8, 8);

            // Border with segment color
            painter.setPen(QPen(m_colors[segmentIndex].darker(), 2));
            painter.setBrush(Qt::NoBrush);
            painter.drawRoundedRect(textRect, 8, 8);
            painter.restore();

            // Draw percentage text
            painter.setPen(QColor(44, 62, 80)); // Dark color for better readability
            QRect percentageRect = textRect;
            percentageRect.setHeight(textRect.height() / 2);
            percentageRect.adjust(4, 4, -4, 0);
            painter.drawText(percentageRect, Qt::AlignCenter, percentageText);

            // Draw count text
            font.setPointSize(8);
            font.setBold(false);
            painter.setFont(font);
            painter.setPen(QColor(127, 140, 141)); // Gray color for count

            QRect countRect = textRect;
            countRect.setTop(percentageRect.bottom());
            countRect.adjust(4, 0, -4, -4);
            painter.drawText(countRect, Qt::AlignCenter, countText);
        }

        void drawLoadingIndicator(QPainter &painter, const QRectF &chartRect) {
            painter.save();
            painter.setPen(QColor(44, 62, 80, 180));
            QFont font = painter.font();
            font.setPointSize(10);
            font.setItalic(true);
            painter.setFont(font);

            QString loadingText = QString("Génération du diagramme... %1%")
                                      .arg(m_animationProgress * 100, 0, 'f', 0);
            painter.drawText(chartRect, Qt::AlignCenter, loadingText);
            painter.restore();
        }
    };

    // Create professional pie chart
    ProfessionalPieChart *pieChart = new ProfessionalPieChart(
        disponibles, occupes, conges, absents, totalEmployees,
        pourcentageDisponibles, pourcentageOccupes, pourcentageConges, pourcentageAbsents
        );
    pieChart->setMinimumSize(450, 450); // Augmenté la taille
    chartLayout->addWidget(pieChart);

    // Professional legend widget - VERSION AMÉLIORÉE ET PLUS CLAIRE
    QWidget *legendWidget = new QWidget;
    legendWidget->setMaximumWidth(350); // Légèrement plus large
    QVBoxLayout *legendLayout = new QVBoxLayout(legendWidget);
    legendLayout->setSpacing(15);
    legendLayout->setContentsMargins(25, 25, 25, 25);

    // Legend title with better styling
    QLabel *legendTitle = new QLabel("📊 STATISTIQUES DÉTAILLÉES");
    legendTitle->setStyleSheet(
        "font-size: 16px; font-weight: bold; color: #2c3e50; "
        "margin-bottom: 20px; padding: 12px; "
        "background-color: #ecf0f1; border-radius: 8px; "
        "border-left: 4px solid #3498db;"
        );
    legendTitle->setAlignment(Qt::AlignCenter);
    legendLayout->addWidget(legendTitle);

    // Summary statistics at the top
    QWidget *summaryWidget = new QWidget;
    summaryWidget->setStyleSheet(
        "background: qlineargradient(x1:0, y1:0, x2:1, y2:0, "
        "stop:0 #e8f4fd, stop:1 #d5edf8);"
        "border-radius: 10px; padding: 15px;"
        "border: 2px solid #3498db;"
        );
    QVBoxLayout *summaryLayout = new QVBoxLayout(summaryWidget);
    summaryLayout->setSpacing(10);

    QLabel *totalLabel = new QLabel(QString("👥 TOTAL EMPLOYÉS: %1").arg(totalEmployees));
    totalLabel->setStyleSheet("font-size: 14px; font-weight: bold; color: #2c3e50;");

    QLabel *availableLabel = new QLabel(QString("✅ Disponibles: %1 (%2%)").arg(disponibles).arg(pourcentageDisponibles, 0, 'f', 1));
    availableLabel->setStyleSheet("font-size: 13px; color: #27ae60; font-weight: bold;");

    QLabel *busyLabel = new QLabel(QString("🟡 Occupés: %1 (%2%)").arg(occupes).arg(pourcentageOccupes, 0, 'f', 1));
    busyLabel->setStyleSheet("font-size: 13px; color: #f39c12; font-weight: bold;");

    QLabel *leaveLabel = new QLabel(QString("🏖️ En congé: %1 (%2%)").arg(conges).arg(pourcentageConges, 0, 'f', 1));
    leaveLabel->setStyleSheet("font-size: 13px; color: #3498db; font-weight: bold;");

    QLabel *absentLabel = new QLabel(QString("❌ Absents: %1 (%2%)").arg(absents).arg(pourcentageAbsents, 0, 'f', 1));
    absentLabel->setStyleSheet("font-size: 13px; color: #e74c3c; font-weight: bold;");

    summaryLayout->addWidget(totalLabel);
    summaryLayout->addWidget(availableLabel);
    summaryLayout->addWidget(busyLabel);
    summaryLayout->addWidget(leaveLabel);
    summaryLayout->addWidget(absentLabel);

    legendLayout->addWidget(summaryWidget);

    // Detailed breakdown section
    QLabel *breakdownTitle = new QLabel("📋 RÉPARTITION PAR STATUT");
    breakdownTitle->setStyleSheet(
        "font-size: 14px; font-weight: bold; color: #2c3e50; "
        "margin-top: 10px; margin-bottom: 15px; "
        "padding: 8px; background-color: #f8f9fa; border-radius: 6px;"
        );
    breakdownTitle->setAlignment(Qt::AlignCenter);
    legendLayout->addWidget(breakdownTitle);

    QStringList categories = {"DISPONIBLES", "OCCUPÉS", "EN CONGÉ", "ABSENTS"};
    QStringList icons = {"✅", "🟡", "🏖️", "❌"};
    QStringList descriptions = {
        "Employés disponibles pour travailler",
        "Employés actuellement occupés",
        "Employés en congé ou vacances",
        "Employés absents du travail"
    };
    QColor colors[] = {QColor("#27ae60"), QColor("#f39c12"), QColor("#3498db"), QColor("#e74c3c")};
    int counts[] = {disponibles, occupes, conges, absents};
    double percentages[] = {pourcentageDisponibles, pourcentageOccupes, pourcentageConges, pourcentageAbsents};

    for (int i = 0; i < 4; ++i) {
        QWidget *legendItem = new QWidget;
        legendItem->setFixedHeight(85);
        legendItem->setStyleSheet(
            "QWidget {"
            "    background-color: white;"
            "    border-radius: 10px;"
            "    border: 2px solid " + colors[i].name() + ";"
                                 "    padding: 2px;"
                                 "}"
            );

        QHBoxLayout *itemLayout = new QHBoxLayout(legendItem);
        itemLayout->setContentsMargins(12, 8, 12, 8);
        itemLayout->setSpacing(12);

        // Left side: Icon and color
        QWidget *leftWidget = new QWidget;
        leftWidget->setFixedWidth(50);
        QVBoxLayout *leftLayout = new QVBoxLayout(leftWidget);
        leftLayout->setSpacing(6);
        leftLayout->setContentsMargins(0, 0, 0, 0);
        leftLayout->setAlignment(Qt::AlignCenter);

        // Color circle
        QWidget *colorCircle = new QWidget;
        colorCircle->setFixedSize(28, 28);
        colorCircle->setStyleSheet(
            "background: qradialgradient(cx:0.5, cy:0.5, radius:0.8, "
            "stop:0 " + colors[i].lighter(150).name() + ", "
                                              "stop:1 " + colors[i].darker(120).name() + ");"
                                             "border-radius: 14px;"
                                             "border: 2px solid " + colors[i].darker(150).name() + ";"
            );

        // Icon
        QLabel *iconLabel = new QLabel(icons[i]);
        iconLabel->setStyleSheet("font-size: 16px; background: transparent; font-weight: bold;");
        iconLabel->setAlignment(Qt::AlignCenter);

        leftLayout->addWidget(colorCircle);
        leftLayout->addWidget(iconLabel);

        // Right side: Text information
        QWidget *textWidget = new QWidget;
        QVBoxLayout *textLayout = new QVBoxLayout(textWidget);
        textLayout->setSpacing(4);
        textLayout->setContentsMargins(0, 0, 0, 0);

        // Category name
        QLabel *categoryLabel = new QLabel(categories[i]);
        categoryLabel->setStyleSheet(
            "font-weight: bold; color: " + colors[i].name() + "; font-size: 12px;"
            );

        // Description
        QLabel *descLabel = new QLabel(descriptions[i]);
        descLabel->setStyleSheet("color: #7f8c8d; font-size: 10px;");
        descLabel->setWordWrap(true);

        // Statistics
        QLabel *statsLabel = new QLabel(
            QString("%1 employés • %2% du total").arg(counts[i]).arg(percentages[i], 0, 'f', 1)
            );
        statsLabel->setStyleSheet("color: #2c3e50; font-size: 11px; font-weight: bold;");

        // Progress bar visualization
        QWidget *progressContainer = new QWidget;
        progressContainer->setFixedHeight(6);
        progressContainer->setStyleSheet(
            "QWidget {"
            "    background-color: #ecf0f1;"
            "    border-radius: 3px;"
            "    margin-top: 2px;"
            "}"
            );

        QWidget *progressBar = new QWidget(progressContainer);
        progressBar->setFixedHeight(6);
        progressBar->setStyleSheet(
            "background-color: " + colors[i].name() + ";"
                                                      "border-radius: 3px;"
            );
        progressBar->setFixedWidth(percentages[i] * 1.8); // Scale for visual effect

        textLayout->addWidget(categoryLabel);
        textLayout->addWidget(descLabel);
        textLayout->addWidget(statsLabel);
        textLayout->addWidget(progressContainer);

        itemLayout->addWidget(leftWidget);
        itemLayout->addWidget(textWidget);

        legendLayout->addWidget(legendItem);

        // Add spacing between items (except last)
        if (i < 3) {
            QWidget *spacer = new QWidget;
            spacer->setFixedHeight(8);
            legendLayout->addWidget(spacer);
        }
    }

    legendLayout->addStretch();

    // Main chart container with professional layout
    QWidget *chartContainer = new QWidget;
    chartContainer->setStyleSheet(
        "background-color: white; "
        "border-radius: 15px; "
        "padding: 25px; "
        "border: 1px solid #dfe6e9;"
        "background: qlineargradient(x1:0, y1:0, x2:1, y2:1, "
        "stop:0 #ffffff, stop:1 #f8f9fa);"
        );
    QHBoxLayout *containerLayout = new QHBoxLayout(chartContainer);
    containerLayout->setSpacing(30);
    containerLayout->setContentsMargins(20, 20, 20, 20);
    containerLayout->addWidget(pieChartContainer, 3); // 70% for chart
    containerLayout->addWidget(legendWidget, 1);      // 30% for legend

    mainLayout->addWidget(chartContainer, 1);

    // Professional action buttons
    QWidget *buttonContainer = new QWidget;
    buttonContainer->setStyleSheet("background-color: white; border-radius: 10px; padding: 15px;");
    QHBoxLayout *buttonLayout = new QHBoxLayout(buttonContainer);
    buttonLayout->setSpacing(15);
    buttonLayout->addStretch();

    QPushButton *exportButton = new QPushButton("📊 Exporter Rapport PDF");
    exportButton->setStyleSheet(
        "QPushButton {"
        "    background-color: #3498db;"
        "    color: white;"
        "    border: none;"
        "    padding: 14px 28px;"
        "    border-radius: 8px;"
        "    font-weight: bold;"
        "    font-size: 14px;"
        "    margin-right: 10px;"
        "    min-width: 180px;"
        "}"
        "QPushButton:hover {"
        "    background-color: #2980b9;"
        "}"
        "QPushButton:pressed {"
        "    background-color: #21618c;"
        "}"
        );

    QPushButton *closeButton = new QPushButton("Fermer");
    closeButton->setStyleSheet(
        "QPushButton {"
        "    background-color: #95a5a6;"
        "    color: white;"
        "    border: none;"
        "    padding: 14px 28px;"
        "    border-radius: 8px;"
        "    font-weight: bold;"
        "    font-size: 14px;"
        "    min-width: 180px;"
        "}"
        "QPushButton:hover {"
        "    background-color: #7f8c8d;"
        "}"
        "QPushButton:pressed {"
        "    background-color: #6c7b7d;"
        "}"
        );

    connect(exportButton, &QPushButton::clicked, this, &MainWindow::on_exportPdf_clicked);
    connect(closeButton, &QPushButton::clicked, statsDialog, &QDialog::accept);

    buttonLayout->addWidget(exportButton);
    buttonLayout->addWidget(closeButton);
    mainLayout->addWidget(buttonContainer);

    // Set the scroll content
    scrollArea->setWidget(scrollContent);

    // Create main layout for dialog
    QVBoxLayout *dialogLayout = new QVBoxLayout(statsDialog);
    dialogLayout->setContentsMargins(0, 0, 0, 0);
    dialogLayout->addWidget(scrollArea);

    statsDialog->exec();
    delete statsDialog;

    qDebug() << "📊 Dialogue des statistiques fermé";
}

void MainWindow::on_exportPdf_clicked()
{
    int currentIndex = ui->stackedWidget->currentIndex();
    if (currentIndex == 2 || currentIndex == 3) {
        QList<Apprenant> apprenants = Apprenant::chargerTous();
        if (apprenants.isEmpty()) {
            QMessageBox::warning(this, "Export PDF", "Aucune donnée disponible pour générer le PDF des apprenants!");
            return;
        }
        QString fileName = QFileDialog::getSaveFileName(this,
                                                        "Exporter les statistiques en PDF",
                                                        QDir::homePath() + "/statistiques_apprenants.pdf",
                                                        "Fichiers PDF (*.pdf)");
        if (fileName.isEmpty()) {
            return;
        }
        genererPdfStatistiquesApprenants(fileName, apprenants);
        return;
    }

    if (ui->stackedWidget->currentWidget() == ui->page_4) {
        QString fileName = QFileDialog::getSaveFileName(this,
                                                        "Exporter les statistiques en PDF",
                                                        QDir::homePath() + "/statistiques_vehicules.pdf",
                                                        "Fichiers PDF (*.pdf)");
        if (fileName.isEmpty()) {
            return;
        }
        genererPdfStatistiquesVehicules(fileName);
        return;
    }

    QList<Employee> employees = Employee::chargerTousLesEmployees();
    if (employees.isEmpty()) {
        QMessageBox::warning(this, "Export PDF", "Aucune donnée disponible pour générer le PDF des employés!");
        return;
    }
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    "Exporter les statistiques en PDF",
                                                    QDir::homePath() + "/statistiques_employes.pdf",
                                                    "Fichiers PDF (*.pdf)");
    if (fileName.isEmpty()) {
        return;
    }
    genererPdfStatistiquesEmployes(fileName, employees);
}

void MainWindow::genererPdfStatistiquesEmployes(const QString &fileName, const QList<Employee> &employees)
{
    QPrinter printer(QPrinter::HighResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(fileName);
    printer.setPageSize(QPageSize(QPageSize::A4));
    printer.setPageOrientation(QPageLayout::Portrait);
    printer.setPageMargins(QMarginsF(15, 15, 15, 15));

    QString htmlContent;

    int totalEmployees = employees.size();
    int disponibles = 0, occupes = 0, conges = 0, absents = 0;

    for (const Employee &emp : employees) {
        QString disponibilite = emp.getDisponibilite().toLower();
        if (disponibilite == "disponible") disponibles++;
        else if (disponibilite == "occupé") occupes++;
        else if (disponibilite == "en congé") conges++;
        else if (disponibilite == "absent") absents++;
    }

    double pourcentageDisponibles = totalEmployees > 0 ? (disponibles * 100.0) / totalEmployees : 0;
    double pourcentageOccupes = totalEmployees > 0 ? (occupes * 100.0) / totalEmployees : 0;
    double pourcentageConges = totalEmployees > 0 ? (conges * 100.0) / totalEmployees : 0;
    double pourcentageAbsents = totalEmployees > 0 ? (absents * 100.0) / totalEmployees : 0;

    htmlContent = QString(
                      "<html>"
                      "<head>"
                      "<style>"
                      "body { font-family: Arial, sans-serif; margin: 20px; }"
                      ".title { text-align: center; font-size: 24px; font-weight: bold; margin-bottom: 20px; }"
                      ".date { text-align: center; font-size: 12px; color: #666; margin-bottom: 30px; }"
                      ".section { font-size: 18px; font-weight: bold; margin: 20px 0 10px 0; }"
                      ".table { width: 100%; border-collapse: collapse; margin: 10px 0; }"
                      ".table th, .table td { border: 1px solid #ddd; padding: 8px; text-align: left; }"
                      ".table th { background-color: #f2f2f2; font-weight: bold; }"
                      ".footer { text-align: center; font-size: 10px; color: #999; margin-top: 30px; }"
                      "</style>"
                      "</head>"
                      "<body>"
                      "<div class='title'>Statistiques des Employés</div>"
                      "<div class='date'>Généré le: %1</div>"
                      "<div class='section'>Résumé Global</div>"
                      "<table class='table'>"
                      "<tr><th>Statut</th><th>Nombre</th><th>Pourcentage</th></tr>"
                      "<tr><td>Disponibles</td><td>%2</td><td>%3%</td></tr>"
                      "<tr><td>Occupés</td><td>%4</td><td>%5%</td></tr>"
                      "<tr><td>En congé</td><td>%6</td><td>%7%</td></tr>"
                      "<tr><td>Absents</td><td>%8</td><td>%9%</td></tr>"
                      "<tr><td><strong>Total Employés</strong></td><td><strong>%10</strong></td><td><strong>100%</strong></td></tr>"
                      "</table>"
                      "<div class='section'>Détails par Employé</div>"
                      "<table class='table'>"
                      "<tr><th>CIN</th><th>Nom</th><th>Prénom</th><th>Statut</th></tr>"
                      ).arg(QDateTime::currentDateTime().toString("dd/MM/yyyy HH:mm"),
                           QString::number(disponibles),
                           QString::number(pourcentageDisponibles, 'f', 1),
                           QString::number(occupes),
                           QString::number(pourcentageOccupes, 'f', 1),
                           QString::number(conges),
                           QString::number(pourcentageConges, 'f', 1),
                           QString::number(absents),
                           QString::number(pourcentageAbsents, 'f', 1),
                           QString::number(totalEmployees));

    for (const Employee &emp : employees) {
        htmlContent += QString(
                           "<tr>"
                           "<td>%1</td>"
                           "<td>%2</td>"
                           "<td>%3</td>"
                           "<td>%4</td>"
                           "</tr>"
                           ).arg(emp.getCin(),
                                emp.getNom(),
                                emp.getPrenom(),
                                emp.getDisponibilite());
    }
    htmlContent += QString(
        "</table>"
        "<div class='footer'>Document généré automatiquement - Système de Gestion des Employés</div>"
        "</body>"
        "</html>");

    QTextDocument document;
    document.setHtml(htmlContent);
    document.print(&printer);

    QMessageBox::information(this, "Export Réussi",
                             "Le PDF des statistiques a été généré avec succès!\n\n"
                             "Fichier: " + fileName);
}

void MainWindow::genererPdfStatistiquesApprenants(const QString &fileName, const QList<Apprenant> &apprenants)
{
    QPrinter printer(QPrinter::HighResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(fileName);
    printer.setPageSize(QPageSize(QPageSize::A4));
    printer.setPageOrientation(QPageLayout::Portrait);
    printer.setPageMargins(QMarginsF(15, 15, 15, 15));

    int total = apprenants.size();
    int gmail = 0, yahoo = 0, apple = 0, outlook = 0, autres = 0;
    for (const Apprenant &a : apprenants) {
        QString em = a.getEmail().trimmed().toLower();
        int atIdx = em.indexOf('@');
        QString domain = atIdx >= 0 ? em.mid(atIdx + 1) : QString();
        if (domain.contains("gmail.")) {
            gmail++;
        } else if (domain.contains("yahoo.")) {
            yahoo++;
        } else if (domain.contains("icloud.") || domain.contains("me.") || domain.contains("mac.") || domain.contains("apple.")) {
            apple++;
        } else if (domain.contains("outlook.") || domain.contains("hotmail.") || domain.contains("live.") || domain.contains("msn.")) {
            outlook++;
        } else if (!domain.isEmpty()) {
            autres++;
        }
    }

    int totalDomains = gmail + yahoo + apple + outlook + autres;
    double pGmail = totalDomains > 0 ? (gmail * 100.0) / totalDomains : 0;
    double pYahoo = totalDomains > 0 ? (yahoo * 100.0) / totalDomains : 0;
    double pApple = totalDomains > 0 ? (apple * 100.0) / totalDomains : 0;
    double pOutlook = totalDomains > 0 ? (outlook * 100.0) / totalDomains : 0;
    double pAutres = totalDomains > 0 ? (autres * 100.0) / totalDomains : 0;

    QString htmlContent;
    htmlContent += "<html><head><style>";
    htmlContent += "body { font-family: Arial, sans-serif; margin: 20px; }";
    htmlContent += "h1 { color: #2c3e50; text-align: center; border-bottom: 2px solid #3498db; padding-bottom: 10px; }";
    htmlContent += "h2 { color: #34495e; border-left: 4px solid #3498db; padding-left: 10px; margin-top: 25px; }";
    htmlContent += "table { width: 100%; border-collapse: collapse; margin: 15px 0; }";
    htmlContent += "th { background-color: #3498db; color: white; padding: 10px; text-align: left; }";
    htmlContent += "td { padding: 8px; border: 1px solid #ddd; }";
    htmlContent += ".stat-box { background-color: #f8f9fa; padding: 15px; margin: 10px 0; border-radius: 5px; border-left: 4px solid #3498db; }";
    htmlContent += "</style></head><body>";

    htmlContent += "<h1>📊 RAPPORT STATISTIQUE DES APPRENANTS</h1>";
    htmlContent += QString("<p style='text-align: center; color: #7f8c8d;'>Généré le %1</p>")
                       .arg(QDate::currentDate().toString("dd/MM/yyyy"));

    htmlContent += "<h2>🎯 VUE D'ENSEMBLE</h2>";
    htmlContent += "<div class='stat-box'>";
    htmlContent += "<table>";
    htmlContent += QString("<tr><td><strong>Total des apprenants</strong></td><td>%1</td></tr>").arg(total);
    htmlContent += QString("<tr><td><strong>Gmail</strong></td><td>%1 (%2%)</td></tr>").arg(gmail).arg(pGmail, 0, 'f', 1);
    htmlContent += QString("<tr><td><strong>Yahoo</strong></td><td>%1 (%2%)</td></tr>").arg(yahoo).arg(pYahoo, 0, 'f', 1);
    htmlContent += QString("<tr><td><strong>Apple</strong></td><td>%1 (%2%)</td></tr>").arg(apple).arg(pApple, 0, 'f', 1);
    htmlContent += QString("<tr><td><strong>Outlook</strong></td><td>%1 (%2%)</td></tr>").arg(outlook).arg(pOutlook, 0, 'f', 1);
    htmlContent += QString("<tr><td><strong>Autres</strong></td><td>%1 (%2%)</td></tr>").arg(autres).arg(pAutres, 0, 'f', 1);
    htmlContent += "</table>";
    htmlContent += "</div>";

    htmlContent += "<h2>📋 LISTE DES APPRENANTS</h2>";
    htmlContent += "<div class='stat-box'>";
    htmlContent += "<table>";
    htmlContent += "<tr><th>Nom</th><th>Prénom</th><th>Email</th><th>Téléphone</th><th>CIN</th></tr>";
    for (const Apprenant &a : apprenants) {
        htmlContent += QString("<tr>"
                               "<td>%1</td>"
                               "<td>%2</td>"
                               "<td>%3</td>"
                               "<td>%4</td>"
                               "<td>%5</td>"
                               "</tr>")
                           .arg(a.getNom())
                           .arg(a.getPrenom())
                           .arg(a.getEmail())
                           .arg(a.getTelephone())
                           .arg(a.getCin());
    }
    htmlContent += "</table>";
    htmlContent += "</div>";

    htmlContent += "<div style='margin-top: 40px; padding-top: 20px; border-top: 1px solid #ddd; text-align: center; color: #7f8c8d;'>";
    htmlContent += "<p>Rapport généré automatiquement par le Système de Gestion des Apprenants</p>";
    htmlContent += QString("<p>Dernière mise à jour: %1</p>")
                       .arg(QDateTime::currentDateTime().toString("dd/MM/yyyy HH:mm"));
    htmlContent += "</div>";
    htmlContent += "</body></html>";

    QTextDocument document;
    document.setHtml(htmlContent);
    document.print(&printer);

    QMessageBox::information(this, "Export PDF",
                             QString("📄 Rapport PDF exporté avec succès!\n\nFichier: %1").arg(fileName));
}

// ==================== FONCTIONNALITÉS AVANCÉES - EXAMENS ====================

void MainWindow::on_btnstat_clicked()
{
    afficherStatistiquesModernes();
}

void MainWindow::afficherStatistiquesModernes()
{
    QDialog *statsDialog = new QDialog(this);
    statsDialog->setWindowTitle("📊 Tableau de Bord - Statistiques des Examens");
    statsDialog->setMinimumSize(1000, 700);

    statsDialog->setStyleSheet(R"(
        QDialog {
            background: qlineargradient(x1:0, y1:0, x2:1, y2:1,
                stop:0 #667eea, stop:1 #764ba2);
            font-family: 'Segoe UI', Arial, sans-serif;
        }
        QWidget {
            background: transparent;
        }
    )");

    QVBoxLayout *mainLayout = new QVBoxLayout(statsDialog);

    QLabel *headerLabel = new QLabel("📊 TABLEAU DE BORD DES STATISTIQUES");
    headerLabel->setStyleSheet(R"(
        QLabel {
            color: white;
            font-size: 24px;
            font-weight: bold;
            padding: 25px;
            background: qlineargradient(x1:0, y1:0, x2:1, y2:0,
                stop:0 #2c3e50, stop:1 #34495e);
            border-radius: 0px;
            text-align: center;
            margin-bottom: 0px;
            border-bottom: 3px solid #3498db;
        }
    )");
    headerLabel->setAlignment(Qt::AlignCenter);
    mainLayout->addWidget(headerLabel);

    QHBoxLayout *controlsLayout = new QHBoxLayout();
    controlsLayout->setContentsMargins(20, 20, 20, 10);

    QComboBox *typeCombo = new QComboBox();
    typeCombo->addItem("📋 Statistiques par Type d'Examen");
    typeCombo->addItem("📅 Statistiques par Date (Mois)");
    typeCombo->setFixedHeight(40);

    QPushButton *btnGenerer = new QPushButton("🔄 Générer Rapport");
    btnGenerer->setFixedHeight(40);
    btnGenerer->setFixedWidth(180);

    QPushButton *btnFermer = new QPushButton("❌ Fermer");
    btnFermer->setFixedHeight(40);
    btnFermer->setFixedWidth(100);

    controlsLayout->addWidget(typeCombo);
    controlsLayout->addWidget(btnGenerer);
    controlsLayout->addWidget(btnFermer);
    controlsLayout->addStretch();

    mainLayout->addLayout(controlsLayout);

    QLabel *contentLabel = new QLabel("Sélectionnez un type de statistique et cliquez sur Générer");
    contentLabel->setStyleSheet("color: white; font-size: 16px; padding: 50px; text-align: center;");
    contentLabel->setAlignment(Qt::AlignCenter);
    mainLayout->addWidget(contentLabel);

    mainLayout->addStretch();

    connect(btnGenerer, &QPushButton::clicked, [=]() {
        QMessageBox::information(this, "Génération", "Statistiques générées avec succès!");
    });

    connect(btnFermer, &QPushButton::clicked, statsDialog, &QDialog::accept);

    statsDialog->exec();
    delete statsDialog;
}

void MainWindow::on_btnpdf_clicked()
{
    exporterStatistiquesPDF();
}

void MainWindow::exporterStatistiquesPDF()
{
    QList<Examen> examens = Examen::chargerTousLesExamens();
    if (examens.isEmpty()) {
        QMessageBox::warning(this, "Export PDF", "Aucune donnée à exporter!");
        return;
    }

    // Calculs des statistiques
    int total = examens.size();
    int theorique = 0, pratique = 0;

    for (const Examen& exam : examens) {
        if (exam.getTypeExamen().contains("théorique", Qt::CaseInsensitive) ||
            exam.getTypeExamen().contains("theorique", Qt::CaseInsensitive)) {
            theorique++;
        } else {
            pratique++;
        }
    }

    double pctTheo = (theorique * 100.0) / total;
    double pctPrat = (pratique * 100.0) / total;

    // Création du contenu HTML
    QString htmlContent;
    htmlContent += "<html><head><style>";
    htmlContent += "body { font-family: Arial, sans-serif; margin: 20px; }";
    htmlContent += "h1 { color: #2c3e50; text-align: center; border-bottom: 2px solid #3498db; padding-bottom: 10px; }";
    htmlContent += "h2 { color: #34495e; border-left: 4px solid #3498db; padding-left: 10px; margin-top: 25px; }";
    htmlContent += "table { width: 100%; border-collapse: collapse; margin: 15px 0; }";
    htmlContent += "th { background-color: #3498db; color: white; padding: 10px; text-align: left; }";
    htmlContent += "td { padding: 8px; border: 1px solid #ddd; }";
    htmlContent += ".stat-box { background-color: #f8f9fa; padding: 15px; margin: 10px 0; border-radius: 5px; border-left: 4px solid #3498db; }";
    htmlContent += "</style></head><body>";

    htmlContent += "<h1>📊 RAPPORT STATISTIQUE DES EXAMENS</h1>";
    htmlContent += QString("<p style='text-align: center; color: #7f8c8d;'>Généré le %1</p>")
                       .arg(QDate::currentDate().toString("dd/MM/yyyy"));

    // Vue d'ensemble
    htmlContent += "<h2>🎯 VUE D'ENSEMBLE</h2>";
    htmlContent += "<div class='stat-box'>";
    htmlContent += "<table>";
    htmlContent += QString("<tr><td><strong>Total des examens</strong></td><td>%1</td></tr>").arg(total);
    htmlContent += QString("<tr><td><strong>Examens théoriques</strong></td><td>%1 (%2%)</td></tr>").arg(theorique).arg(pctTheo, 0, 'f', 1);
    htmlContent += QString("<tr><td><strong>Examens pratiques</strong></td><td>%1 (%2%)</td></tr>").arg(pratique).arg(pctPrat, 0, 'f', 1);
    htmlContent += "</table>";
    htmlContent += "</div>";

    // Détails des examens
    htmlContent += "<h2>📋 DÉTAILS DES EXAMENS</h2>";
    htmlContent += "<div class='stat-box'>";
    htmlContent += "<table>";
    htmlContent += "<tr><th>ID</th><th>Apprenant</th><th>Type</th><th>Date</th><th>Numéro</th></tr>";

    for (const Examen& exam : examens) {
        htmlContent += QString("<tr>"
                               "<td>%1</td>"
                               "<td>%2</td>"
                               "<td>%3</td>"
                               "<td>%4</td>"
                               "<td>%5</td>"
                               "</tr>")
                           .arg(exam.getId())
                           .arg(exam.getNomApprenant())
                           .arg(exam.getTypeExamen())
                           .arg(exam.getDateExamen().toString("dd/MM/yyyy"))
                           .arg(exam.getNum());
    }
    htmlContent += "</table>";
    htmlContent += "</div>";

    htmlContent += "<div style='margin-top: 40px; padding-top: 20px; border-top: 1px solid #ddd; text-align: center; color: #7f8c8d;'>";
    htmlContent += "<p>Rapport généré automatiquement par le Système de Gestion des Examens</p>";
    htmlContent += QString("<p>Dernière mise à jour: %1</p>")
                       .arg(QDateTime::currentDateTime().toString("dd/MM/yyyy HH:mm"));
    htmlContent += "</div>";

    htmlContent += "</body></html>";

    // Création et configuration du printer
    QPrinter printer(QPrinter::HighResolution);
    printer.setPageSize(QPageSize::A4);
    printer.setPageOrientation(QPageLayout::Portrait);

    QString fileName = QFileDialog::getSaveFileName(this, "Exporter en PDF",
                                                    QDir::currentPath() + "/statistiques_examens.pdf",
                                                    "Fichiers PDF (*.pdf)");

    if (fileName.isEmpty()) {
        return;
    }

    printer.setOutputFileName(fileName);

    QTextDocument document;
    document.setHtml(htmlContent);
    document.print(&printer);

    QMessageBox::information(this, "Export PDF",
                             QString("📄 Rapport PDF exporté avec succès!\n\nFichier: %1").arg(fileName));
}

void MainWindow::on_btnsms_clicked()
{
    qDebug() << "=== DÉBUT RECHERCHE EXAMEN LE PLUS PROCHE ===";

    QMessageBox::information(this, "Recherche", "🔍 Recherche de l'examen le plus proche...");

    Examen examenProche = Examen::getExamenLePlusProche();

    if (examenProche.getId() == -1) {
        QMessageBox::warning(this, "Aucun examen", "Aucun examen futur trouvé dans la base de données.");
        return;
    }

    afficherInfoExamenProche(examenProche);
}

void MainWindow::afficherInfoExamenProche(const Examen& examenProche)
{
    QString nomClient = examenProche.getNomApprenant();
    QString typeExamen = examenProche.getTypeExamen();
    QDate dateExamen = examenProche.getDateExamen();
    QString numeroClient = examenProche.getNum();

    QDate aujourdhui = QDate::currentDate();
    int joursRestants = aujourdhui.daysTo(dateExamen);

    QString detailsExamen = QString(
                                "📅 EXAMEN LE PLUS PROCHE TROUVÉ!\n\n"
                                "👤 Apprenant: %1\n"
                                "📞 Numéro: %2\n"
                                "📝 Type d'examen: %3\n"
                                "📅 Date: %4\n"
                                "⏳ Jours restants: %5\n\n"
                                ).arg(nomClient)
                                .arg(numeroClient)
                                .arg(typeExamen)
                                .arg(dateExamen.toString("dd/MM/yyyy"))
                                .arg(joursRestants);

    QMessageBox::StandardButton confirmation = QMessageBox::question(
        this,
        "Confirmation d'envoi WhatsApp",
        detailsExamen + "\nVoulez-vous envoyer un rappel d'examen à cet apprenant sur WhatsApp?",
        QMessageBox::Yes | QMessageBox::No
        );

    if (confirmation == QMessageBox::Yes) {
        QString message = formaterMessageRappelExamen(nomClient, typeExamen, dateExamen);

        QMessageBox::information(this, "Validation",
                                 QString("✅ Message WhatsApp préparé!\n\n"
                                         "👤 Apprenant: %1\n"
                                         "📞 Numéro: %2\n"
                                         "📅 Date d'examen: %3\n\n"
                                         "💬 Message:\n%4\n\n"
                                         "Cliquez OK pour ouvrir WhatsApp et envoyer le message.")
                                     .arg(nomClient)
                                     .arg(numeroClient)
                                     .arg(dateExamen.toString("dd/MM/yyyy"))
                                     .arg(message));

        ouvrirWhatsApp(numeroClient, message);
    } else {
        QMessageBox::information(this, "Annulation", "❌ Envoi WhatsApp annulé.");
    }
}

QString MainWindow::formaterMessageRappelExamen(const QString& nomClient, const QString& typeExamen, const QDate& dateExamen)
{
    QDate aujourdhui = QDate::currentDate();
    int joursRestants = aujourdhui.daysTo(dateExamen);

    QString joursText;
    if (joursRestants == 0) {
        joursText = "aujourd'hui";
    } else if (joursRestants == 1) {
        joursText = "demain";
    } else {
        joursText = QString("dans %1 jours").arg(joursRestants);
    }

    return QString(
               "Bonjour %1,\n\n"
               "📚 RAPPEL D'EXAMEN\n\n"
               "Nous vous rappelons que vous avez un examen %2 prévu %3 (%4).\n\n"
               "🎯 Type: %2\n"
               "📅 Date: %4\n"
               "⏰ Pensez à bien vous préparer !\n\n"
               "Pour toute information supplémentaire, n'hésitez pas à nous contacter.\n\n"
               "Bonne préparation !\n"
               "Cordialement,\n"
               "Centre d'Examens 🎓"
               ).arg(nomClient).arg(typeExamen).arg(joursText).arg(dateExamen.toString("dd/MM/yyyy"));
}

void MainWindow::ouvrirWhatsApp(const QString& numero, const QString& message)
{
    QString numeroPropre = numero;
    numeroPropre = numeroPropre.remove(" ").remove("-").remove(".").remove("(").remove(")");

    if (!numeroPropre.startsWith("+")) {
        if (numeroPropre.startsWith("2")) {
            numeroPropre = "+" + numeroPropre;
        } else {
            numeroPropre = "+216" + numeroPropre;
        }
    }

    QString messageEncode = QUrl::toPercentEncoding(message);
    QString urlWhatsApp = QString("https://wa.me/%1?text=%2").arg(numeroPropre).arg(messageEncode);

    bool success = QDesktopServices::openUrl(QUrl(urlWhatsApp));

    if (success) {
        QMessageBox::information(this, "WhatsApp ouvert",
                                 QString("✅ WhatsApp a été ouvert!\n\n"
                                         "📞 Numéro: %1\n"
                                         "👤 Apprenant: %2\n\n"
                                         "💬 Le message de rappel est pré-rempli.\n"
                                         "Il ne reste plus qu'à cliquer sur ENVOYER dans WhatsApp.")
                                     .arg(numero)
                                     .arg(trouverNomClientParNumero(numero)));
    } else {
        QMessageBox::critical(this, "Erreur WhatsApp",
                              "❌ Impossible d'ouvrir WhatsApp.\n\n"
                              "Assurez-vous que:\n"
                              "• WhatsApp est installé sur votre appareil\n"
                              "• Vous êtes connecté à Internet\n"
                              "• Le numéro est valide");

        QMessageBox::StandardButton reply = QMessageBox::question(this, "Alternative",
                                                                  "Voulez-vous ouvrir WhatsApp Web dans votre navigateur?",
                                                                  QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            QString webUrl = QString("https://web.whatsapp.com/send?phone=%1&text=%2")
            .arg(numeroPropre)
                .arg(messageEncode);
            QDesktopServices::openUrl(QUrl(webUrl));
        }
    }
}

QString MainWindow::trouverNomClientParNumero(const QString& numero)
{
    QList<Examen> examens = Examen::chargerTousLesExamens();

    for (const Examen& exam : examens) {
        if (exam.getNum() == numero) {
            return exam.getNomApprenant();
        }
    }

    return ""; // Return empty string if no match found
}

// ============================================================================
// ⭐ FONCTIONS DU CALENDRIER - DESIGN AMÉLIORÉ ⭐
// ============================================================================

// NOUVEAU: Slot pour le bouton calendrier
void MainWindow::on_calendrierButton_clicked()
{
    showCalendar(true);
    updateCalendarView();
}

// NOUVEAU: Configuration de l'interface calendrier
void MainWindow::setupCalendarUI()
{
    // Créer le widget calendrier
    calendarWidget = new QWidget(this);
    calendarWidget->setWindowTitle("📅 Calendrier des Employés");
    calendarWidget->resize(1100, 750);
    calendarWidget->setStyleSheet("background-color: #f5f7fa;");

    QVBoxLayout *mainLayout = new QVBoxLayout(calendarWidget);
    mainLayout->setSpacing(15);
    mainLayout->setContentsMargins(20, 20, 20, 20);

    // Header avec contrôles - DESIGN AMÉLIORÉ
    QHBoxLayout *headerLayout = new QHBoxLayout();

    prevWeekBtn = new QPushButton("◀ Précédente");
    nextWeekBtn = new QPushButton("Suivante ▶");
    currentWeekLabel = new QLabel("Semaine du " + QDate::currentDate().toString("dd MMM yyyy"));

    // Style des boutons de navigation
    QString navButtonStyle =
        "QPushButton {"
        "    background-color: #3498db;"
        "    color: white;"
        "    border: none;"
        "    padding: 10px 15px;"
        "    border-radius: 8px;"
        "    font-weight: bold;"
        "    font-size: 12px;"
        "}"
        "QPushButton:hover {"
        "    background-color: #2980b9;"
        "}"
        "QPushButton:pressed {"
        "    background-color: #2471a3;"
        "}";

    prevWeekBtn->setStyleSheet(navButtonStyle);
    nextWeekBtn->setStyleSheet(navButtonStyle);

    // Style du label de semaine
    currentWeekLabel->setStyleSheet(
        "QLabel {"
        "    font-size: 16px;"
        "    font-weight: bold;"
        "    color: #2c3e50;"
        "    padding: 12px;"
        "    background-color: #ecf0f1;"
        "    border-radius: 8px;"
        "    border: 2px solid #bdc3c7;"
        "}"
        );

    QPushButton *closeBtn = new QPushButton("✕ Fermer");
    closeBtn->setStyleSheet(
        "QPushButton {"
        "    background-color: #e74c3c;"
        "    color: white;"
        "    border: none;"
        "    padding: 10px 20px;"
        "    border-radius: 8px;"
        "    font-weight: bold;"
        "}"
        "QPushButton:hover {"
        "    background-color: #c0392b;"
        "}"
        );

    headerLayout->addWidget(prevWeekBtn);
    headerLayout->addWidget(currentWeekLabel);
    headerLayout->addWidget(nextWeekBtn);
    headerLayout->addStretch();
    headerLayout->addWidget(closeBtn);

    // Filtres - DESIGN AMÉLIORÉ
    QHBoxLayout *filterLayout = new QHBoxLayout();

    QLabel *filterLabel = new QLabel("Filtrer par employé:");
    filterLabel->setStyleSheet("font-weight: bold; color: #34495e; font-size: 14px;");

    employeeFilter = new QComboBox();
    employeeFilter->addItem("👥 Tous les employés");
    employeeFilter->setStyleSheet(
        "QComboBox {"
        "    padding: 12px;"
        "    border: 2px solid #bdc3c7;"
        "    border-radius: 8px;"
        "    background-color: white;"
        "    min-width: 300px;"
        "    font-size: 14px;"
        "    font-weight: bold;"
        "    color: #2c3e50;"  // ⭐ Couleur foncée pour meilleure lisibilité
        "}"
        "QComboBox QAbstractItemView {"
        "    background-color: white;"
        "    border: 2px solid #bdc3c7;"
        "    border-radius: 8px;"
        "    selection-background-color: #3498db;"
        "    selection-color: white;"
        "    font-size: 14px;"
        "    font-weight: bold;"
        "    color: #2c3e50;"
        "    padding: 8px;"
        "}"
        "QComboBox::drop-down {"
        "    border: none;"
        "    width: 30px;"
        "}"
        "QComboBox::down-arrow {"
        "    image: none;"
        "    border-left: 6px solid transparent;"
        "    border-right: 6px solid transparent;"
        "    border-top: 6px solid #34495e;"
        "}"
        );

    addAvailabilityBtn = new QPushButton("➕ Ajouter Disponibilité");
    addAvailabilityBtn->setStyleSheet(
        "QPushButton {"
        "    background-color: #27ae60;"
        "    color: white;"
        "    border: none;"
        "    padding: 10px 20px;"
        "    border-radius: 8px;"
        "    font-weight: bold;"
        "    font-size: 14px;"
        "}"
        "QPushButton:hover {"
        "    background-color: #229954;"
        "}"
        );

    filterLayout->addWidget(filterLabel);
    filterLayout->addWidget(employeeFilter);
    filterLayout->addStretch();
    filterLayout->addWidget(addAvailabilityBtn);

    // Calendrier et tableau - DESIGN AMÉLIORÉ
    QHBoxLayout *calendarLayout = new QHBoxLayout();
    calendarLayout->setSpacing(20);

    // Calendrier avec style amélioré - CHIFFRES CLAIRS ET LISIBLES
    calendar = new QCalendarWidget();
    calendar->setMinimumWidth(450);
    calendar->setStyleSheet(
        "QCalendarWidget {"
        "    background-color: white;"
        "    border: 3px solid #bdc3c7;"
        "    border-radius: 12px;"
        "    font-size: 14px;"
        "    color: #2c3e50;"  // ⭐ Couleur foncée pour meilleure lisibilité
        "}"
        "QCalendarWidget QToolButton {"
        "    color: #2c3e50;"  // ⭐ Couleur foncée pour les boutons
        "    font-weight: bold;"
        "    background-color: #ecf0f1;"
        "    border-radius: 6px;"
        "    padding: 8px;"
        "    font-size: 14px;"
        "    min-width: 60px;"
        "}"
        "QCalendarWidget QToolButton:hover {"
        "    background-color: #d5dbdb;"
        "}"
        "QCalendarWidget QMenu {"
        "    background-color: white;"
        "    border: 2px solid #bdc3c7;"
        "    border-radius: 8px;"
        "    color: #2c3e50;"  // ⭐ Couleur foncée pour le menu
        "    font-size: 14px;"
        "}"
        "QCalendarWidget QSpinBox {"
        "    padding: 8px;"
        "    border: 2px solid #bdc3c7;"
        "    border-radius: 6px;"
        "    background-color: white;"
        "    color: #2c3e50;"  // ⭐ Couleur foncée pour les spinbox
        "    font-size: 14px;"
        "    font-weight: bold;"
        "}"
        "QCalendarWidget QWidget#qt_calendar_navigationbar {"
        "    background-color: #34495e;"
        "    border-top-left-radius: 10px;"
        "    border-top-right-radius: 10px;"
        "    padding: 10px;"
        "}"
        "QCalendarWidget QAbstractItemView:enabled {"
        "    color: #2c3e50;"  // ⭐ Couleur foncée pour tous les chiffres
        "    font-size: 16px;"  // ⭐ Taille de police augmentée
        "    font-weight: bold;"  // ⭐ Texte en gras
        "    background-color: white;"
        "    selection-background-color: #3498db;"
        "    selection-color: white;"
        "    border: 1px solid #ecf0f1;"
        "}"
        "QCalendarWidget QAbstractItemView:disabled {"
        "    color: #bdc3c7;"  // ⭐ Couleur grise pour les jours désactivés
        "    font-size: 16px;"
        "    background-color: #f8f9fa;"
        "}"
        "QCalendarWidget QTableView {"
        "    gridline-color: #ecf0f1;"
        "    alternate-background-color: #f8f9fa;"
        "}"
        "QCalendarWidget QTableView::item {"
        "    padding: 8px;"
        "    border: none;"
        "    text-align: center;"
        "}"
        "QCalendarWidget QTableView::item:selected {"
        "    background-color: #3498db;"
        "    color: white;"
        "    font-weight: bold;"
        "    border-radius: 8px;"
        "}"
        "QCalendarWidget QTableView::item:hover {"
        "    background-color: #d6eaf8;"
        "    border-radius: 8px;"
        "}"
        );

    // Tableau des créneaux avec style amélioré - TEXTE EN NOIR
    timeSlotsTable = new QTableWidget();
    timeSlotsTable->setColumnCount(4);
    timeSlotsTable->setHorizontalHeaderLabels({"🕐 Créneau", "👤 Employé", "📊 Statut", "⚡ Action"});
    timeSlotsTable->horizontalHeader()->setStretchLastSection(true);

    // Style du tableau - TEXTE EN NOIR
    timeSlotsTable->setStyleSheet(
        "QTableWidget {"
        "    background-color: white;"
        "    border: 3px solid #bdc3c7;"
        "    border-radius: 12px;"
        "    gridline-color: #ecf0f1;"
        "    font-size: 14px;"
        "    color: #2c3e50;"  // ⭐ Changé de black à #2c3e50 pour meilleur contraste
        "}"
        "QTableWidget::item {"
        "    padding: 15px;"
        "    border-bottom: 2px solid #ecf0f1;"
        "    color: #2c3e50;"  // ⭐ Changé de black à #2c3e50
        "    font-weight: bold;"  // ⭐ Ajouté le gras
        "}"
        "QTableWidget::item:selected {"
        "    background-color: #d6eaf8;"
        "    color: #2c3e50;"  // ⭐ Changé de black à #2c3e50
        "}"
        "QHeaderView::section {"
        "    background-color: #34495e;"
        "    color: white;"
        "    padding: 15px;"
        "    border: none;"
        "    font-weight: bold;"
        "    font-size: 14px;"
        "}"
        );

    // Ajuster la largeur des colonnes
    timeSlotsTable->setColumnWidth(0, 150);  // ⭐ Augmenté pour les créneaux
    timeSlotsTable->setColumnWidth(1, 250);  // ⭐ Augmenté la largeur pour les noms
    timeSlotsTable->setColumnWidth(2, 150);

    calendarLayout->addWidget(calendar);
    calendarLayout->addWidget(timeSlotsTable);

    // Assembler tout
    mainLayout->addLayout(headerLayout);
    mainLayout->addLayout(filterLayout);
    mainLayout->addLayout(calendarLayout);

    // Connections
    connect(calendar, &QCalendarWidget::clicked, this, &MainWindow::onCalendarDateClicked);
    connect(employeeFilter, QOverload<int>::of(&QComboBox::currentIndexChanged),
            this, &MainWindow::onEmployeeFilterChanged);
    connect(addAvailabilityBtn, &QPushButton::clicked, this, &MainWindow::onAddAvailabilityClicked);
    connect(prevWeekBtn, &QPushButton::clicked, this, &MainWindow::onPrevWeekClicked);
    connect(nextWeekBtn, &QPushButton::clicked, this, &MainWindow::onNextWeekClicked);
    connect(closeBtn, &QPushButton::clicked, [this]() { showCalendar(false); });
}

// NOUVEAU: Afficher/Masquer le calendrier
void MainWindow::showCalendar(bool show)
{
    if (show) {
        if (!calendarWidget) {
            setupCalendarUI();
        }
        calendarWidget->show();
        calendarWidget->raise();
        calendarWidget->activateWindow();
    } else {
        calendarWidget->hide();
    }
}

// NOUVEAU: Charger les données des employés dans le calendrier
void MainWindow::loadEmployeeData()
{
    employeeFilter->clear();
    employeeFilter->addItem("👥 Tous les employés");

    QList<Employee> employees = Employee::chargerTousLesEmployees();

    for (const Employee &emp : employees) {
        // ⭐ FORMAT AMÉLIORÉ : Prénom en majuscules + Nom en minuscules pour meilleure lisibilité
        QString displayName = QString("👤 %1 %2")
                                  .arg(emp.getPrenom().toUpper())  // ⭐ Prénom en MAJUSCULES
                                  .arg(emp.getNom());              // ⭐ Nom normal

        employeeFilter->addItem(displayName, emp.getCin());
    }
}

// MODIFIÉ: Quand on clique sur une date du calendrier
void MainWindow::onCalendarDateClicked(const QDate &date)
{
    currentWeekLabel->setText("Semaine du " + date.toString("dd MMM yyyy"));
    updateTimeSlotsTable(date);
}

// NOUVEAU: Mettre à jour le tableau des créneaux horaires
void MainWindow::updateTimeSlotsTable(const QDate &date)
{
    timeSlotsTable->setRowCount(0);

    // ⭐ CRÉNEAUX HORAIRES BIEN VISIBLES
    QStringList timeSlotsList = {
        "🕗 08:00 - 10:00",
        "🕙 10:00 - 12:00",
        "🕑 14:00 - 16:00",
        "🕓 16:00 - 18:00"
    };

    QList<Employee> employees = Employee::chargerTousLesEmployees();

    // Charger les disponibilités sauvegardées pour cette date
    QMap<QString, QString> savedAvailabilities = loadAvailabilitiesForDate(date);

    int row = 0;
    for (const QString &timeSlot : timeSlotsList) {
        timeSlotsTable->insertRow(row);
        timeSlotsTable->setRowHeight(row, 60);

        // ⭐ CRÉNEAU HORAIRE - STYLE AMÉLIORÉ POUR ÊTRE BIEN VISIBLE
        QTableWidgetItem *timeItem = new QTableWidgetItem(timeSlot);
        timeItem->setTextAlignment(Qt::AlignCenter);
        timeItem->setForeground(QColor("#2c3e50"));
        timeItem->setFont(QFont("Arial", 14, QFont::Bold)); // ⭐ Taille augmentée
        timeItem->setFlags(timeItem->flags() & ~Qt::ItemIsEditable);
        timeSlotsTable->setItem(row, 0, timeItem);

        // Employé avec ComboBox pour choisir - STYLE AMÉLIORÉ
        QComboBox *employeeCombo = new QComboBox();
        employeeCombo->addItem("❌ Non assigné", "");

        for (const Employee &emp : employees) {
            // ⭐ FORMAT AMÉLIORÉ POUR MEILLEURE LISIBILITÉ
            QString displayName = QString("👤 %1 %2")
                                      .arg(emp.getPrenom().toUpper())  // ⭐ Prénom en MAJUSCULES
                                      .arg(emp.getNom());              // ⭐ Nom normal

            employeeCombo->addItem(displayName, emp.getCin());
        }

        // Sélectionner l'employé sauvegardé s'il existe
        QString savedEmployee = savedAvailabilities.value(timeSlot + "_employee", "");
        if (!savedEmployee.isEmpty()) {
            int index = employeeCombo->findData(savedEmployee);
            if (index >= 0) employeeCombo->setCurrentIndex(index);
        }

        // ⭐ STYLE AMÉLIORÉ POUR LA COMBOBOX DES EMPLOYÉS
        employeeCombo->setStyleSheet(
            "QComboBox {"
            "    padding: 10px;"
            "    border: 2px solid #bdc3c7;"
            "    border-radius: 6px;"
            "    background-color: white;"
            "    color: #2c3e50;"  // ⭐ Couleur foncée améliorée
            "    font-size: 13px;"
            "    font-weight: bold;"  // ⭐ Texte en gras
            "    min-height: 20px;"
            "}"
            "QComboBox QAbstractItemView {"
            "    background-color: white;"
            "    border: 2px solid #bdc3c7;"
            "    border-radius: 6px;"
            "    selection-background-color: #3498db;"
            "    selection-color: white;"
            "    font-size: 13px;"
            "    font-weight: bold;"
            "    color: #2c3e50;"
            "    padding: 8px;"
            "    outline: none;"
            "}"
            "QComboBox::drop-down {"
            "    border: none;"
            "    width: 25px;"
            "}"
            "QComboBox::down-arrow {"
            "    image: none;"
            "    border-left: 5px solid transparent;"
            "    border-right: 5px solid transparent;"
            "    border-top: 5px solid #34495e;"
            "}"
            );

        connect(employeeCombo, QOverload<int>::of(&QComboBox::currentIndexChanged),
                [this, date, timeSlot, employeeCombo](int index) {
                    QString employeeId = employeeCombo->currentData().toString();
                    bool available = !employeeCombo->currentText().contains("❌");
                    saveAvailability(date, timeSlot, employeeId, available);
                });

        timeSlotsTable->setCellWidget(row, 1, employeeCombo);

        // Statut avec Switch/Toggle
        QCheckBox *statusCheckbox = new QCheckBox();
        statusCheckbox->setText("Disponible");
        statusCheckbox->setStyleSheet(
            "QCheckBox {"
            "    spacing: 10px;"
            "    color: #2c3e50;"  // ⭐ Couleur améliorée
            "    font-weight: bold;"
            "    font-size: 13px;"
            "}"
            "QCheckBox::indicator {"
            "    width: 50px;"
            "    height: 25px;"
            "    border-radius: 13px;"
            "    border: 2px solid #bdc3c7;"
            "}"
            "QCheckBox::indicator:unchecked {"
            "    background-color: #e74c3c;"
            "}"
            "QCheckBox::indicator:checked {"
            "    background-color: #27ae60;"
            "}"
            "QCheckBox::indicator:unchecked:hover {"
            "    background-color: #c0392b;"
            "}"
            "QCheckBox::indicator:checked:hover {"
            "    background-color: #229954;"
            "}"
            );

        // Charger le statut sauvegardé
        QString availableStr = savedAvailabilities.value(timeSlot + "_available", "true");
        bool isAvailable = (availableStr == "true");
        statusCheckbox->setChecked(isAvailable);

        connect(statusCheckbox, &QCheckBox::stateChanged,
                [this, date, timeSlot, employeeCombo, row](int state) {
                    bool available = (state == Qt::Checked);
                    QString employeeId = employeeCombo->currentData().toString();
                    saveAvailability(date, timeSlot, employeeId, available);
                    updateStatusDisplay(row, available);
                });

        QWidget *statusWidget = new QWidget();
        QHBoxLayout *statusLayout = new QHBoxLayout(statusWidget);
        statusLayout->addWidget(statusCheckbox);
        statusLayout->setAlignment(Qt::AlignCenter);
        statusLayout->setContentsMargins(0, 0, 0, 0);
        timeSlotsTable->setCellWidget(row, 2, statusWidget);

        // Bouton pour sauvegarder
        QPushButton *saveBtn = new QPushButton("💾 Sauvegarder");
        saveBtn->setStyleSheet(
            "QPushButton {"
            "    background-color: #3498db;"
            "    color: white;"
            "    border: none;"
            "    padding: 8px 12px;"
            "    border-radius: 6px;"
            "    font-weight: bold;"
            "    font-size: 11px;"
            "}"
            "QPushButton:hover {"
            "    background-color: #2980b9;"
            "}"
            );

        connect(saveBtn, &QPushButton::clicked,
                [this, date, timeSlot, employeeCombo, statusCheckbox]() {
                    QString employeeId = employeeCombo->currentData().toString();
                    bool available = statusCheckbox->isChecked();
                    saveAvailability(date, timeSlot, employeeId, available);
                    QMessageBox::information(this, "Sauvegarde",
                                             "Disponibilité sauvegardée avec succès!");
                });

        timeSlotsTable->setCellWidget(row, 3, saveBtn);

        // Mettre à jour l'affichage du statut
        updateStatusDisplay(row, isAvailable);

        row++;
    }
}

// NOUVEAU: Mettre à jour l'affichage du statut
void MainWindow::updateStatusDisplay(int row, bool available)
{
    QTableWidgetItem *timeItem = timeSlotsTable->item(row, 0);
    if (timeItem) {
        if (available) {
            timeItem->setBackground(QColor(232, 245, 233));
        } else {
            timeItem->setBackground(QColor(255, 235, 238));
        }
    }
}

// NOUVEAU: Sauvegarder la disponibilité
void MainWindow::saveAvailability(const QDate &date, const QString &timeSlot,
                                  const QString &employeeId, bool available)
{
    // Sauvegarder dans QSettings
    QSettings settings("YourCompany", "EmployeeCalendar");

    QString dateKey = date.toString("yyyy-MM-dd");
    settings.setValue(dateKey + "/" + timeSlot + "_available", available);
    settings.setValue(dateKey + "/" + timeSlot + "_employee", employeeId);

    qDebug() << "Sauvegardé - Date:" << date.toString("dd/MM/yyyy")
             << "Créneau:" << timeSlot
             << "Employé:" << employeeId
             << "Disponible:" << available;
}

// CORRECTION: Une seule fonction loadAvailabilitiesForDate avec QMap<QString, QString>
QMap<QString, QString> MainWindow::loadAvailabilitiesForDate(const QDate &date)
{
    QMap<QString, QString> availabilities;

    if (!date.isValid()) {
        qWarning() << "Date invalide fournie à loadAvailabilitiesForDate";
        return availabilities;
    }

    QSettings settings("YourCompany", "EmployeeCalendar");

    QString dateKey = date.toString("yyyy-MM-dd");

    // ⭐ MÊME FORMAT POUR LES CRÉNEAUX HORAIRES
    QStringList timeSlots = {
        "🕗 08:00 - 10:00",
        "🕙 10:00 - 12:00",
        "🕑 14:00 - 16:00",
        "🕓 16:00 - 18:00"
    };

    for (const QString &timeSlot : timeSlots) {
        bool available = settings.value(dateKey + "/" + timeSlot + "_available", true).toBool();
        availabilities[timeSlot + "_available"] = available ? "true" : "false";

        QString employee = settings.value(dateKey + "/" + timeSlot + "_employee", "").toString();
        availabilities[timeSlot + "_employee"] = employee;
    }

    qDebug() << "Chargé" << availabilities.size() << "disponibilités pour" << date.toString("dd/MM/yyyy");
    return availabilities;
}

// NOUVEAU: Filtre employé changé
void MainWindow::onEmployeeFilterChanged(int index)
{
    updateCalendarView();
}

// NOUVEAU: Ajouter disponibilité
void MainWindow::onAddAvailabilityClicked()
{
    QMessageBox::information(this, "Ajouter Disponibilité",
                             "Fonctionnalité d'ajout de disponibilité");
}

// NOUVEAU: Semaine précédente
void MainWindow::onPrevWeekClicked()
{
    currentWeekStart = currentWeekStart.addDays(-7);
    updateCalendarView();
}

// NOUVEAU: Semaine suivante
void MainWindow::onNextWeekClicked()
{
    currentWeekStart = currentWeekStart.addDays(7);
    updateCalendarView();
}

// NOUVEAU: Mettre à jour la vue calendrier
void MainWindow::updateCalendarView()
{
    QDate today = QDate::currentDate();
    currentWeekLabel->setText("Semaine du " + today.toString("dd MMM yyyy"));

    QDate selectedDate = calendar->selectedDate();
    if (!selectedDate.isValid()) {
        selectedDate = today;
    }
    updateTimeSlotsTable(selectedDate);
}

// ==================== MÉTHODES DE NAVIGATION ====================

void MainWindow::on_btnmodifier_clicked()
{
    on_btnModifier_clicked();
}

void MainWindow::on_btnsupprimer_clicked()
{
    on_Supprimer_clicked();
}

void MainWindow::on_employe_btn_clicked()
{
    // Mettez à jour l'index selon votre interface
    ui->stackedWidget->setCurrentIndex(0); // Page des employés
}

void MainWindow::on_examen_btn_clicked()
{
    // Mettez à jour l'index selon votre interface
    ui->stackedWidget->setCurrentIndex(1); // Page des examens
}

void MainWindow::on_Employes_2_clicked()
{
    // Navigate to the employees page (index 0)
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_Examens_2_clicked()
{
    // Navigate to the exams page (index 1)
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_Apprenant_3_clicked()
{
    // Navigate to the first Apprenant page (index 2)
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_Apprenant_4_clicked()
{
    // Navigate to the second Apprenant page (index 3)
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_apprenant_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    refreshTableApprenants();
}

void MainWindow::on_vehicule_btn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_4);
    refreshTableVehicules();
}

void MainWindow::viderChampsApprenants()
{
    ui->nom_4->clear();
    ui->prenomm_2->clear();
    ui->email_2->clear();
    ui->mdp_2->clear();
    ui->telephonne_2->clear();
    ui->cinn_2->clear();
}

void MainWindow::refreshTableApprenants()
{
    ui->tableWidget_4->setRowCount(0);
    QList<Apprenant> list = Apprenant::chargerTous();
    for (const Apprenant& a : list) {
        int row = ui->tableWidget_4->rowCount();
        ui->tableWidget_4->insertRow(row);
        ui->tableWidget_4->setItem(row, 0, new QTableWidgetItem(a.getNom()));
        ui->tableWidget_4->setItem(row, 1, new QTableWidgetItem(a.getPrenom()));
        ui->tableWidget_4->setItem(row, 2, new QTableWidgetItem(a.getEmail()));
        ui->tableWidget_4->setItem(row, 3, new QTableWidgetItem(a.getMdp()));
        ui->tableWidget_4->setItem(row, 4, new QTableWidgetItem(a.getTelephone()));
        ui->tableWidget_4->setItem(row, 5, new QTableWidgetItem(QString::number(a.getCin())));
    }

    if (ui->tableWidget_5) {
        ui->tableWidget_5->setRowCount(0);
        for (const Apprenant& a : list) {
            int row = ui->tableWidget_5->rowCount();
            ui->tableWidget_5->insertRow(row);
            ui->tableWidget_5->setItem(row, 0, new QTableWidgetItem(a.getNom()));
            ui->tableWidget_5->setItem(row, 1, new QTableWidgetItem(a.getPrenom()));
            ui->tableWidget_5->setItem(row, 2, new QTableWidgetItem(a.getEmail()));
            ui->tableWidget_5->setItem(row, 3, new QTableWidgetItem(a.getMdp()));
            ui->tableWidget_5->setItem(row, 4, new QTableWidgetItem(a.getTelephone()));
            ui->tableWidget_5->setItem(row, 5, new QTableWidgetItem(QString::number(a.getCin())));
        }
    }
}

void MainWindow::on_pushButton_ajouter_2_clicked()
{
    QString nom = ui->nom_4->text().trimmed();
    QString prenom = ui->prenomm_2->text().trimmed();
    QString email = ui->email_2->text().trimmed();
    QString mdp = ui->mdp_2->text().trimmed();
    QString tel = ui->telephonne_2->text().trimmed();
    QString cinText = ui->cinn_2->text().trimmed();

    if (nom.isEmpty() || prenom.isEmpty() || email.isEmpty() || mdp.isEmpty() || tel.isEmpty() || cinText.isEmpty()) {
        QMessageBox::warning(this, "Ajout Apprenant", "Tous les champs sont obligatoires.");
        return;
    }
    QRegularExpression emailRx("^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$");
    if (!emailRx.match(email).hasMatch()) {
        QMessageBox::warning(this, "Ajout Apprenant", "Email invalide.");
        ui->email_2->setFocus();
        ui->email_2->selectAll();
        return;
    }
    QRegularExpression digits8("^\\d{8}$");
    if (!digits8.match(tel).hasMatch()) {
        QMessageBox::warning(this, "Ajout Apprenant", "Téléphone invalide (8 chiffres).");
        ui->telephonne_2->setFocus();
        ui->telephonne_2->selectAll();
        return;
    }
    bool okCin = false; int cin = cinText.toInt(&okCin);
    if (!okCin) {
        QMessageBox::warning(this, "Ajout Apprenant", "CIN doit être numérique.");
        ui->cinn_2->setFocus();
        ui->cinn_2->selectAll();
        return;
    }
    if (mdp.size() < 6) {
        QMessageBox::warning(this, "Ajout Apprenant", "Mot de passe trop court (min 6). ");
        ui->mdp_2->setFocus();
        ui->mdp_2->selectAll();
        return;
    }

    if (Apprenant::existe(cin)) {
        QMessageBox::warning(this, "Ajout Apprenant", "Un apprenant avec ce CIN existe déjà.");
        return;
    }
    {
        QSqlQuery q(Connection::instance()->getDatabase());
        q.prepare("SELECT 1 FROM APPRENANT WHERE CIN = :cin");
        q.bindValue(":cin", cin);
        if (q.exec() && q.next()) {
            QMessageBox::warning(this, "Ajout Apprenant", "Un apprenant avec ce CIN existe déjà.");
            return;
        }
    }

    Apprenant a(nom, prenom, email, mdp, tel, cin);
    if (a.ajouter()) {
        QMessageBox::information(this, "Succès", "Apprenant ajouté");
        refreshTableApprenants();
        viderChampsApprenants();
    } else {
        QString err = Apprenant::getLastError();
        QMessageBox::critical(this, "Erreur", err.isEmpty() ? "Échec d'ajout" : err);
    }
}

void MainWindow::on_pushButton_modifier_2_clicked()
{
    QString nom = ui->nom_4->text().trimmed();
    QString prenom = ui->prenomm_2->text().trimmed();
    QString email = ui->email_2->text().trimmed();
    QString mdp = ui->mdp_2->text().trimmed();
    QString tel = ui->telephonne_2->text().trimmed();
    int cin = ui->cinn_2->text().trimmed().toInt();

    Apprenant a(nom, prenom, email, mdp, tel, cin);
    bool ok = false;
    if (selectedCin > 0) {
        ok = a.modifierDepuisCle(selectedCin);
    } else {
        ok = a.modifier();
    }
    if (ok) {
        QMessageBox::information(this, "Succès", "Apprenant modifié");
        refreshTableApprenants();
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de modification");
    }
}

void MainWindow::on_Supprimer_4_clicked()
{
    int cin = -1;
    int row4 = ui->tableWidget_4->currentRow();
    int row5 = ui->tableWidget_5 ? ui->tableWidget_5->currentRow() : -1;

    // Try to get CIN from the selected row in tableWidget_4
    if (row4 >= 0 && ui->tableWidget_4->item(row4, 5)) {
        bool ok;
        cin = ui->tableWidget_4->item(row4, 5)->text().toInt(&ok);
        if (!ok) {
            QMessageBox::warning(this, "Erreur", "CIN invalide dans la ligne sélectionnée.");
            return;
        }
    }
    // If not found in tableWidget_4, try tableWidget_5
    else if (row5 >= 0 && ui->tableWidget_5 && ui->tableWidget_5->item(row5, 5)) {
        bool ok;
        cin = ui->tableWidget_5->item(row5, 5)->text().toInt(&ok);
        if (!ok) {
            QMessageBox::warning(this, "Erreur", "CIN invalide dans la ligne sélectionnée.");
            return;
        }
    }
    // If no row is selected, try to get CIN from the input field
    else {
        bool ok;
        cin = ui->cinn_2->text().trimmed().toInt(&ok);
        if (!ok || cin <= 0) {
            QMessageBox::warning(this, "Suppression", "Veuillez sélectionner un apprenant ou entrer un CIN valide.");
            return;
        }
    }

    // Confirm deletion
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmer la suppression",
                                  "Êtes-vous sûr de vouloir supprimer cet apprenant ?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::No) {
        return;
    }

    // Create and delete the Apprenant
    Apprenant a;
    a.setCin(cin);

    if (a.supprimer()) {
        QMessageBox::information(this, "Succès", "Apprenant supprimé avec succès");
        // Remove the row from the table(s)
        if (row4 >= 0) ui->tableWidget_4->removeRow(row4);
        if (row5 >= 0 && ui->tableWidget_5) ui->tableWidget_5->removeRow(row5);
        refreshTableApprenants();
        viderChampsApprenants();
    } else {
        QString error = Apprenant::getLastError();
        QMessageBox::critical(this, "Erreur", error.isEmpty() ? "Échec de la suppression" : error);
    }
}
void MainWindow::on_pushButton_supprimer_2_clicked()
{
    on_Supprimer_4_clicked();
}

void MainWindow::on_annuler_3_clicked()
{
    viderChampsApprenants();
}

void MainWindow::on_tableWidget_4_cellClicked(int row, int column)
{
    Q_UNUSED(column);
    ui->nom_4->setText(ui->tableWidget_4->item(row, 0)->text());
    ui->prenomm_2->setText(ui->tableWidget_4->item(row, 1)->text());
    ui->email_2->setText(ui->tableWidget_4->item(row, 2)->text());
    ui->mdp_2->setText(ui->tableWidget_4->item(row, 3)->text());
    ui->telephonne_2->setText(ui->tableWidget_4->item(row, 4)->text());
    ui->cinn_2->setText(ui->tableWidget_4->item(row, 5)->text());
    selectedNom = ui->tableWidget_4->item(row, 0)->text();
    selectedCin = ui->tableWidget_4->item(row, 5)->text().toInt();
}

void MainWindow::on_tableWidget_5_cellClicked(int row, int column)
{
    Q_UNUSED(column);
    ui->nom_4->setText(ui->tableWidget_5->item(row, 0)->text());
    ui->prenomm_2->setText(ui->tableWidget_5->item(row, 1)->text());
    ui->email_2->setText(ui->tableWidget_5->item(row, 2)->text());
    ui->mdp_2->setText(ui->tableWidget_5->item(row, 3)->text());
    ui->telephonne_2->setText(ui->tableWidget_5->item(row, 4)->text());
    ui->cinn_2->setText(ui->tableWidget_5->item(row, 5)->text());
    selectedNom = ui->tableWidget_5->item(row, 0)->text();
    selectedCin = ui->tableWidget_5->item(row, 5)->text().toInt();
}

void MainWindow::trierTableauApprenants(int ordre)
{
    QString critere = ui->comboBox_4->currentText();
    int colonne = -1;
    if (critere == "Nom") colonne = 0;
    else if (critere == "N tel") colonne = 4;
    else if (critere == "CIN") colonne = 5;
    else return;

    QList<QList<QTableWidgetItem*>> lignes;
    for (int i = 0; i < ui->tableWidget_4->rowCount(); ++i) {
        QList<QTableWidgetItem*> rowItems;
        for (int j = 0; j < ui->tableWidget_4->columnCount(); ++j) {
            rowItems.append(ui->tableWidget_4->takeItem(i, j));
        }
        lignes.append(rowItems);
    }

    std::sort(lignes.begin(), lignes.end(), [colonne, ordre](const QList<QTableWidgetItem*>& a, const QList<QTableWidgetItem*>& b) {
        QString va = a[colonne] ? a[colonne]->text() : "";
        QString vb = b[colonne] ? b[colonne]->text() : "";
        int cmp = QString::compare(va, vb, Qt::CaseInsensitive);
        return ordre < 0 ? cmp > 0 : cmp < 0;
    });

    ui->tableWidget_4->setRowCount(0);
    for (const auto& items : lignes) {
        int row = ui->tableWidget_4->rowCount();
        ui->tableWidget_4->insertRow(row);
        for (int j = 0; j < items.size(); ++j) {
            ui->tableWidget_4->setItem(row, j, items[j]);
        }
    }
}

void MainWindow::on_pushButton_10_clicked()
{
    trierTableauApprenants(-1);
}

void MainWindow::on_pushButton_11_clicked()
{
    trierTableauApprenants(1);
}

void MainWindow::on_pushButton_3_clicked()
{
    QString crit = ui->comboBox_3->currentText();
    int col = 0;
    if (crit == "Tri_par_nom") col = 0;
    else if (crit == "Tri_par_prenom") col = 1;
    else if (crit == "Tri_par_telephone") col = 4;

    QList<QList<QTableWidgetItem*>> rows;
    for (int i = 0; i < ui->tableWidget_4->rowCount(); ++i) {
        QList<QTableWidgetItem*> r;
        for (int j = 0; j < ui->tableWidget_4->columnCount(); ++j) {
            r.append(ui->tableWidget_4->takeItem(i, j));
        }
        rows.append(r);
    }
    std::sort(rows.begin(), rows.end(), [col](const QList<QTableWidgetItem*>& a, const QList<QTableWidgetItem*>& b) {
        QString va = a[col] ? a[col]->text() : "";
        QString vb = b[col] ? b[col]->text() : "";
        return QString::localeAwareCompare(va, vb) < 0;
    });
    ui->tableWidget_4->setRowCount(0);
    for (const auto& items : rows) {
        int r = ui->tableWidget_4->rowCount();
        ui->tableWidget_4->insertRow(r);
        for (int j = 0; j < items.size(); ++j) ui->tableWidget_4->setItem(r, j, items[j]);
    }

    if (ui->tableWidget_5) {
        QList<QList<QTableWidgetItem*>> rows2;
        for (int i = 0; i < ui->tableWidget_5->rowCount(); ++i) {
            QList<QTableWidgetItem*> r;
            for (int j = 0; j < ui->tableWidget_5->columnCount(); ++j) {
                r.append(ui->tableWidget_5->takeItem(i, j));
            }
            rows2.append(r);
        }
        std::sort(rows2.begin(), rows2.end(), [col](const QList<QTableWidgetItem*>& a, const QList<QTableWidgetItem*>& b) {
            QString va = a[col] ? a[col]->text() : "";
            QString vb = b[col] ? b[col]->text() : "";
            return QString::localeAwareCompare(va, vb) < 0;
        });
        ui->tableWidget_5->setRowCount(0);
        for (const auto& items : rows2) {
            int r = ui->tableWidget_5->rowCount();
            ui->tableWidget_5->insertRow(r);
            for (int j = 0; j < items.size(); ++j) ui->tableWidget_5->setItem(r, j, items[j]);
        }
    }
}

void MainWindow::on_pushButton_rechercher_by_id_2_clicked()
{
    QString cinText = ui->id_recherche_2->text().trimmed();
    if (cinText.isEmpty()) {
        QMessageBox::warning(this, "Recherche", "Entrez un CIN.");
        return;
    }
    bool okNum = false;
    int cinVal = cinText.toInt(&okNum);
    if (!okNum) {
        QMessageBox::warning(this, "Recherche", "Le CIN doit être numérique.");
        return;
    }

    QList<Apprenant> list = Apprenant::chargerTous();
    QList<Apprenant> filtered;
    for (const Apprenant& a : list) {
        if (a.getCin() == cinVal) filtered.append(a);
    }

    ui->tableWidget_4->setRowCount(0);
    for (const Apprenant& a : filtered) {
        int row = ui->tableWidget_4->rowCount();
        ui->tableWidget_4->insertRow(row);
        ui->tableWidget_4->setItem(row, 0, new QTableWidgetItem(a.getNom()));
        ui->tableWidget_4->setItem(row, 1, new QTableWidgetItem(a.getPrenom()));
        ui->tableWidget_4->setItem(row, 2, new QTableWidgetItem(a.getEmail()));
        ui->tableWidget_4->setItem(row, 3, new QTableWidgetItem(a.getMdp()));
        ui->tableWidget_4->setItem(row, 4, new QTableWidgetItem(a.getTelephone()));
        ui->tableWidget_4->setItem(row, 5, new QTableWidgetItem(QString::number(a.getCin())));
    }

    if (ui->tableWidget_5) {
        ui->tableWidget_5->setRowCount(0);
        for (const Apprenant& a : filtered) {
            int row = ui->tableWidget_5->rowCount();
            ui->tableWidget_5->insertRow(row);
            ui->tableWidget_5->setItem(row, 0, new QTableWidgetItem(a.getNom()));
            ui->tableWidget_5->setItem(row, 1, new QTableWidgetItem(a.getPrenom()));
            ui->tableWidget_5->setItem(row, 2, new QTableWidgetItem(a.getEmail()));
            ui->tableWidget_5->setItem(row, 3, new QTableWidgetItem(a.getMdp()));
            ui->tableWidget_5->setItem(row, 4, new QTableWidgetItem(a.getTelephone()));
            ui->tableWidget_5->setItem(row, 5, new QTableWidgetItem(QString::number(a.getCin())));
        }
    }
}

void MainWindow::on_pushButton_15_clicked()
{
    QString texte = ui->identifant_4->text().trimmed();
    QString critere = ui->comboBox_4->currentText();
    QList<Apprenant> list = Apprenant::chargerTous();
    QList<Apprenant> filtered;
    for (const Apprenant& a : list) {
        bool ok = false;
        if (critere == "Nom") ok = a.getNom().compare(texte, Qt::CaseInsensitive) == 0;
        else if (critere == "N tel") ok = a.getTelephone().contains(texte, Qt::CaseInsensitive);
        else if (critere == "CIN") ok = QString::number(a.getCin()).compare(texte, Qt::CaseInsensitive) == 0;
        else ok = true;
        if (ok) filtered.append(a);
    }
    ui->tableWidget_4->setRowCount(0);
    for (const Apprenant& a : filtered) {
        int row = ui->tableWidget_4->rowCount();
        ui->tableWidget_4->insertRow(row);
        ui->tableWidget_4->setItem(row, 0, new QTableWidgetItem(a.getNom()));
        ui->tableWidget_4->setItem(row, 1, new QTableWidgetItem(a.getPrenom()));
        ui->tableWidget_4->setItem(row, 2, new QTableWidgetItem(a.getEmail()));
        ui->tableWidget_4->setItem(row, 3, new QTableWidgetItem(a.getMdp()));
        ui->tableWidget_4->setItem(row, 4, new QTableWidgetItem(a.getTelephone()));
        ui->tableWidget_4->setItem(row, 5, new QTableWidgetItem(QString::number(a.getCin())));
    }
    if (ui->tableWidget_5) {
        ui->tableWidget_5->setRowCount(0);
        for (const Apprenant& a : filtered) {
            int row = ui->tableWidget_5->rowCount();
            ui->tableWidget_5->insertRow(row);
            ui->tableWidget_5->setItem(row, 0, new QTableWidgetItem(a.getNom()));
            ui->tableWidget_5->setItem(row, 1, new QTableWidgetItem(a.getPrenom()));
            ui->tableWidget_5->setItem(row, 2, new QTableWidgetItem(a.getEmail()));
            ui->tableWidget_5->setItem(row, 3, new QTableWidgetItem(a.getMdp()));
            ui->tableWidget_5->setItem(row, 4, new QTableWidgetItem(a.getTelephone()));
            ui->tableWidget_5->setItem(row, 5, new QTableWidgetItem(QString::number(a.getCin())));
        }
    }
}
void MainWindow::refreshTableVehicules()
{
    ui->tab->setRowCount(0);
    QSqlQuery query(Connection::instance()->getDatabase());
    QString sql = "SELECT \"IMMATRICULATION\", \"MODELE_DU_VEHICULE\", \"KILOMETRAGE\", TO_CHAR(\"DATE_ASSURANCE\",'YYYY-MM-DD'), \"ETAT\", NVL(\"TEMPERATURE\",0) FROM VEHICULE";
    if (query.exec(sql)) {
        while (query.next()) {
            int row = ui->tab->rowCount();
            ui->tab->insertRow(row);
            ui->tab->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->tab->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->tab->setItem(row, 2, new QTableWidgetItem(query.value(2).toString()));
            ui->tab->setItem(row, 3, new QTableWidgetItem(query.value(3).toString()));
            ui->tab->setItem(row, 4, new QTableWidgetItem(query.value(4).toString()));
            ui->tab->setItem(row, 5, new QTableWidgetItem(query.value(5).toString()));
        }
    }
}

void MainWindow::on_ajouter_clicked()
{
    QString imm = ui->Immatriculation_3->text().trimmed();
    QString modele = ui->mo->text().trimmed();
    int kilometrage = ui->kilo->text().trimmed().toInt();
    QString dateAss = ui->date_3->text().trimmed();
    QDate d = QDate::fromString(dateAss, "yyyy-MM-dd");
    if (!d.isValid()) d = QDate::fromString(dateAss, "dd/MM/yyyy");
    if (!d.isValid()) d = QDate::fromString(dateAss, "dd-MM-yyyy");
    if (!d.isValid()) d = QDate::fromString(dateAss, "yyyy/MM/dd");
    if (d.isValid()) dateAss = d.toString("yyyy-MM-dd");
    QString etat = ui->ett->text().trimmed();

    if (imm.isEmpty() || modele.isEmpty() || dateAss.isEmpty() || etat.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Champs requis manquants");
        return;
    }

    Vehicule v(imm, modele, kilometrage, dateAss, etat);
    if (v.ajouter()) {
        QMessageBox::information(this, "Succès", "Véhicule ajouté");
        refreshTableVehicules();
    } else {
        QMessageBox::critical(this, "Erreur", Vehicule::getLastError().isEmpty() ? "Échec d'ajout" : Vehicule::getLastError());
    }
}

void MainWindow::on_modifier_5_clicked()
{
    QString imm = ui->Immatriculation_3->text().trimmed();
    QString modele = ui->mo->text().trimmed();
    int kilometrage = ui->kilo->text().trimmed().toInt();
    QString dateAss = ui->date_3->text().trimmed();
    QDate d = QDate::fromString(dateAss, "yyyy-MM-dd");
    if (!d.isValid()) d = QDate::fromString(dateAss, "dd/MM/yyyy");
    if (!d.isValid()) d = QDate::fromString(dateAss, "dd-MM-yyyy");
    if (!d.isValid()) d = QDate::fromString(dateAss, "yyyy/MM/dd");
    if (d.isValid()) dateAss = d.toString("yyyy-MM-dd");
    QString etat = ui->ett->text().trimmed();

    if (imm.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Immatriculation requise");
        return;
    }

    Vehicule v(imm, modele, kilometrage, dateAss, etat);
    if (v.modifier()) {
        QMessageBox::information(this, "Succès", "Véhicule modifié");
        refreshTableVehicules();
    } else {
        QMessageBox::critical(this, "Erreur", Vehicule::getLastError().isEmpty() ? "Échec de modification" : Vehicule::getLastError());
    }
}

void MainWindow::on_annuler_7_clicked()
{
    ui->Immatriculation_3->clear();
    ui->mo->clear();
    ui->kilo->clear();
    ui->date_3->clear();
    ui->ett->clear();
}

void MainWindow::on_tab_cellClicked(int row, int)
{
    if (row >= 0) {
        ui->Immatriculation_3->setText(ui->tab->item(row, 0)->text());
        ui->mo->setText(ui->tab->item(row, 1)->text());
        ui->kilo->setText(ui->tab->item(row, 2)->text());
        ui->date_3->setText(ui->tab->item(row, 3)->text());
        ui->ett->setText(ui->tab->item(row, 4)->text());
    }
}

void MainWindow::on_valider_clicked()
{
    QString id = ui->identifant_5->text().trimmed();
    ui->tab->setRowCount(0);
    QSqlQuery query(Connection::instance()->getDatabase());
    QString sql = "SELECT \"IMMATRICULATION\", \"MODELE_DU_VEHICULE\", \"KILOMETRAGE\", TO_CHAR(\"DATE_ASSURANCE\",'YYYY-MM-DD'), \"ETAT\", NVL(\"TEMPERATURE\",0) FROM VEHICULE WHERE \"IMMATRICULATION\" = :id OR UPPER(\"MODELE_DU_VEHICULE\") LIKE UPPER(:like)";
    query.prepare(sql);
    query.bindValue(":id", id);
    query.bindValue(":like", "%" + id + "%");
    if (query.exec()) {
        while (query.next()) {
            int row = ui->tab->rowCount();
            ui->tab->insertRow(row);
            ui->tab->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->tab->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->tab->setItem(row, 2, new QTableWidgetItem(query.value(2).toString()));
            ui->tab->setItem(row, 3, new QTableWidgetItem(query.value(3).toString()));
            ui->tab->setItem(row, 4, new QTableWidgetItem(query.value(4).toString()));
            ui->tab->setItem(row, 5, new QTableWidgetItem(query.value(5).toString()));
        }
    }
}

void MainWindow::trierTableauVehicules(int ordre)
{
    QString crit = ui->comboBox_5->currentText();
    QString col;
    if (crit.contains("kilometrage", Qt::CaseInsensitive)) col = "\"KILOMETRAGE\"";
    else if (crit.contains("etat", Qt::CaseInsensitive)) col = "\"ETAT\"";
    else if (crit.contains("date", Qt::CaseInsensitive)) col = "\"DATE_ASSURANCE\"";
    else col = "\"IMMATRICULATION\"";

    QString dir = ordre > 0 ? "ASC" : "DESC";
    ui->tab->setRowCount(0);
    QSqlQuery query(Connection::instance()->getDatabase());
    QString sql = "SELECT \"IMMATRICULATION\", \"MODELE_DU_VEHICULE\", \"KILOMETRAGE\", TO_CHAR(\"DATE_ASSURANCE\",'YYYY-MM-DD'), \"ETAT\", NVL(\"TEMPERATURE\",0) FROM VEHICULE ORDER BY " + col + " " + dir;
    if (query.exec(sql)) {
        while (query.next()) {
            int row = ui->tab->rowCount();
            ui->tab->insertRow(row);
            ui->tab->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->tab->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->tab->setItem(row, 2, new QTableWidgetItem(query.value(2).toString()));
            ui->tab->setItem(row, 3, new QTableWidgetItem(query.value(3).toString()));
            ui->tab->setItem(row, 4, new QTableWidgetItem(query.value(4).toString()));
            ui->tab->setItem(row, 5, new QTableWidgetItem(query.value(5).toString()));
        }
    }
}

void MainWindow::on_pushButton_19_clicked()
{
    trierTableauVehicules(-1);
}

void MainWindow::on_pushButton_20_clicked()
{
    trierTableauVehicules(1);
}

void MainWindow::on_pushButton_alertes_clicked()
{
    QSqlQuery query(Connection::instance()->getDatabase());
    query.exec("SELECT \"IMMATRICULATION\", \"MODELE_DU_VEHICULE\", \"DATE_ASSURANCE\", NVL(\"TEMPERATURE\",0) FROM VEHICULE");

    struct Notif { QString type; QString imm; QString model; QString detail; QColor color; };
    QList<Notif> notifs;
    int countExpiring = 0, countExpired = 0, countTemp = 0;

    while (query.next()) {
        QString imm = query.value(0).toString();
        QString model = query.value(1).toString();
        QDate assurance = query.value(2).toDate();
        int days = QDate::currentDate().daysTo(assurance);
        double temp = query.value(3).toDouble();

        if (days >= 0 && days <= 30) {
            countExpiring++;
            notifs.append({"Assurance", imm, model, QString("Échéance dans %1 jour(s)").arg(days), QColor("#f39c12")});
        } else if (days < 0) {
            countExpired++;
            notifs.append({"Assurance", imm, model, QString("Assurance expirée depuis %1 jour(s)").arg(-days), QColor("#e74c3c")});
        }

        if (temp > 80.0) {
            countTemp++;
            notifs.append({"Température", imm, model, QString("Température élevée: %1°C").arg(qRound(temp)), QColor("#c0392b")});
        }
    }

    QDialog *dlg = new QDialog(this);
    dlg->setWindowTitle("Notifications - Véhicules");
    dlg->resize(900, 600);

    QScrollArea *scroll = new QScrollArea(dlg);
    scroll->setWidgetResizable(true);
    QWidget *content = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(content);
    layout->setContentsMargins(20, 20, 20, 20);
    layout->setSpacing(15);

    QLabel *title = new QLabel("🔔 Notifications");
    title->setAlignment(Qt::AlignCenter);
    title->setStyleSheet("font-size: 20px; font-weight: bold; color: #2c3e50; background-color: white; border-radius: 8px; padding: 10px; border-bottom: 2px solid #3498db;");
    layout->addWidget(title);

    QWidget *summary = new QWidget;
    summary->setStyleSheet("background-color: white; border-radius: 8px; padding: 10px;");
    QHBoxLayout *sumLayout = new QHBoxLayout(summary);
    auto makeChip = [](const QString &text, const QColor &bg){ QLabel *l = new QLabel(text); l->setStyleSheet(QString("QLabel { background-color: %1; color: white; padding: 8px 12px; border-radius: 16px; font-weight: bold; }").arg(bg.name())); return l; };
    sumLayout->addWidget(makeChip(QString("Assurances ≤30j: %1").arg(countExpiring), QColor("#f39c12")));
    sumLayout->addWidget(makeChip(QString("Assurances expirées: %1").arg(countExpired), QColor("#e74c3c")));
    sumLayout->addWidget(makeChip(QString("Température élevée: %1").arg(countTemp), QColor("#c0392b")));
    sumLayout->addStretch();
    layout->addWidget(summary);

    QTableWidget *table = new QTableWidget(notifs.size(), 4);
    table->setHorizontalHeaderLabels({"Type", "Immatriculation", "Modèle", "Détail"});
    table->verticalHeader()->setVisible(false);
    table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    table->setSelectionMode(QAbstractItemView::NoSelection);
    table->setAlternatingRowColors(true);
    table->setShowGrid(true);
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    table->setStyleSheet("QTableWidget { background-color: white; color: #2c3e50; } QHeaderView::section { background-color: #3498db; color: white; padding: 6px; }");

    for (int i = 0; i < notifs.size(); ++i) {
        const auto &n = notifs[i];
        table->setItem(i, 0, new QTableWidgetItem(n.type));
        table->setItem(i, 1, new QTableWidgetItem(n.imm));
        table->setItem(i, 2, new QTableWidgetItem(n.model));
        table->setItem(i, 3, new QTableWidgetItem(n.detail));
        for (int c = 0; c < 4; ++c) {
            QTableWidgetItem *it = table->item(i, c);
            if (it) {
                it->setBackground(n.color.lighter(180));
            }
        }
    }

    layout->addWidget(table);

    QWidget *btns = new QWidget;
    QHBoxLayout *btnLayout = new QHBoxLayout(btns);
    btnLayout->addStretch();
    QPushButton *closeBtn = new QPushButton("Fermer");
    closeBtn->setStyleSheet("QPushButton { background-color: #95a5a6; color: white; border: none; padding: 10px 20px; border-radius: 8px; font-weight: bold; } QPushButton:hover { background-color: #7f8c8d; }");
    btnLayout->addWidget(closeBtn);
    layout->addWidget(btns);

    connect(closeBtn, &QPushButton::clicked, dlg, &QDialog::accept);

    scroll->setWidget(content);
    QVBoxLayout *dlgLayout = new QVBoxLayout(dlg);
    dlgLayout->setContentsMargins(0,0,0,0);
    dlgLayout->addWidget(scroll);
    if (notifs.isEmpty()) {
        QMessageBox::information(this, "Notifications", "Aucune alerte véhicule");
        delete dlg;
        return;
    }
    dlg->exec();
    delete dlg;
}

void MainWindow::genererPdfStatistiquesVehicules(const QString &fileName)
{
    QPrinter printer(QPrinter::HighResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(fileName);
    printer.setPageSize(QPageSize(QPageSize::A4));
    printer.setPageOrientation(QPageLayout::Portrait);
    printer.setPageMargins(QMarginsF(15, 15, 15, 15));
    QSqlQuery q(Connection::instance()->getDatabase());
    int total = 0;
    int expiring = 0;
    int expired = 0;
    double kmTotal = 0;
    int kmCount = 0;
    double tempAvg = 0;
    double tempMax = 0;
    QMap<QString,int> etats;
    QList<QStringList> rows;
    if (q.exec("SELECT \"IMMATRICULATION\", \"MODELE_DU_VEHICULE\", \"KILOMETRAGE\", TO_CHAR(\"DATE_ASSURANCE\",'YYYY-MM-DD'), \"ETAT\", NVL(\"TEMPERATURE\",0) FROM VEHICULE")) {
        while (q.next()) {
            total++;
            QString etat = q.value(4).toString();
            etats[etat] = etats.value(etat) + 1;
            bool okKm = false;
            double km = q.value(2).toDouble(&okKm);
            if (okKm) { kmTotal += km; kmCount++; }
            QDate dAss = QDate::fromString(q.value(3).toString(), "yyyy-MM-dd");
            int days = QDate::currentDate().daysTo(dAss);
            if (days <= 30 && days >= 0) expiring++;
            if (days < 0) expired++;
            double t = q.value(5).toDouble();
            tempAvg += t;
            if (t > tempMax) tempMax = t;
            rows.append({ q.value(0).toString(), q.value(1).toString(), q.value(2).toString(), q.value(3).toString(), q.value(4).toString(), q.value(5).toString() });
        }
    }
    double kmMean = kmCount ? kmTotal / kmCount : 0.0;
    double tempMean = total ? tempAvg / total : 0.0;
    QString html;
    html += "<html><head><style>";
    html += "body{font-family:Arial,sans-serif;margin:20px;}";
    html += "h1{color:#2c3e50;text-align:center;border-bottom:2px solid #3498db;padding-bottom:10px;}";
    html += "h2{color:#34495e;border-left:4px solid #3498db;padding-left:10px;margin-top:25px;}";
    html += "table{width:100%;border-collapse:collapse;margin:15px 0;}";
    html += "th{background-color:#3498db;color:white;padding:10px;text-align:left;}";
    html += "td{padding:8px;border:1px solid #ddd;}";
    html += ".stat-box{background-color:#f8f9fa;padding:15px;margin:10px 0;border-radius:5px;border-left:4px solid #3498db;}";
    html += "</style></head><body>";
    html += "<h1>📊 RAPPORT STATISTIQUE DES VÉHICULES</h1>";
    html += QString("<p style='text-align:center;color:#7f8c8d;'>Généré le %1</p>").arg(QDate::currentDate().toString("dd/MM/yyyy"));
    html += "<h2>🎯 VUE D'ENSEMBLE</h2>";
    html += "<div class='stat-box'><table>";
    html += QString("<tr><td><strong>Total des véhicules</strong></td><td>%1</td></tr>").arg(total);
    html += QString("<tr><td><strong>Assurances ≤30 jours</strong></td><td>%1</td></tr>").arg(expiring);
    html += QString("<tr><td><strong>Assurances expirées</strong></td><td>%1</td></tr>").arg(expired);
    html += QString("<tr><td><strong>Kilométrage moyen</strong></td><td>%1</td></tr>").arg(qRound(kmMean));
    html += QString("<tr><td><strong>Température moyenne</strong></td><td>%1</td></tr>").arg(qRound(tempMean));
    html += QString("<tr><td><strong>Température max</strong></td><td>%1</td></tr>").arg(qRound(tempMax));
    html += "</table></div>";
    html += "<h2>📋 RÉPARTITION PAR ÉTAT</h2>";
    html += "<div class='stat-box'><table><tr><th>État</th><th>Nombre</th><th>Pourcentage</th></tr>";
    for (auto it = etats.constBegin(); it != etats.constEnd(); ++it) {
        double p = total ? (it.value() * 100.0) / total : 0.0;
        html += QString("<tr><td>%1</td><td>%2</td><td>%3%</td></tr>").arg(it.key()).arg(it.value()).arg(p,0,'f',1);
    }
    html += "</table></div>";
    html += "<h2>📦 LISTE DES VÉHICULES</h2>";
    html += "<div class='stat-box'><table>";
    html += "<tr><th>Immatriculation</th><th>Modèle</th><th>Kilométrage</th><th>Date Assurance</th><th>État</th><th>Température</th></tr>";
    for (const auto &r : rows) {
        html += QString("<tr><td>%1</td><td>%2</td><td>%3</td><td>%4</td><td>%5</td><td>%6</td></tr>")
            .arg(r[0]).arg(r[1]).arg(r[2]).arg(r[3]).arg(r[4]).arg(r[5]);
    }
    html += "</table></div>";
    html += "</body></html>";
    QTextDocument document;
    document.setHtml(html);
    document.print(&printer);
}

static QString formatPercent(double value) { return QString::number(qRound(value * 1000.0) / 10.0) + "%"; }

void MainWindow::on_pushButton_statistique_6_clicked()
{
    QSqlQuery q(Connection::instance()->getDatabase());
    int total = 0;
    int expiring = 0;
    int expired = 0;
    double kmTotal = 0;
    int kmCount = 0;
    double tempAvg = 0;
    double tempMax = 0;
    QMap<QString,int> etats;

    if (q.exec("SELECT \"ETAT\", \"KILOMETRAGE\", \"DATE_ASSURANCE\", NVL(\"TEMPERATURE\",0) FROM VEHICULE")) {
        while (q.next()) {
            total++;
            QString etat = q.value(0).toString();
            etats[etat] = etats.value(etat) + 1;
            bool okKm = false;
            double km = q.value(1).toDouble(&okKm);
            if (okKm) { kmTotal += km; kmCount++; }
            QDate dAss = q.value(2).toDate();
            int days = QDate::currentDate().daysTo(dAss);
            if (days <= 30 && days >= 0) expiring++;
            if (days < 0) expired++;
            double t = q.value(3).toDouble();
            tempAvg += t;
            if (t > tempMax) tempMax = t;
        }
    }

    double kmMean = kmCount ? kmTotal / kmCount : 0.0;
    double tempMean = total ? tempAvg / total : 0.0;

    QDialog *statsDialog = new QDialog(this);
    statsDialog->setWindowTitle("Statistiques véhicules");
    statsDialog->resize(1100, 720);

    QScrollArea *scrollArea = new QScrollArea(statsDialog);
    scrollArea->setWidgetResizable(true);
    QWidget *scrollContent = new QWidget;
    QVBoxLayout *mainLayout = new QVBoxLayout(scrollContent);
    mainLayout->setContentsMargins(20, 20, 20, 20);
    mainLayout->setSpacing(20);

    QLabel *title = new QLabel("📊 Statistiques des véhicules");
    title->setAlignment(Qt::AlignCenter);
    title->setStyleSheet("font-size: 22px; font-weight: bold; color: #2c3e50; background-color: white; border-radius: 10px; padding: 12px; border-bottom: 2px solid #3498db;");
    mainLayout->addWidget(title);

    QWidget *pieChartContainer = new QWidget;
    pieChartContainer->setMinimumSize(600, 500);
    QHBoxLayout *chartLayout = new QHBoxLayout(pieChartContainer);
    chartLayout->setAlignment(Qt::AlignCenter);

    QVector<int> counts;
    QVector<double> percentages;
    QVector<QString> labels;
    QVector<QColor> colors;
    QList<QColor> baseColors = {QColor("#3498db"), QColor("#e74c3c"), QColor("#2ecc71"), QColor("#9b59b6"), QColor("#f1c40f"), QColor("#1abc9c"), QColor("#e67e22"), QColor("#7f8c8d")};
    int idx = 0;
    for (auto it = etats.constBegin(); it != etats.constEnd(); ++it) {
        counts.append(it.value());
        double p = total ? (it.value() * 100.0) / total : 0.0;
        percentages.append(p);
        labels.append(it.key());
        colors.append(baseColors[idx % baseColors.size()]);
        idx++;
    }

    class VehiclePieChart : public QWidget {
        QVector<double> m_percentages;
        QVector<int> m_counts;
        QVector<QString> m_labels;
        QVector<QColor> m_colors;
        double m_progress;
        QTimer *m_timer;
    public:
        VehiclePieChart(const QVector<int> &counts,
                        const QVector<double> &percentages,
                        const QVector<QColor> &colors,
                        const QVector<QString> &labels,
                        QWidget *parent = nullptr)
            : QWidget(parent), m_percentages(percentages), m_counts(counts), m_labels(labels), m_colors(colors), m_progress(0.0), m_timer(new QTimer(this))
        {
            connect(m_timer, &QTimer::timeout, this, [this]() {
                m_progress = qMin(1.0, m_progress + 0.02);
                update();
                if (m_progress >= 1.0) m_timer->stop();
            });
            m_timer->start(16);
        }
    protected:
        void paintEvent(QPaintEvent *) override {
            QPainter painter(this);
            painter.setRenderHint(QPainter::Antialiasing, true);
            QRectF rect(20, 20, width() - 40, height() - 40);
            if (m_percentages.isEmpty()) {
                painter.setPen(QColor("#2c3e50"));
                QFont f = painter.font();
                f.setPointSize(12);
                f.setBold(true);
                painter.setFont(f);
                painter.drawText(rect, Qt::AlignCenter, "Aucune donnée");
                return;
            }
            double startDeg = 0.0;
            QPointF center(rect.center());
            double radius = qMin(rect.width(), rect.height()) / 2.0;
            for (int i = 0; i < m_percentages.size(); ++i) {
                double spanDeg = m_percentages[i] * 3.6 * m_progress;
                painter.setBrush(m_colors[i]);
                painter.setPen(QPen(Qt::white, 2));
                painter.drawPie(rect, int(startDeg * 16), int(spanDeg * 16));
                double midDeg = startDeg + spanDeg / 2.0;
                double rad = qDegreesToRadians(midDeg);
                QPointF pos = center + QPointF(std::cos(rad) * radius * 0.6, std::sin(rad) * radius * 0.6);
                painter.setPen(QColor("#2c3e50"));
                QFont f = painter.font();
                f.setPointSize(10);
                f.setBold(true);
                painter.setFont(f);
                QString txt = QString("%1 (%2%)").arg(m_labels[i]).arg(m_percentages[i], 0, 'f', 1);
                QRectF tr(pos.x() - 80, pos.y() - 14, 160, 28);
                painter.drawText(tr, Qt::AlignCenter, txt);
                startDeg += spanDeg;
            }
        }
    };

    VehiclePieChart *pie = new VehiclePieChart(counts, percentages, colors, labels);
    pie->setMinimumSize(450, 450);
    chartLayout->addWidget(pie);

    QWidget *legendWidget = new QWidget;
    legendWidget->setMaximumWidth(380);
    QVBoxLayout *legendLayout = new QVBoxLayout(legendWidget);
    legendLayout->setSpacing(12);
    legendLayout->setContentsMargins(20, 20, 20, 20);

    QLabel *legendTitle = new QLabel("Répartition par état");
    legendTitle->setAlignment(Qt::AlignCenter);
    legendTitle->setStyleSheet("font-size: 16px; font-weight: bold; color: #2c3e50; background-color: #ecf0f1; border-radius: 8px; padding: 10px; border-left: 4px solid #3498db;");
    legendLayout->addWidget(legendTitle);

    QTableWidget *etatTable = new QTableWidget(etats.size(), 3);
    etatTable->setHorizontalHeaderLabels({"État", "Nombre", "%"});
    etatTable->setAlternatingRowColors(true);
    etatTable->verticalHeader()->setVisible(false);
    etatTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    etatTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    etatTable->setSelectionMode(QAbstractItemView::NoSelection);
    etatTable->setShowGrid(true);
    etatTable->setStyleSheet("QTableWidget { background-color: white; color: #2c3e50; } QHeaderView::section { background-color: #3498db; color: white; padding: 6px; } QTableWidget::item { color: #2c3e50; }");
    int r = 0;
    for (int i = 0; i < labels.size(); ++i) {
        etatTable->setItem(r, 0, new QTableWidgetItem(labels[i]));
        etatTable->setItem(r, 1, new QTableWidgetItem(QString::number(counts[i])));
        etatTable->setItem(r, 2, new QTableWidgetItem(QString::number(percentages[i], 'f', 1)));
        r++;
    }
    legendLayout->addWidget(etatTable);

    QWidget *chartContainer = new QWidget;
    chartContainer->setStyleSheet("background-color: white; border-radius: 10px;");
    QHBoxLayout *containerLayout = new QHBoxLayout(chartContainer);
    containerLayout->setSpacing(30);
    containerLayout->setContentsMargins(20, 20, 20, 20);
    containerLayout->addWidget(pieChartContainer, 3);
    containerLayout->addWidget(legendWidget, 1);
    mainLayout->addWidget(chartContainer);

    QWidget *summaryWidget = new QWidget;
    summaryWidget->setStyleSheet("background-color: white; border-radius: 10px; padding: 15px;");
    QVBoxLayout *summaryLayout = new QVBoxLayout(summaryWidget);
    QLabel *summaryTitle = new QLabel("Statistiques générales");
    summaryTitle->setAlignment(Qt::AlignLeft);
    summaryTitle->setStyleSheet("font-size: 16px; font-weight: bold; color: #2c3e50; padding: 6px; border-left: 4px solid #3498db;");
    summaryLayout->addWidget(summaryTitle);
    QTableWidget *statsTable = new QTableWidget(6, 2);
    statsTable->setHorizontalHeaderLabels({"Mesure", "Valeur"});
    statsTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    statsTable->setAlternatingRowColors(true);
    statsTable->verticalHeader()->setVisible(false);
    statsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    statsTable->setSelectionMode(QAbstractItemView::NoSelection);
    statsTable->setShowGrid(true);
    statsTable->setStyleSheet("QTableWidget { background-color: white; color: #2c3e50; } QHeaderView::section { background-color: #3498db; color: white; padding: 6px; } QTableWidget::item { color: #2c3e50; }");
    QStringList metrics = {"Total véhicules", "Assurances ≤30 jours", "Assurances expirées", "Kilométrage moyen", "Température moyenne", "Température max"};
    QStringList values = {QString::number(total), QString::number(expiring), QString::number(expired), QString::number(qRound(kmMean)), QString::number(qRound(tempMean)), QString::number(qRound(tempMax))};
    for (int i = 0; i < metrics.size(); ++i) {
        statsTable->setItem(i, 0, new QTableWidgetItem(metrics[i]));
        statsTable->setItem(i, 1, new QTableWidgetItem(values[i]));
    }
    summaryLayout->addWidget(statsTable);
    mainLayout->addWidget(summaryWidget);

    QWidget *buttonContainer = new QWidget;
    buttonContainer->setStyleSheet("background-color: white; border-radius: 10px; padding: 15px;");
    QHBoxLayout *buttonLayout = new QHBoxLayout(buttonContainer);
    buttonLayout->addStretch();
    QPushButton *exportButton = new QPushButton("📊 Exporter Rapport PDF");
    exportButton->setStyleSheet("QPushButton { background-color: #3498db; color: white; border: none; padding: 12px 22px; border-radius: 8px; font-weight: bold; } QPushButton:hover { background-color: #2980b9; }");
    QPushButton *closeButton = new QPushButton("Fermer");
    closeButton->setStyleSheet("QPushButton { background-color: #95a5a6; color: white; border: none; padding: 12px 22px; border-radius: 8px; font-weight: bold; } QPushButton:hover { background-color: #7f8c8d; }");
    buttonLayout->addWidget(exportButton);
    buttonLayout->addWidget(closeButton);
    mainLayout->addWidget(buttonContainer);

    connect(exportButton, &QPushButton::clicked, this, &MainWindow::on_exportPdf_clicked);
    connect(closeButton, &QPushButton::clicked, statsDialog, &QDialog::accept);

    scrollArea->setWidget(scrollContent);
    QVBoxLayout *dialogLayout = new QVBoxLayout(statsDialog);
    dialogLayout->setContentsMargins(0, 0, 0, 0);
    dialogLayout->addWidget(scrollArea);
    statsDialog->exec();
    delete statsDialog;
}

void MainWindow::on_Supprimer_5_clicked()
{
    int row = ui->tab->currentRow();
    QString imm;
    if (row >= 0 && ui->tab->item(row, 0)) {
        imm = ui->tab->item(row, 0)->text();
    } else {
        imm = ui->Immatriculation_3->text().trimmed();
    }
    if (imm.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Sélectionner un véhicule");
        return;
    }
    Vehicule v;
    if (v.supprimer(imm)) {
        QMessageBox::information(this, "Succès", "Véhicule supprimé");
        refreshTableVehicules();
        on_annuler_7_clicked();
    } else {
        QMessageBox::critical(this, "Erreur", Vehicule::getLastError().isEmpty() ? "Échec de suppression" : Vehicule::getLastError());
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    static Arduino a;
    static bool init = false;
    if (!init) {
        a.connect_arduino();
        init = true;
    }
    QByteArray data = a.read_from_arduino();
    if (!data.isEmpty()) {
        QString s = QString::fromLatin1(data).trimmed();
        ui->label_temperature->setText(s);
        bool ok = false;
        int t = s.toInt(&ok);
        if (!ok) {
            QRegularExpression re("(\\d+)");
            QRegularExpressionMatch m = re.match(s);
            if (m.hasMatch()) {
                t = m.captured(1).toInt();
                ok = true;
            }
        }
        QString imm = ui->Immatriculation_3->text().trimmed();
        if (ok && !imm.isEmpty()) {
            QSqlQuery q(Connection::instance()->getDatabase());
            q.prepare("UPDATE VEHICULE SET \"TEMPERATURE\" = :t WHERE \"IMMATRICULATION\" = :imm");
            q.bindValue(":t", t);
            q.bindValue(":imm", imm);
            q.exec();
            refreshTableVehicules();
        }
    }
}

void MainWindow::readArduinoData()
{
    static QByteArray buffer;  // Utilisez QByteArray au lieu de QString

    // Lire toutes les données disponibles
    buffer += arduino->readAll();

    // Debug: afficher ce qui arrive
    qDebug() << "Données brutes reçues:" << buffer.toHex();
    qDebug() << "Texte reçu:" << QString::fromUtf8(buffer);

    // Chercher des lignes complètes (terminées par \n)
    while(buffer.contains('\n')) {
        int newlineIndex = buffer.indexOf('\n');
        QByteArray line = buffer.left(newlineIndex).trimmed();
        buffer.remove(0, newlineIndex + 1);

        QString cin = QString::fromUtf8(line);

        // Valider que c'est un CIN (8 chiffres)
        if(cin.length() == 8 && cin.toInt() > 0) {
            qDebug() << "====> CIN VALIDE REÇU :" << cin;

            // Vérifier disponibilité
            QString status = checkAvailability(cin);
            qDebug() << "Statut:" << status;

            // Envoyer réponse à Arduino
            arduino->write((status + "\n").toUtf8());
            arduino->flush();
            qDebug() << "Réponse envoyée:" << status;
        }
        else if(!cin.isEmpty()) {
            qDebug() << "Données ignorées (pas 8 chiffres):" << cin;
        }
    }

    // Nettoyer le buffer s'il devient trop grand
    if(buffer.size() > 100) {
        qDebug() << "Buffer nettoyé (trop grand):" << buffer.size();
        buffer.clear();
    }
}

QString MainWindow::checkAvailability(const QString &cin)
{
    QSqlQuery query;
    query.prepare("SELECT DISPONIBILITE FROM EMPLOYEES WHERE CIN = :cin");
    query.bindValue(":cin", cin);

    if(!query.exec()){
        qDebug() << "Erreur SQL:" << query.lastError().text();
        return "Erreur";
    }

    if(query.next()){
        QString status = query.value(0).toString();
        // Normaliser la réponse
        if(status.contains("disponible", Qt::CaseInsensitive)) {
            return "Disponible";
        } else if(status.contains("indisponible", Qt::CaseInsensitive)) {
            return "Indisponible";
        }
        return status;
    }

    return "Inconnu";
}
void MainWindow::setupArduino()
{
    arduino = new QSerialPort(this);
    QString arduino_port_name = "COM4";  // Changed to COM4

    arduino->setPortName(arduino_port_name);

    if (!arduino->open(QIODevice::ReadWrite)) {
        qDebug() << "Failed to open port" << arduino_port_name;
        QMessageBox::warning(this, "Port Error",
                             QString("Could not open port %1\nError: %2\n\n"
                                     "Make sure:\n"
                                     "1. The Arduino is connected to COM4\n"
                                     "2. No other program is using COM4\n"
                                     "3. The correct drivers are installed")
                                 .arg(arduino_port_name)
                                 .arg(arduino->errorString()));
        return;
    }

    // If we get here, port is open
    arduino->setBaudRate(QSerialPort::Baud9600);
    arduino->setDataBits(QSerialPort::Data8);
    arduino->setParity(QSerialPort::NoParity);
    arduino->setStopBits(QSerialPort::OneStop);
    arduino->setFlowControl(QSerialPort::NoFlowControl);

    connect(arduino, &QSerialPort::readyRead, this, &MainWindow::onArduinoReadyRead);
    qDebug() << "Successfully connected to Arduino on" << arduino_port_name;

    // Test the connection
    arduino->write("TEST\n");  // Send a test message
    arduino->flush();
}
void MainWindow::onArduinoReadyRead()
{
    static QString temperatureString; // Store partial temperature data

    while (arduino->canReadLine()) {
        QString data = arduino->readLine().trimmed();
        qDebug() << "Raw data from Arduino:" << data;

        // Try to convert the line to a double (temperature value)
        bool ok;
        double temperature = data.toDouble(&ok);

        if (ok) {
            // This line contains a valid temperature number
            temperatureString = data;
        }
        // Check if this is the "C" line that follows the temperature
        else if (data == "C" && !temperatureString.isEmpty()) {
            // We have a complete temperature reading
            bool convertOk;
            double tempValue = temperatureString.toDouble(&convertOk);

            if (convertOk && tempValue > -50 && tempValue < 150) {  // LM35 range validation
                qDebug() << "Temperature:" << tempValue << "°C";

                // Update temperature in the UI
                if (ui->label_temperature) {
                    ui->label_temperature->setText(QString("Temperature: %1 °C").arg(tempValue, 0, 'f', 1));
                }

                // Update temperature in the vehicle table if a vehicle is selected
                int currentRow = ui->tab->currentRow();
                if (currentRow >= 0) {
                    QString immatriculation = ui->tab->item(currentRow, 0)->text();
                    // Update the temperature in the database
                    QSqlQuery query;
                    query.prepare("UPDATE VEHICULE SET TEMPERATURE = :temp WHERE IMMATRICULATION = :immat");
                    query.bindValue(":temp", tempValue);
                    query.bindValue(":immat", immatriculation);
                    if (!query.exec()) {
                        qDebug() << "Error updating temperature in database:" << query.lastError().text();
                    } else {
                        // Update the UI
                        QTableWidgetItem *tempItem = new QTableWidgetItem(QString::number(tempValue, 'f', 1) + " °C");
                        ui->tab->setItem(currentRow, 5, tempItem);
                    }
                }
            }
            temperatureString.clear(); // Reset for next reading
        }
        // Handle the UID in format "EFE238C3" (without "UID:" prefix)
        else if (data.length() == 8) {  // Check if it's an 8-character UID
            qDebug() << "Detected UID:" << data;
            handleRFIDScan(data);
        }
        // Also keep the old format check in case it's needed
        else if (data.startsWith("UID:")) {
            QString uid = data.mid(4).trimmed();
            qDebug() << "Formatted UID:" << uid;
            handleRFIDScan(uid);
        }
    }
}
  void MainWindow::handleRFIDScan(const QString &rfidUid)
{
    qDebug() << "Card scanned with UID:" << rfidUid;

    // Clean the UID by removing spaces and converting to uppercase
    QString cleanUid = rfidUid.trimmed().toUpper();

    // Check if this is the allowed UID
    if (cleanUid == "EFE238C3") {
        // This is the allowed card - verify against database
        QSqlQuery q;
        q.prepare("SELECT NOM, PRENOM FROM APPRENANT WHERE CIN = :cin");
        q.bindValue(":cin", 15242325);  // The specific CIN we're checking for

        if (q.exec() && q.next()) {
            // Found the apprenant
            QString nom = q.value("NOM").toString();
            QString prenom = q.value("PRENOM").toString();

            QMessageBox::information(this, "Access Granted",
                                     QString("✅ Access Granted!\nWelcome %1 %2\nCIN: 15242325\nRFID: %3")
                                         .arg(prenom, nom, cleanUid));
        } else {
            // This shouldn't happen if the apprenant exists
            QMessageBox::warning(this, "Error",
                                 "Apprenant with CIN 15242325 not found in database");
        }
    }
    // Deny any other UID
    else {
        QMessageBox::warning(this, "Access Denied",
                             QString("❌ Access Denied!\nThis card is not authorized.\nRFID: %1").arg(cleanUid));
        qDebug() << "Access denied for UID:" << cleanUid;
    }
}
