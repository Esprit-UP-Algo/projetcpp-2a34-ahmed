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

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Connection c;
    c.connect(); // connexion base

    // Ajouter 5 colonnes au tableau (sans ID)
    ui->tab->setColumnCount(5);
    ui->tab->setHorizontalHeaderLabels({"Immatriculation", "Modèle du véhicule", "Kilométrage", "Date assurance", "État"});

    // === CONTRÔLES DE SAISIE ===

    // 1. Immatriculation : Format AA-123-AA ou 123-AA-1200
    QRegularExpression immatRegex("^[A-Z]{2}-\\d{3}-[A-Z]{2}$|^\\d{3}-[A-Z]{2}-\\d{4}$");
    ui->Immatriculation_3->setValidator(new QRegularExpressionValidator(immatRegex, this));
    ui->Immatriculation_3->setPlaceholderText("Format: AB-123-CD ou 123-AB-1200");
    ui->Immatriculation_3->setToolTip("Format accepté: AB-123-CD ou 123-AB-1200");

    // 2. Modèle du véhicule : Lettres, chiffres, espaces et tirets
    QRegularExpression modeleRegex("^[a-zA-Z0-9\\s\\-]{0,20}$");
    ui->mo->setValidator(new QRegularExpressionValidator(modeleRegex, this));
    ui->mo->setMaxLength(20);
    ui->mo->setPlaceholderText("Max 20 caractères");
    ui->mo->setToolTip("Lettres, chiffres, espaces et tirets uniquement");

    // 3. Kilométrage : Uniquement des chiffres, maximum 7 chiffres
    QRegularExpression kmRegex("^\\d{0,7}$");
    ui->kilo->setValidator(new QRegularExpressionValidator(kmRegex, this));
    ui->kilo->setPlaceholderText("Ex: 150000");
    ui->kilo->setToolTip("Chiffres uniquement (0-9999999)");

    // 4. Date assurance : Format date JJ/MM/AAAA
    QRegularExpression dateRegex("^(0[1-9]|[12][0-9]|3[01])/(0[1-9]|1[0-2])/\\d{4}$");
    ui->date_3->setValidator(new QRegularExpressionValidator(dateRegex, this));
    ui->date_3->setPlaceholderText("JJ/MM/AAAA");
    ui->date_3->setToolTip("Format: JJ/MM/AAAA (ex: 08/11/2024)");

    // 5. État : QLineEdit avec validation
    QRegularExpression etatRegex("^[a-zA-Zéèêëàâäôöûüç\\s]{0,20}$");
    ui->ett->setValidator(new QRegularExpressionValidator(etatRegex, this));
    ui->ett->setMaxLength(20);
    ui->ett->setPlaceholderText("Ex: Bon état, Neuf, Usé...");
    ui->ett->setToolTip("Lettres et espaces uniquement, max 20 caractères");

    // 6. Recherche : Pas de validation spécifique pour permettre toute immatriculation
    ui->identifant_5->setPlaceholderText("Entrez une immatriculation");
    ui->identifant_5->setToolTip("Entrez l'immatriculation exacte du véhicule à rechercher");

    // 7. ComboBox pour le tri
    ui->comboBox_5->addItem("Trier par...");
    ui->comboBox_5->addItem("Kilométrage");
    ui->comboBox_5->addItem("État");
    ui->comboBox_5->addItem("Date assurance");
    ui->comboBox_5->setToolTip("Choisissez le critère de tri");

    // 8. Boutons pour le tri
    ui->pushButton_19->setText("↑"); // Tri ascendant
    ui->pushButton_19->setToolTip("Tri ascendant");
    ui->pushButton_20->setText("↓"); // Tri descendant
    ui->pushButton_20->setToolTip("Tri descendant");

    // 9. Bouton pour les statistiques
    ui->pushButton_statistique_6->setText("Statistiques");
    ui->pushButton_statistique_6->setToolTip("Voir les statistiques des véhicules");

    // 10. Bouton de retour (sur la page 2)
    // Le texte et tooltip seront définis dans l'interface UI

    // Charger tous les véhicules au démarrage
    chargerTousLesVehicules();
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Fonction pour charger tous les véhicules
void MainWindow::chargerTousLesVehicules() {
    QSqlQuery query("SELECT IMMATRICULATION, MODÈLE_DU_VEHICLE, KILOMÉTRAGE, DATE_ASSURANCE, ÉTAT FROM VEHICULE ORDER BY IMMATRICULATION");

    ui->tab->setRowCount(0);

    while (query.next()) {
        int row = ui->tab->rowCount();
        ui->tab->insertRow(row);

        // Colonne 0: Immatriculation
        ui->tab->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));
        // Colonne 1: Modèle
        ui->tab->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));
        // Colonne 2: Kilométrage
        ui->tab->setItem(row, 2, new QTableWidgetItem(query.value(2).toString()));

        // Colonne 3: Date assurance (formatée)
        QString dateText = "";
        if (!query.value(3).isNull()) {
            QDate date = query.value(3).toDate();
            dateText = date.toString("dd/MM/yyyy");
        }
        ui->tab->setItem(row, 3, new QTableWidgetItem(dateText));

        // Colonne 4: État
        ui->tab->setItem(row, 4, new QTableWidgetItem(query.value(4).toString()));
    }
}

