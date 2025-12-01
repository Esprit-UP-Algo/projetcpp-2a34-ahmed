#ifndef VEHICULE_H
#define VEHICULE_H

#include <QString>
#include <QDate>

class Vehicule
{
public:
    // Constructeurs
    Vehicule();
    Vehicule(const QString& immatriculation, const QString& modele, int kilometrage,
             const QDate& dateAssurance, const QString& etat, int temperature = 0);

    // Getters
    QString getImmatriculation() const;
    QString getModele() const;
    int getKilometrage() const;
    QDate getDateAssurance() const;
    QString getEtat() const;
    int getTemperature() const;

    // Setters
    void setImmatriculation(const QString& immatriculation);
    void setModele(const QString& modele);
    void setKilometrage(int kilometrage);
    void setDateAssurance(const QDate& dateAssurance);
    void setEtat(const QString& etat);
    void setTemperature(int temperature);

    // Méthodes utilitaires
    bool estValide() const;
    int joursRestantsAssurance() const;
    QString getStatutAssurance() const;
    bool assuranceExpiree() const;
    bool assuranceExpireBientot() const;

    // Méthodes statiques
    static bool validerImmatriculation(const QString& immatriculation);
    static bool validerModele(const QString& modele);
    static bool validerKilometrage(int kilometrage);

private:
    QString immatriculation;
    QString modele;
    int kilometrage;
    QDate dateAssurance;
    QString etat;
    int temperature;
};

#endif // VEHICULE_H
