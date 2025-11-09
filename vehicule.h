#ifndef VEHICULE_H
#define VEHICULE_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Vehicule
{
private:
    QString matricule;
    QString modele;
    QString date_assurance;
    QString etat;
    int kilometrage;

public:
    Vehicule() {}
    Vehicule(QString matricule, QString modele, int kilometrage, QString date_assurance, QString etat)
        : matricule(matricule), modele(modele), kilometrage(kilometrage),
        date_assurance(date_assurance), etat(etat) {}

    QString getMatricule() { return matricule; }
    QString getModele() { return modele; }
    int getKilometrage() { return kilometrage; }
    QString getDateAssurance() { return date_assurance; }
    QString getEtat() { return etat; }

    void setMatricule(QString m) { matricule = m; }
    void setModele(QString m) { modele = m; }
    void setKilometrage(int k) { kilometrage = k; }
    void setDateAssurance(QString d) { date_assurance = d; }
    void setEtat(QString e) { etat = e; }

    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(QString matricule);
    bool modifier();
};

#endif // VEHICULE_H