void MainWindow::on_ajouter_clicked()
{
    QString imm = ui->Immatriculation_3->text();
    QString modele = ui->mo->text();
    QString kilometrage = ui->kilo->text();
    QString dateText = ui->date_3->text();
    QString etat = ui->ett->text();

    // === VALIDATIONS ===

    // Validation immatriculation
    if (imm.isEmpty()) {
        QMessageBox::warning(this,"Attention","Immatriculation vide !");
        ui->Immatriculation_3->setFocus();
        return;
    }

    QRegularExpression immatRegex("^[A-Z]{2}-\\d{3}-[A-Z]{2}$|^\\d{3}-[A-Z]{2}-\\d{4}$");
    QRegularExpressionMatch match = immatRegex.match(imm);
    if (!match.hasMatch()) {
        QMessageBox::warning(this,"Erreur","Format d'immatriculation invalide!\nExemples: AB-123-CD ou 123-AB-1200");
        ui->Immatriculation_3->setFocus();
        return;
    }

    // Validation kilométrage
    if (!kilometrage.isEmpty()) {
        bool ok;
        int km = kilometrage.toInt(&ok);
        if (!ok || km < 0 || km > 9999999) {
            QMessageBox::warning(this,"Erreur","Kilométrage invalide!\nDoit être entre 0 et 9 999 999");
            ui->kilo->setFocus();
            return;
        }
    }

    // Validation date
    if (!dateText.isEmpty()) {
        QRegularExpression dateRegex("^(0[1-9]|[12][0-9]|3[01])/(0[1-9]|1[0-2])/\\d{4}$");
        QRegularExpressionMatch dateMatch = dateRegex.match(dateText);
        if (!dateMatch.hasMatch()) {
            QMessageBox::warning(this,"Erreur","Format de date invalide!\nFormat requis: JJ/MM/AAAA");
            ui->date_3->setFocus();
            return;
        }

        QDate date = QDate::fromString(dateText, "dd/MM/yyyy");
        if (!date.isValid()) {
            QMessageBox::warning(this,"Erreur","Date invalide!");
            ui->date_3->setFocus();
            return;
        }
        if (date < QDate::currentDate()) {
            QMessageBox::warning(this,"Erreur","Date passée non autorisée!\nLa date doit être >= aujourd'hui");
            ui->date_3->setFocus();
            return;
        }
    }

    // Validation modèle
    if (modele.length() > 20) {
        QMessageBox::warning(this,"Erreur","Modèle trop long!\nMaximum 20 caractères");
        ui->mo->setFocus();
        return;
    }

    // Validation état
    if (etat.length() > 20) {
        QMessageBox::warning(this,"Erreur","État trop long!\nMaximum 20 caractères");
        ui->ett->setFocus();
        return;
    }

    // === DÉTERMINER SI C'EST UN AJOUT OU UNE MODIFICATION ===
    QModelIndexList selectedIndexes = ui->tab->selectionModel()->selectedIndexes();
    bool isModification = !selectedIndexes.isEmpty();

    QSqlQuery query;

    if (isModification) {
        // MODE MODIFICATION
        int row = selectedIndexes.first().row();
        QString immOriginal = ui->tab->item(row, 0)->text(); // Utiliser l'immatriculation comme clé

        query.prepare("UPDATE VEHICULE SET IMMATRICULATION = :imm, MODÈLE_DU_VEHICLE = :modele, KILOMÉTRAGE = :km, DATE_ASSURANCE = :date_ass, ÉTAT = :etat WHERE IMMATRICULATION = :imm_original");
        query.bindValue(":imm_original", immOriginal);
    } else {
        // MODE AJOUT
        query.prepare("INSERT INTO VEHICULE (IMMATRICULATION, MODÈLE_DU_VEHICLE, KILOMÉTRAGE, DATE_ASSURANCE, ÉTAT) VALUES (:imm, :modele, :km, :date_ass, :etat)");
    }

    query.bindValue(":imm", imm);
    query.bindValue(":modele", modele);

    // Gestion du kilométrage
    if (kilometrage.isEmpty()) {
        query.bindValue(":km", QVariant(QVariant::Int));
    } else {
        query.bindValue(":km", kilometrage.toInt());
    }

    // Gestion de la date d'assurance
    if (dateText.isEmpty()) {
        query.bindValue(":date_ass", QVariant(QVariant::Date));
    } else {
        QDate dateAssurance = QDate::fromString(dateText, "dd/MM/yyyy");
        query.bindValue(":date_ass", dateAssurance);
    }

    // Gestion de l'état
    if (etat.isEmpty()) {
        query.bindValue(":etat", QVariant(QVariant::String));
    } else {
        query.bindValue(":etat", etat);
    }

    if (query.exec()) {
        QString message = isModification ? "✅ Véhicule modifié dans la base !" : "✅ Véhicule ajouté dans la base !";
        QMessageBox::information(this, "Succès", message);

        // Recharger tous les véhicules pour mettre à jour le tableau
        chargerTousLesVehicules();

        // Vider les champs après opération
        ui->Immatriculation_3->clear();
        ui->mo->clear();
        ui->kilo->clear();
        ui->date_3->clear();
        ui->ett->clear();

        // Désélectionner la ligne
        ui->tab->clearSelection();

    } else {
        QMessageBox::critical(this, "Erreur", "❌ Opération échouée : " + query.lastError().text());
    }
}

