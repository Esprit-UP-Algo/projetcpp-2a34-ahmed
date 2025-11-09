#include "vehicule.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QSqlError>

bool Vehicule::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO VEHICULE (\"IMMATRICULATION\", \"MODÈLE_DU_VEHICULE\", \"KILOMÉTRAGE\", \"DATE_ASSURANCE\", \"ÉTAT\") "
                  "VALUES (:matricule, :modele, :kilometrage, TO_DATE(:date_assurance, 'YYYY-MM-DD'), :etat)");

    query.bindValue(":matricule", matricule);
    query.bindValue(":modele", modele);
    query.bindValue(":kilometrage", kilometrage);
    query.bindValue(":date_assurance", date_assurance);
    query.bindValue(":etat", etat);

    if (query.exec()) {
        qDebug() << "✅ Véhicule ajouté.";
        return true;
    } else {
        qDebug() << "❌ Erreur ajout:" << query.lastError().text();
        return false;
    }
}

QSqlQueryModel* Vehicule::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT \"IMMATRICULATION\", \"MODÈLE_DU_VEHICULE\", \"KILOMÉTRAGE\", "
                    "TO_CHAR(\"DATE_ASSURANCE\", 'YYYY-MM-DD'), \"ÉTAT\" FROM VEHICULE");

    model->setHeaderData(0, Qt::Horizontal, "Matricule");
    model->setHeaderData(1, Qt::Horizontal, "Modèle");
    model->setHeaderData(2, Qt::Horizontal, "Kilométrage");
    model->setHeaderData(3, Qt::Horizontal, "Date Assurance");
    model->setHeaderData(4, Qt::Horizontal, "État");

    return model;
}

bool Vehicule::supprimer(QString matricule)
{
    QSqlQuery query;
    query.prepare("DELETE FROM VEHICULE WHERE \"IMMATRICULATION\" = :matricule");
    query.bindValue(":matricule", matricule);

    return query.exec();
}

bool Vehicule::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE VEHICULE SET \"MODÈLE_DU_VEHICULE\" = :modele, \"KILOMÉTRAGE\" = :kilometrage, "
                  "\"DATE_ASSURANCE\" = TO_DATE(:date_assurance, 'YYYY-MM-DD'), \"ÉTAT\" = :etat "
                  "WHERE \"IMMATRICULATION\" = :matricule");

    query.bindValue(":matricule", matricule);
    query.bindValue(":modele", modele);
    query.bindValue(":kilometrage", kilometrage);
    query.bindValue(":date_assurance", date_assurance);
    query.bindValue(":etat", etat);

    return query.exec();
}
