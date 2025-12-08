#include "vehicule.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QSqlError>
#include "connection.h"

QString Vehicule::last_error = QString();

bool Vehicule::ajouter()
{
    QSqlQuery query(Connection::instance()->getDatabase());
    {
        QSqlQuery exists(Connection::instance()->getDatabase());
        exists.prepare("SELECT 1 FROM VEHICULE WHERE \"IMMATRICULATION\" = :matricule");
        exists.bindValue(":matricule", matricule);
        if (exists.exec() && exists.next()) {
            last_error = QString("Immatriculation existe déjà");
            return false;
        }
    }
    query.prepare("INSERT INTO VEHICULE (\"IMMATRICULATION\", \"MODELE_DU_VEHICULE\", \"KILOMETRAGE\", \"DATE_ASSURANCE\", \"ETAT\", \"TEMPERATURE\") "
                  "VALUES (:matricule, :modele, :kilometrage, TO_DATE(:date_assurance, 'YYYY-MM-DD'), :etat, :temperature)");

    query.bindValue(":matricule", matricule);
    query.bindValue(":modele", modele);
    query.bindValue(":kilometrage", kilometrage);
    query.bindValue(":date_assurance", date_assurance);
    query.bindValue(":etat", etat);
    query.bindValue(":temperature", temperature);

    if (query.exec()) {
        last_error.clear();
        return true;
    } else {
        last_error = query.lastError().text();
        return false;
    }
}

QSqlQueryModel* Vehicule::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery q(Connection::instance()->getDatabase());
    q.exec("SELECT \"IMMATRICULATION\", \"MODELE_DU_VEHICULE\", \"KILOMETRAGE\", TO_CHAR(\"DATE_ASSURANCE\", 'YYYY-MM-DD') AS \"DATE_ASSURANCE\", \"ETAT\", \"TEMPERATURE\" FROM VEHICULE");
    model->setQuery(q);

    model->setHeaderData(0, Qt::Horizontal, "Matricule");
    model->setHeaderData(1, Qt::Horizontal, "Modèle");
    model->setHeaderData(2, Qt::Horizontal, "Kilométrage");
    model->setHeaderData(3, Qt::Horizontal, "Date Assurance");
    model->setHeaderData(4, Qt::Horizontal, "État");
    model->setHeaderData(5, Qt::Horizontal, "Température");

    return model;
}

bool Vehicule::supprimer(QString matricule)
{
    QSqlQuery query(Connection::instance()->getDatabase());
    query.prepare("DELETE FROM VEHICULE WHERE \"IMMATRICULATION\" = :matricule");
    query.bindValue(":matricule", matricule);

    bool ok = query.exec();
    if (!ok) {
        last_error = query.lastError().text();
        return false;
    }
    int affected = query.numRowsAffected();
    if (affected <= 0) {
        last_error = QString("Aucune ligne supprimée");
        return false;
    }
    last_error.clear();
    return true;
}

bool Vehicule::modifier()
{
    QSqlQuery query(Connection::instance()->getDatabase());
    query.prepare("UPDATE VEHICULE SET \"MODELE_DU_VEHICULE\" = :modele, \"KILOMETRAGE\" = :kilometrage, \"DATE_ASSURANCE\" = TO_DATE(:date_assurance, 'YYYY-MM-DD'), \"ETAT\" = :etat, \"TEMPERATURE\" = :temperature WHERE \"IMMATRICULATION\" = :matricule");

    query.bindValue(":matricule", matricule);
    query.bindValue(":modele", modele);
    query.bindValue(":kilometrage", kilometrage);
    query.bindValue(":date_assurance", date_assurance);
    query.bindValue(":etat", etat);
    query.bindValue(":temperature", temperature);

    bool ok = query.exec();
    if (!ok) {
        last_error = query.lastError().text();
        return false;
    }
    int affected = query.numRowsAffected();
    if (affected <= 0) {
        last_error = QString("Aucune ligne modifiée");
        return false;
    }
    last_error.clear();
    return true;
}

QString Vehicule::getLastError()
{
    return last_error;
}