// Fonction pour le bouton Annuler
void MainWindow::on_annuler_7_clicked()
{
    // Vider tous les champs de saisie
    ui->Immatriculation_3->clear();
    ui->mo->clear();
    ui->kilo->clear();
    ui->date_3->clear();
    ui->ett->clear();

    // Désélectionner la ligne du tableau
    ui->tab->clearSelection();

    // Remettre le focus sur le premier champ
    ui->Immatriculation_3->setFocus();

    QMessageBox::information(this, "Annulation", "Tous les champs ont été vidés.");
}

// Fonction pour le bouton Modifier
void MainWindow::on_modifier_5_clicked()
{
    // Vérifier si une ligne est sélectionnée dans le tableau
    QModelIndexList selectedIndexes = ui->tab->selectionModel()->selectedIndexes();
    if (selectedIndexes.isEmpty()) {
        QMessageBox::warning(this, "Attention", "Veuillez sélectionner un véhicule à modifier dans le tableau.");
        return;
    }

    // Récupérer la ligne sélectionnée
    int row = selectedIndexes.first().row();

    // Récupérer les données de la ligne sélectionnée
    QString imm = ui->tab->item(row, 0)->text();
    QString modele = ui->tab->item(row, 1)->text();
    QString kilometrage = ui->tab->item(row, 2)->text();
    QString dateText = ui->tab->item(row, 3)->text();
    QString etat = ui->tab->item(row, 4)->text();

    // Remplir les champs avec les données à modifier
    ui->Immatriculation_3->setText(imm);
    ui->mo->setText(modele);
    ui->kilo->setText(kilometrage);
    ui->date_3->setText(dateText);
    ui->ett->setText(etat);

    QMessageBox::information(this, "Modification", "Véhicule chargé pour modification.\nModifiez les champs et cliquez sur Ajouter pour sauvegarder.");
}

