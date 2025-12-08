#ifndef APPRENANT_H
#define APPRENANT_H

#include <QString>
#include <QList>

class Apprenant {
private:
    QString nom;
    QString prenom;
    QString email;
    QString mdp;
    QString telephone;
    int cin;
    static QString last_error;

public:
    Apprenant();
    Apprenant(const QString& p_nom,
              const QString& p_prenom,
              const QString& p_email,
              const QString& p_mdp,
              const QString& p_telephone,
              int p_cin);

    QString getNom() const;
    QString getPrenom() const;
    QString getEmail() const;
    QString getMdp() const;
    QString getTelephone() const;
    int getCin() const;

    void setNom(const QString& v);
    void setPrenom(const QString& v);
    void setEmail(const QString& v);
    void setMdp(const QString& v);
    void setTelephone(const QString& v);
    void setCin(int v);

    bool ajouter() const;
    bool modifier() const;
    bool modifierDepuisCle(int ancienCin) const;
    bool supprimer() const;

    static QList<Apprenant> chargerTous();
    static Apprenant chargerParCin(int p_cin);
    static bool existe(int p_cin);
    static QString getLastError();
};

using apprenant = Apprenant;

#endif
