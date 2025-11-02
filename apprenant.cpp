#include "apprenant.h"
#include "connection.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>

void Apprenant::setConnection(Connection* conn)
{
    connection = conn;
}

Apprenant::Apprenant(QString n, QString p, int t, QString e, QString m, int cinValue)
{
    nom = n;
    prenom = p;
    telephone = t;
    email = e;
    mdp = m;
    this->cin = cinValue;}

// --- AJOUTER : VÉRIFIE SI CIN EXISTE DÉJÀ ---
bool Apprenant::ajouter()
{
    if (!connection || !connection->getDatabase().isOpen()) {
        qDebug() << "Erreur : Connexion non initialisée ou fermée !";
        return false;
    }

    // Vérifier doublon CIN
    QSqlQuery check(connection->getDatabase());
    check.prepare("SELECT cin FROM apprenants WHERE cin = :cin");
    check.bindValue(":cin", cin);
    if (check.exec() && check.next()) {
        qDebug() << "ÉCHEC : CIN déjà existant :" << cin;
        return false;
    }

    QSqlQuery query(connection->getDatabase());
    query.prepare("INSERT INTO apprenants (nom, prenom, email, mdp, telephone, cin) "
                  "VALUES (:nom, :prenom, :email, :mdp, :telephone, :cin)");
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);
    query.bindValue(":mdp", mdp);
    query.bindValue(":telephone", telephone);
    query.bindValue(":cin", cin);

    if (!query.exec()) {
        qDebug() << "Échec insertion SQL :" << query.lastError().text();
        return false;
    }

    qDebug() << "Apprenant ajouté avec succès !";
    return true;
}

// --- AFFICHER ---
QSqlQueryModel* Apprenant::afficher()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    if (connection && connection->getDatabase().isOpen()) {
        model->setQuery("SELECT nom, prenom, email, mdp, telephone, cin FROM apprenants",
                        connection->getDatabase());
    }

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prénom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Email"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Mot de passe"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Téléphone"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("CIN"));

    return model;
}

// --- SUPPRIMER ---
bool Apprenant::supprimer(int cinValue)
{
    if (!connection || !connection->getDatabase().isOpen())
        return false;

    QSqlQuery query(connection->getDatabase());
    query.prepare("DELETE FROM apprenants WHERE cin = :cin");
    query.bindValue(":cin", cinValue);
    return query.exec();
}

// --- MODIFIER ---
bool Apprenant::modifier()
{
    if (!connection || !connection->getDatabase().isOpen())
        return false;

    QSqlQuery query(connection->getDatabase());
    query.prepare("UPDATE apprenants SET nom = :nom, prenom = :prenom, "
                  "email = :email, mdp = :mdp, telephone = :telephone "
                  "WHERE cin = :cin");
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);
    query.bindValue(":mdp", mdp);
    query.bindValue(":telephone", telephone);
    query.bindValue(":cin", cin);
    return query.exec();
}