// Fonction pour le bouton Valider (Recherche par immatriculation)
void MainWindow::on_valider_clicked()
{
    QString immRecherche = ui->identifant_5->text().trimmed();

    // Vérifier si l'immatriculation est vide
    if (immRecherche.isEmpty()) {
        QMessageBox::warning(this, "Attention", "Veuillez entrer une immatriculation à rechercher.");
        ui->identifant_5->setFocus();
        return;
    }

    // DEBUG: Afficher la recherche
    qDebug() << "Recherche de l'immatriculation:" << immRecherche;

    // Recherche SIMPLE et DIRECTE dans la base de données
    QSqlQuery query;
    query.prepare("SELECT IMMATRICULATION, MODÈLE_DU_VEHICLE, KILOMÉTRAGE, DATE_ASSURANCE, ÉTAT FROM VEHICULE WHERE IMMATRICULATION = :imm");
    query.bindValue(":imm", immRecherche);

    if (query.exec()) {
        if (query.next()) {
            // Véhicule trouvé, afficher les données
            QString imm = query.value(0).toString();
            QString modele = query.value(1).toString();
            QString kilometrage = query.value(2).toString();
            QString dateAssurance = query.value(3).toString();
            QString etat = query.value(4).toString();

            // Formater la date si elle n'est pas NULL
            QString dateText = "";
            if (!query.value(3).isNull()) {
                QDate date = query.value(3).toDate();
                dateText = date.toString("dd/MM/yyyy");
            }

            // Vider le tableau et afficher seulement le véhicule trouvé
            ui->tab->setRowCount(0);
            int row = ui->tab->rowCount();
            ui->tab->insertRow(row);
            ui->tab->setItem(row, 0, new QTableWidgetItem(imm));
            ui->tab->setItem(row, 1, new QTableWidgetItem(modele));
            ui->tab->setItem(row, 2, new QTableWidgetItem(kilometrage));
            ui->tab->setItem(row, 3, new QTableWidgetItem(dateText));
            ui->tab->setItem(row, 4, new QTableWidgetItem(etat));

            // Sélectionner la ligne affichée
            ui->tab->selectRow(row);

            QMessageBox::information(this, "Recherche", "✅ Véhicule trouvé !");

        } else {
            // Aucun véhicule trouvé - essayer une recherche partielle
            QSqlQuery queryPartiel;
            queryPartiel.prepare("SELECT IMMATRICULATION, MODÈLE_DU_VEHICLE, KILOMÉTRAGE, DATE_ASSURANCE, ÉTAT FROM VEHICULE WHERE IMMATRICULATION LIKE :imm");
            queryPartiel.bindValue(":imm", "%" + immRecherche + "%");

            if (queryPartiel.exec() && queryPartiel.next()) {
                // Véhicule trouvé avec recherche partielle
                QString imm = queryPartiel.value(0).toString();
                QString modele = queryPartiel.value(1).toString();
                QString kilometrage = queryPartiel.value(2).toString();
                QString dateAssurance = queryPartiel.value(3).toString();
                QString etat = queryPartiel.value(4).toString();

                // Formater la date
                QString dateText = "";
                if (!queryPartiel.value(3).isNull()) {
                    QDate date = queryPartiel.value(3).toDate();
                    dateText = date.toString("dd/MM/yyyy");
                }

                // Vider le tableau et afficher le véhicule trouvé
                ui->tab->setRowCount(0);
                int row = ui->tab->rowCount();
                ui->tab->insertRow(row);
                ui->tab->setItem(row, 0, new QTableWidgetItem(imm));
                ui->tab->setItem(row, 1, new QTableWidgetItem(modele));
                ui->tab->setItem(row, 2, new QTableWidgetItem(kilometrage));
                ui->tab->setItem(row, 3, new QTableWidgetItem(dateText));
                ui->tab->setItem(row, 4, new QTableWidgetItem(etat));

                ui->tab->selectRow(row);
                QMessageBox::information(this, "Recherche", "✅ Véhicule trouvé (recherche partielle) !");
            } else {
                // Aucun véhicule trouvé du tout
                QMessageBox::warning(this, "Recherche", "❌ Aucun véhicule trouvé avec cette immatriculation: " + immRecherche);
                // Recharger tous les véhicules
                chargerTousLesVehicules();
            }
        }
    } else {
        QMessageBox::critical(this, "Erreur", "❌ Erreur lors de la recherche : " + query.lastError().text());
    }
}

