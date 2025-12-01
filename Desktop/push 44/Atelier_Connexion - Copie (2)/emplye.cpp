#include "emplye.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

emplye::emplye()
{
}

emplye::emplye(QString cin, QString nom, QString prenom, QString disponibilite, QString telephone)
{
    this->cin = cin;
    this->nom = nom;
    this->prenom = prenom;
    this->disponibilite = disponibilite;
    this->telephone = telephone;
}

bool emplye::ajouter()
{
    QSqlQuery query;

    query.prepare("INSERT INTO EMPLOYE (CIN, NOM, PRENOM, DISPONIBILITE, TELEPHONE) "
                  "VALUES (:cin, :nom, :prenom, :disponibilite, :telephone)");

    query.bindValue(":cin", cin);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":disponibilite", disponibilite);
    query.bindValue(":telephone", telephone);

    bool success = query.exec();

    if (!success) {
        qDebug() << "Erreur d'ajout employé:" << query.lastError().text();
    }

    return success;
}

bool emplye::supprimer(QString cin)
{
    QSqlQuery query;
    query.prepare("DELETE FROM EMPLOYE WHERE CIN = :cin");
    query.bindValue(":cin", cin);
    return query.exec();
}
