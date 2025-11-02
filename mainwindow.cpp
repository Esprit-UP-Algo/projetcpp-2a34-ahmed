#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QRegularExpression>
#include <QDebug>
#include <QSqlDatabase>  // Pour les checks
#include "apprenant.h"

MainWindow::MainWindow(Connection* connection, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , dbConnection(connection)
    , FTemp()
{
    ui->setupUi(this);
    qDebug() << "setupUi() OK";

    if (!dbConnection) {
        QMessageBox::critical(this, "Erreur", "Connexion DB manquante !");
        return;
    }

    QSqlDatabase db = dbConnection->getDatabase();
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Erreur", "Connexion DB échouée !");
        return;
    }

    qDebug() << "Connexion DB prête dans MainWindow.";

    // PASSER LA CONNEXION À FTemp
    FTemp.setConnection(dbConnection);  // ← CETTE LIGNE ÉTAIT MANQUANTE

    ui->tableView_2->setModel(FTemp.afficher());
    qDebug() << "afficher() OK";
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Tes méthodes validateInputs, ajouter, modifier, supprimer... restent identiques
// (mais assure-toi que FTemp utilise dbConnection->getDatabase() dans ses méthodes)

// ————————————————————————————————————————
// Input validation
// ————————————————————————————————————————
bool MainWindow::validateInputs(const QString &nom, const QString &prenom,
                                int telephone, const QString &email,
                                const QString &mdp, int cin)
{
    if (cin <= 0) {
        QMessageBox::warning(this, "Invalid Input", "CIN must be a positive integer.");
        return false;
    }

    QRegularExpression nameRegex("^[A-Za-z]{2,20}$");
    if (!nameRegex.match(nom).hasMatch()) {
        QMessageBox::warning(this, "Invalid Input", "Name must contain only letters (2–20).");
        return false;
    }
    if (!nameRegex.match(prenom).hasMatch()) {
        QMessageBox::warning(this, "Invalid Input", "Last name must contain only letters (2–20).");
        return false;
    }

    if (email.isEmpty()) {
        QMessageBox::warning(this, "Invalid Input", "Email cannot be empty.");
        return false;
    }

    QString telStr = QString::number(telephone);
    QRegularExpression phoneRegex("^[0-9]{8}$");
    if (!phoneRegex.match(telStr).hasMatch()) {
        QMessageBox::warning(this, "Invalid Input", "Phone must be exactly 8 digits.");
        return false;
    }

    if (mdp.isEmpty()) {
        QMessageBox::warning(this, "Invalid Input", "Password cannot be empty.");
        return false;
    }

    return true;
}

// ————————————————————————————————————————
// ADD
// ————————————————————————————————————————
void MainWindow::on_pushButton_ajouter_clicked()
{
    qDebug() << "Ajouter clicked";

    QString cinText = ui->cinn->text().trimmed();  // Prend tout le texte
    bool ok;
    int cin = cinText.toInt(&ok);  // Vérifie la conversion

    if (!ok || cinText.isEmpty() || cin <= 0) {
        QMessageBox::warning(this, "CIN invalide", "Entrez un CIN valide (ex: 12345678).");
        return;
    }

    QString nom = ui->nom->text().trimmed();
    QString prenom = ui->prenomm->text().trimmed();
    QString email = ui->email->text().trimmed();
    QString mdp = ui->mdp->text();
    QString telText = ui->telephonne->text().trimmed();
    int telephone = telText.toInt(&ok);
    if (!ok || telText.length() != 8) {
        QMessageBox::warning(this, "Téléphone invalide", "Doit être 8 chiffres.");
        return;
    }

    if (nom.isEmpty() || prenom.isEmpty() || email.isEmpty() || mdp.isEmpty()) {
        QMessageBox::warning(this, "Champs vides", "Tous les champs sont obligatoires.");
        return;
    }

    // Vérifie si CIN existe déjà (avant d'insérer)
    QSqlQuery check(dbConnection->getDatabase());
    check.prepare("SELECT cin FROM apprenants WHERE cin = :cin");
    check.bindValue(":cin", cin);
    if (check.exec() && check.next()) {
        QMessageBox::warning(this, "Doublon",
                             QString("Le CIN <b>%1</b> existe déjà !").arg(cin));
        return;
    }

    // Insère
    FTemp.setNom(nom);
    FTemp.setPrenom(prenom);
    FTemp.setEmail(email);
    FTemp.setTelephone(telephone);
    FTemp.setMdp(mdp);
    FTemp.setCin(cin);

    if (FTemp.ajouter()) {
        QMessageBox::information(this, "Succès", "Apprenant ajouté !");

        // RAFRAÎCHIR LE TABLEAU
        ui->tableView_2->setModel(FTemp.afficher());  // ← CRUCIAL

        // Vider les champs
        ui->nom->clear();
        ui->prenomm->clear();
        ui->email->clear();
        ui->telephonne->clear();
        ui->mdp->clear();
        ui->cinn->clear();
    } else {
        QMessageBox::critical(this, "Échec", "Erreur lors de l'insertion.");
    }
}
// ————————————————————————————————————————
// MODIFY
// ————————————————————————————————————————
void MainWindow::on_pushButton_modifier_clicked()
{
    QString nom = ui->nom_modifier->text();
    QString prenom = ui->prenom_modifier->text();
    QString email = ui->email_modifier->text();
    int telephone = ui->telephone_modifier->text().toInt();
    QString mdp = ui->mdp_modifier->text();
    int cin = ui->cin_modifier->text().toInt();

    if (!validateInputs(nom, prenom, telephone, email, mdp, cin))
        return;

    FTemp.setNom(nom);
    FTemp.setPrenom(prenom);
    FTemp.setEmail(email);
    FTemp.setTelephone(telephone);
    FTemp.setMdp(mdp);
    FTemp.setCin(cin);

    if (FTemp.modifier()) {
        QMessageBox::information(this, "Success", "Apprenant modified successfully.");
        ui->tableView_2->setModel(FTemp.afficher());
    } else {
        QMessageBox::critical(this, "Error", "Failed to modify Apprenant.");
    }

    // Clear modify fields
    ui->nom_modifier->clear();
    ui->prenom_modifier->clear();
    ui->email_modifier->clear();
    ui->telephone_modifier->clear();
    ui->mdp_modifier->clear();
    ui->cin_modifier->clear();
}

// ————————————————————————————————————————
// DELETE
// ————————————————————————————————————————
void MainWindow::on_pushButton_supprimer_clicked()
{
    int cin = ui->cin_supprimer->text().toInt();
    if (cin <= 0) {
        QMessageBox::warning(this, "Invalid Input", "CIN must be positive.");
        return;
    }

    if (FTemp.supprimer(cin)) {
        QMessageBox::information(this, "Success", "Apprenant deleted.");
        ui->tableView_2->setModel(FTemp.afficher());
        ui->cin_supprimer->clear();
    } else {
        QMessageBox::critical(this, "Error", "Failed to delete Apprenant.");
    }
}
