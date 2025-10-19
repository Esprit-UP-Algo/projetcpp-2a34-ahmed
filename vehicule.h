#ifndef VEHICULE_H
#define VEHICULE_H

#include <QString>
#include <QSqlQueryModel>

class Vehicule
{
private:
    int id;
    QString modele;
    QString immatriculation;
    QString dateAssurance;
    QString kilometrage;
    QString etat;

public:
    // CONSTRUCTEUR - doit correspondre EXACTEMENT au .cpp
    Vehicule(int id = 0, QString modele = "", QString immatriculation = "", QString dateAssurance = "", QString kilometrage = "", QString etat = "");

    // MÉTHODES
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int id);
    QSqlQueryModel* rechercherParModele(QString modele);
};

#endif // VEHICULE_H