// Fonction pour le bouton Supprimer
void MainWindow::on_Supprimer_5_clicked()
{
    // Vérifier si une ligne est sélectionnée dans le tableau
    QModelIndexList selectedIndexes = ui->tab->selectionModel()->selectedIndexes();
    if (selectedIndexes.isEmpty()) {
        QMessageBox::warning(this, "Attention", "Veuillez sélectionner un véhicule à supprimer dans le tableau.");
        return;
    }

    // Récupérer la ligne sélectionnée
    int row = selectedIndexes.first().row();
    QString imm = ui->tab->item(row, 0)->text();
    QString modele = ui->tab->item(row, 1)->text();

    // Demander confirmation à l'utilisateur
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation de suppression",
                                  QString("Êtes-vous sûr de vouloir supprimer le véhicule :\n"
                                          "Immatriculation: %1\n"
                                          "Modèle: %2\n\n"
                                          "Cette action est irréversible !")
                                      .arg(imm).arg(modele),
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        // Supprimer de la base de données
        QSqlQuery query;
        query.prepare("DELETE FROM VEHICULE WHERE IMMATRICULATION = :imm");
        query.bindValue(":imm", imm);

        if (query.exec()) {
            // Recharger tous les véhicules
            chargerTousLesVehicules();

            // Vider les champs de saisie
            ui->Immatriculation_3->clear();
            ui->mo->clear();
            ui->kilo->clear();
            ui->date_3->clear();
            ui->ett->clear();

            QMessageBox::information(this, "Suppression", "✅ Véhicule supprimé avec succès !");
        } else {
            QMessageBox::critical(this, "Erreur", "❌ Erreur lors de la suppression : " + query.lastError().text());
        }
    }
}

// Fonction pour le tri via ComboBox
void MainWindow::on_comboBox_5_currentTextChanged(const QString &arg1)
{
    // Par défaut, utiliser le tri ascendant quand on change le critère
    QString orderBy;

    if (arg1 == "Kilométrage") {
        orderBy = "KILOMÉTRAGE ASC";
    } else if (arg1 == "État") {
        orderBy = "ÉTAT ASC";
    } else if (arg1 == "Date assurance") {
        orderBy = "DATE_ASSURANCE ASC";
    } else {
        // "Trier par..." ou autre - tri par défaut par immatriculation
        chargerTousLesVehicules();
        return;
    }

    QSqlQuery query;
    QString sql = QString("SELECT IMMATRICULATION, MODÈLE_DU_VEHICLE, KILOMÉTRAGE, DATE_ASSURANCE, ÉTAT FROM VEHICULE ORDER BY %1").arg(orderBy);

    if (query.exec(sql)) {
        ui->tab->setRowCount(0);

        while (query.next()) {
            int row = ui->tab->rowCount();
            ui->tab->insertRow(row);

            ui->tab->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->tab->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->tab->setItem(row, 2, new QTableWidgetItem(query.value(2).toString()));

            // Formater la date
            QString dateText = "";
            if (!query.value(3).isNull()) {
                QDate date = query.value(3).toDate();
                dateText = date.toString("dd/MM/yyyy");
            }
            ui->tab->setItem(row, 3, new QTableWidgetItem(dateText));

            ui->tab->setItem(row, 4, new QTableWidgetItem(query.value(4).toString()));
        }

    } else {
        QMessageBox::critical(this, "Erreur", "❌ Erreur lors du tri : " + query.lastError().text());
    }
}

