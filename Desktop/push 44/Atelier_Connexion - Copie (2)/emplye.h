#ifndef EMPLYE_H
#define EMPLYE_H
#include <QString>

class emplye
{
private:
    QString cin;
    QString nom;
    QString prenom;
    QString disponibilite;
    QString telephone;

public:
    emplye();
    emplye(QString, QString, QString, QString, QString);
    bool ajouter();
    bool supprimer(QString cin);
    QString getCin() { return cin; }
    QString getNom() { return nom; }
    QString getPrenom() { return prenom; }
    QString getDisponibilite() { return disponibilite; }
    QString getTelephone() { return telephone; }
};

#endif // EMPLYE_H
