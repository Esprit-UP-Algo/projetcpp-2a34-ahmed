#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , ligneSelectionnee(-1)
{
    ui->setupUi(this);

    // Configurer le tableau
    ui->tableWidget->setColumnCount(6);
    QStringList headers;
    headers << "ID" << "Modèle" << "Immatriculation" << "Date assurance" << "Kilométrage" << "État";
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->setRowCount(0);

    // Connexions
    connect(ui->modifier, &QPushButton::clicked, this, &MainWindow::on_btnModifier_clicked);
    connect(ui->annuler_4, &QPushButton::clicked, this, &MainWindow::on_annuler_4_clicked);
    connect(ui->Supprimer, &QPushButton::clicked, this, &MainWindow::on_Supprimer_clicked);
    connect(ui->tableWidget, &QTableWidget::cellClicked, this, &MainWindow::on_tableWidget_cellClicked);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::on_pushButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// --------------------- AJOUTER ---------------------
void MainWindow::on_btnajouter_clicked()
{
    QString immatriculation = ui->textimm->text();
    QString modele = ui->textemodel->text();
    QString kilometrage = ui->textkilo->toPlainText();
    QString dateAssurance = ui->texteDate->toPlainText();
    QString etat = ui->textetat->toPlainText();

    if (immatriculation.isEmpty() && modele.isEmpty() && kilometrage.isEmpty() && dateAssurance.isEmpty() && etat.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir au moins une information!");
        return;
    }

    int row = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);

    ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::number(row + 1)));
    ui->tableWidget->setItem(row, 1, new QTableWidgetItem(modele));
    ui->tableWidget->setItem(row, 2, new QTableWidgetItem(immatriculation));
    ui->tableWidget->setItem(row, 3, new QTableWidgetItem(dateAssurance));
    ui->tableWidget->setItem(row, 4, new QTableWidgetItem(kilometrage));
    ui->tableWidget->setItem(row, 5, new QTableWidgetItem(etat));

    ui->textimm->clear();
    ui->textemodel->clear();
    ui->textkilo->clear();
    ui->texteDate->clear();
    ui->textetat->clear();

    QMessageBox::information(this, "Succès", "Véhicule ajouté au tableau!");
}

// --------------------- MODIFIER ---------------------
void MainWindow::on_btnModifier_clicked()
{
    if (ligneSelectionnee == -1 || ligneSelectionnee >= ui->tableWidget->rowCount()) {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner une ligne valide à modifier!");
        return;
    }

    QString immatriculation = ui->textimm->text();
    QString modele = ui->textemodel->text();
    QString kilometrage = ui->textkilo->toPlainText();
    QString dateAssurance = ui->texteDate->toPlainText();
    QString etat = ui->textetat->toPlainText();

    if (immatriculation.isEmpty() && modele.isEmpty() && kilometrage.isEmpty() && dateAssurance.isEmpty() && etat.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez saisir au moins une information à modifier!");
        return;
    }

    ui->tableWidget->setItem(ligneSelectionnee, 1, new QTableWidgetItem(modele));
    ui->tableWidget->setItem(ligneSelectionnee, 2, new QTableWidgetItem(immatriculation));
    ui->tableWidget->setItem(ligneSelectionnee, 3, new QTableWidgetItem(dateAssurance));
    ui->tableWidget->setItem(ligneSelectionnee, 4, new QTableWidgetItem(kilometrage));
    ui->tableWidget->setItem(ligneSelectionnee, 5, new QTableWidgetItem(etat));

    ui->textimm->clear();
    ui->textemodel->clear();
    ui->textkilo->clear();
    ui->texteDate->clear();
    ui->textetat->clear();
    ligneSelectionnee = -1;

    QMessageBox::information(this, "Succès", "Véhicule modifié avec succès!");
}

// --------------------- SUPPRIMER ---------------------
void MainWindow::on_Supprimer_clicked()
{
    if (ligneSelectionnee == -1 || ligneSelectionnee >= ui->tableWidget->rowCount()) {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner une ligne valide à supprimer !");
        return;
    }

    QString modele = ui->tableWidget->item(ligneSelectionnee, 1)->text();
    QString immatriculation = ui->tableWidget->item(ligneSelectionnee, 2)->text();

    QMessageBox::StandardButton reply = QMessageBox::question(
        this, "Confirmation de suppression",
        "Voulez-vous vraiment supprimer le véhicule :\n"
        "Modèle: " + modele + "\nImmatriculation: " + immatriculation + " ?",
        QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        ui->tableWidget->removeRow(ligneSelectionnee);
        ui->textimm->clear();
        ui->textemodel->clear();
        ui->textkilo->clear();
        ui->texteDate->clear();
        ui->textetat->clear();
        ligneSelectionnee = -1;

        for (int i = 0; i < ui->tableWidget->rowCount(); i++) {
            ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(i + 1)));
        }

        QMessageBox::information(this, "Succès", "Véhicule supprimé avec succès !");
    } else {
        QMessageBox::information(this, "Annulé", "Suppression annulée");
    }
}

// --------------------- ANNULER ---------------------
void MainWindow::on_annuler_4_clicked()
{
    ui->textimm->clear();
    ui->textemodel->clear();
    ui->textkilo->clear();
    ui->texteDate->clear();
    ui->textetat->clear();
    ligneSelectionnee = -1;
    ui->tableWidget->clearSelection();

    QMessageBox::information(this, "Annulé", "Opération annulée - Tous les champs ont été vidés");
}

// --------------------- SELECTION TABLE ---------------------
void MainWindow::on_tableWidget_cellClicked(int row, int column)
{
    Q_UNUSED(column);
    ligneSelectionnee = row;

    if (ligneSelectionnee >= 0 && ligneSelectionnee < ui->tableWidget->rowCount()) {
        ui->textemodel->setText(ui->tableWidget->item(row, 1)->text());
        ui->textimm->setText(ui->tableWidget->item(row, 2)->text());
        ui->texteDate->setPlainText(ui->tableWidget->item(row, 3)->text());
        ui->textkilo->setPlainText(ui->tableWidget->item(row, 4)->text());
        ui->textetat->setPlainText(ui->tableWidget->item(row, 5)->text());
    }
}

// --------------------- RECHERCHER PAR ID ---------------------
void MainWindow::on_pushButton_clicked()
{
    QString idRecherche = ui->identifant->text();
    bool trouve = false;

    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QTableWidgetItem *itemID = ui->tableWidget->item(row, 0);
        if (itemID && itemID->text() == idRecherche) {
            ui->textemodel->setText(ui->tableWidget->item(row, 1)->text());
            ui->textimm->setText(ui->tableWidget->item(row, 2)->text());
            ui->texteDate->setPlainText(ui->tableWidget->item(row, 3)->text());
            ui->textkilo->setPlainText(ui->tableWidget->item(row, 4)->text());
            ui->textetat->setPlainText(ui->tableWidget->item(row, 5)->text());

            ligneSelectionnee = row;
            ui->tableWidget->selectRow(row);

            trouve = true;
            break;
        }
    }

    if (!trouve) {
        QMessageBox::warning(this, "Erreur", "Aucun véhicule trouvé avec cet ID !");
        ui->textemodel->clear();
        ui->textimm->clear();
        ui->texteDate->clear();
        ui->textkilo->clear();
        ui->textetat->clear();
        ligneSelectionnee = -1;
        ui->tableWidget->clearSelection();
    }
}