// Fonction pour le tri ascendant (pushButton_19)
void MainWindow::on_pushButton_19_clicked()
{
    // Récupérer le critère de tri actuel du ComboBox
    QString critereTri = ui->comboBox_5->currentText();
    QString orderBy;

    if (critereTri == "Kilométrage") {
        orderBy = "KILOMÉTRAGE ASC";
    } else if (critereTri == "État") {
        orderBy = "ÉTAT ASC";
    } else if (critereTri == "Date assurance") {
        orderBy = "DATE_ASSURANCE ASC";
    } else {
        // Tri par défaut par immatriculation
        orderBy = "IMMATRICULATION ASC";
    }

    // Exécuter la requête avec l'ordre ascendant
    QSqlQuery query;
    QString sql = QString("SELECT IMMATRICULATION, MODÈLE_DU_VEHICLE, KILOMÉTRAGE, DATE_ASSURANCE, ÉTAT FROM VEHICULE ORDER BY %1").arg(orderBy);

    if (query.exec(sql)) {
        ui->tab->setRowCount(0);

        while (query.next()) {
            int row = ui->tab->rowCount();
            ui->tab->insertRow(row);

            ui->tab->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->tab->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->tab->setItem(row, 2, new QTableWidgetItem(query.value(2).toString()));

            // Formater la date
            QString dateText = "";
            if (!query.value(3).isNull()) {
                QDate date = query.value(3).toDate();
                dateText = date.toString("dd/MM/yyyy");
            }
            ui->tab->setItem(row, 3, new QTableWidgetItem(dateText));

            ui->tab->setItem(row, 4, new QTableWidgetItem(query.value(4).toString()));
        }

    } else {
        QMessageBox::critical(this, "Erreur", "❌ Erreur lors du tri ascendant : " + query.lastError().text());
    }
}

// Fonction pour le tri descendant (pushButton_20)
void MainWindow::on_pushButton_20_clicked()
{
    // Récupérer le critère de tri actuel du ComboBox
    QString critereTri = ui->comboBox_5->currentText();
    QString orderBy;

    if (critereTri == "Kilométrage") {
        orderBy = "KILOMÉTRAGE DESC";
    } else if (critereTri == "État") {
        orderBy = "ÉTAT DESC";
    } else if (critereTri == "Date assurance") {
        orderBy = "DATE_ASSURANCE DESC";
    } else {
        // Tri par défaut par immatriculation
        orderBy = "IMMATRICULATION DESC";
    }

    // Exécuter la requête avec l'ordre descendant
    QSqlQuery query;
    QString sql = QString("SELECT IMMATRICULATION, MODÈLE_DU_VEHICLE, KILOMÉTRAGE, DATE_ASSURANCE, ÉTAT FROM VEHICULE ORDER BY %1").arg(orderBy);

    if (query.exec(sql)) {
        ui->tab->setRowCount(0);

        while (query.next()) {
            int row = ui->tab->rowCount();
            ui->tab->insertRow(row);

            ui->tab->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->tab->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->tab->setItem(row, 2, new QTableWidgetItem(query.value(2).toString()));

            // Formater la date
            QString dateText = "";
            if (!query.value(3).isNull()) {
                QDate date = query.value(3).toDate();
                dateText = date.toString("dd/MM/yyyy");
            }
            ui->tab->setItem(row, 3, new QTableWidgetItem(dateText));

            ui->tab->setItem(row, 4, new QTableWidgetItem(query.value(4).toString()));
        }

    } else {
        QMessageBox::critical(this, "Erreur", "❌ Erreur lors du tri descendant : " + query.lastError().text());
    }
}

// Fonction pour naviguer vers la page 2 (statistiques)
void MainWindow::on_pushButton_statistique_6_clicked()
{
    // Changer l'index courant du stackedWidget vers la page 2
    ui->stackedWidget->setCurrentIndex(2);

    // Optionnel: Afficher un message de confirmation
    QMessageBox::information(this, "Navigation", "Page des statistiques");
}

// Fonction pour retourner à la page 0 (page principale)
void MainWindow::on_pushButton_retour_3_clicked()
{
    // Changer l'index courant du stackedWidget vers la page 0
    ui->stackedWidget->setCurrentIndex(0);

    // Optionnel: Afficher un message de confirmation
    QMessageBox::information(this, "Navigation", "Retour à la page principale");
}

// Fonction pour naviguer vers la page Employé (page 3 - index 1)
void MainWindow::on_Employe_5_clicked()
{
    // Changer l'index courant du stackedWidget vers la page 3 (index 1)
    ui->stackedWidget->setCurrentIndex(1);

    // Optionnel: Afficher un message de confirmation
    QMessageBox::information(this, "Navigation", "Page des employés");
}
