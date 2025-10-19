#include "vehicule.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

// CONSTRUCTEUR - doit correspondre EXACTEMENT au .h
Vehicule::Vehicule(int id, QString modele, QString immatriculation, QString dateAssurance, QString kilometrage, QString etat)
{
    this->id = id;
    this->modele = modele;
    this->immatriculation = immatriculation;
    this->dateAssurance = dateAssurance;
    this->kilometrage = kilometrage;
    this->etat = etat;
}

// AJOUTER
bool Vehicule::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO vehicule (id, modele, immatriculation, date_assurance, kilometrage, etat) "
                  "VALUES (:id, :modele, :immatriculation, :date_assurance, :kilometrage, :etat)");

    query.bindValue(":id", id);
    query.bindValue(":modele", modele);
    query.bindValue(":immatriculation", immatriculation);
    query.bindValue(":date_assurance", dateAssurance);
    query.bindValue(":kilometrage", kilometrage);
    query.bindValue(":etat", etat);

    if(query.exec()) {
        qDebug() << "Véhicule ajouté avec succès à la base de données";
        return true;
    } else {
        qDebug() << "Erreur lors de l'ajout du véhicule:" << query.lastError().text();
        return false;
    }
}

// AFFICHER
QSqlQueryModel* Vehicule::afficher()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query("SELECT * FROM vehicule");

    if(query.exec()) {
        model->setQuery(std::move(query));
        model->setHeaderData(0, Qt::Horizontal, "ID");
        model->setHeaderData(1, Qt::Horizontal, "Modèle");
        model->setHeaderData(2, Qt::Horizontal, "Immatriculation");
        model->setHeaderData(3, Qt::Horizontal, "Date assurance");
        model->setHeaderData(4, Qt::Horizontal, "Kilométrage");
        model->setHeaderData(5, Qt::Horizontal, "État");
        qDebug() << "Données chargées depuis la base de données";
    } else {
        qDebug() << "Erreur lors du chargement des données:" << query.lastError().text();
    }

    return model;
}

// SUPPRIMER
bool Vehicule::supprimer(int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM vehicule WHERE id = :id");
    query.bindValue(":id", id);

    if(query.exec()) {
        qDebug() << "Véhicule supprimé avec succès, ID:" << id;
        return true;
    } else {
        qDebug() << "Erreur lors de la suppression du véhicule:" << query.lastError().text();
        return false;
    }
}

// RECHERCHER PAR MODELE
QSqlQueryModel* Vehicule::rechercherParModele(QString modele)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;

    query.prepare("SELECT * FROM vehicule WHERE modele LIKE :modele");
    query.bindValue(":modele", "%" + modele + "%");

    if(query.exec()) {
        model->setQuery(std::move(query));
        model->setHeaderData(0, Qt::Horizontal, "ID");
        model->setHeaderData(1, Qt::Horizontal, "Modèle");
        model->setHeaderData(2, Qt::Horizontal, "Immatriculation");
        model->setHeaderData(3, Qt::Horizontal, "Date assurance");
        model->setHeaderData(4, Qt::Horizontal, "Kilométrage");
        model->setHeaderData(5, Qt::Horizontal, "État");
        qDebug() << "Recherche effectuée pour le modèle:" << modele;
    } else {
        qDebug() << "Erreur lors de la recherche:" << query.lastError().text();
    }

    return model;
}
