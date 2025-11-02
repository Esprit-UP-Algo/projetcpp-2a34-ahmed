#ifndef APPRENANT_H
#define APPRENANT_H
#include "connection.h"

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QString>

class Apprenant {
    QString nom, email, prenom, mdp;
    int cin, telephone;

public:

    Apprenant() {}

    Apprenant(QString n, QString p, int t, QString e, QString m, int cinValue);

    // Getters
    QString getNom() { return nom; }
    QString getPrenom() { return prenom; }
    QString getEmail() { return email; }
    QString getMdp() { return mdp; }
    int getCin() { return cin; }
    int getTelephone() { return telephone; }

    // Setters
    void setNom(QString n) { nom = n; }
    void setPrenom(QString p) { prenom = p; }
    void setMdp(QString m) { mdp = m; }
    void setTelephone(int t) { telephone = t; }
    void setEmail(QString e) { email = e; }
    void setCin(int cinValue) { this->cin = cinValue; }  // ✅ FIXED
    void setConnection(Connection* conn);

    // Database interaction methods
    bool ajouter();
    bool modifier();
    bool supprimer(int);
    QSqlQueryModel* afficher();
    QSqlQueryModel* afficher(QString &sortColumn);
    QSqlQueryModel* rechercheById(int id);
    QSqlQueryModel* tri();

private:
    Connection* connection = nullptr;
};

#endif // APPRENANT_H
