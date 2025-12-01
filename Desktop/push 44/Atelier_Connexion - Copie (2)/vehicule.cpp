#include "vehicule.h"
#include <QRegularExpression>
#include <QDate>

Vehicule::Vehicule()
    : kilometrage(0), temperature(0)
{
}

Vehicule::Vehicule(const QString& immatriculation, const QString& modele, int kilometrage,
                   const QDate& dateAssurance, const QString& etat, int temperature)
    : immatriculation(immatriculation),
    modele(modele),
    kilometrage(kilometrage),
    dateAssurance(dateAssurance),
    etat(etat),
    temperature(temperature)
{
}

// Getters
QString Vehicule::getImmatriculation() const {
    return immatriculation;
}

QString Vehicule::getModele() const {
    return modele;
}

int Vehicule::getKilometrage() const {
    return kilometrage;
}

QDate Vehicule::getDateAssurance() const {
    return dateAssurance;
}

QString Vehicule::getEtat() const {
    return etat;
}

int Vehicule::getTemperature() const {
    return temperature;
}

// Setters
void Vehicule::setImmatriculation(const QString& immatriculation) {
    this->immatriculation = immatriculation;
}

void Vehicule::setModele(const QString& modele) {
    this->modele = modele;
}

void Vehicule::setKilometrage(int kilometrage) {
    this->kilometrage = kilometrage;
}

void Vehicule::setDateAssurance(const QDate& dateAssurance) {
    this->dateAssurance = dateAssurance;
}

void Vehicule::setEtat(const QString& etat) {
    this->etat = etat;
}

void Vehicule::setTemperature(int temperature) {
    this->temperature = temperature;
}

// Méthodes utilitaires
bool Vehicule::estValide() const {
    return validerImmatriculation(immatriculation) &&
           validerModele(modele) &&
           validerKilometrage(kilometrage);
}

int Vehicule::joursRestantsAssurance() const {
    if (!dateAssurance.isValid()) {
        return -1;
    }
    QDate aujourdhui = QDate::currentDate();
    return aujourdhui.daysTo(dateAssurance);
}

QString Vehicule::getStatutAssurance() const {
    int joursRestants = joursRestantsAssurance();

    if (joursRestants < 0) {
        return "EXPIRÉE";
    } else if (joursRestants <= 7) {
        return "URGENT";
    } else if (joursRestants <= 30) {
        return "ATTENTION";
    } else {
        return "NORMAL";
    }
}

bool Vehicule::assuranceExpiree() const {
    return joursRestantsAssurance() < 0;
}

bool Vehicule::assuranceExpireBientot() const {
    int joursRestants = joursRestantsAssurance();
    return joursRestants >= 0 && joursRestants <= 30;
}

// Méthodes statiques
bool Vehicule::validerImmatriculation(const QString& immatriculation) {
    QRegularExpression regex("^[A-Z]{2}-\\d{3}-[A-Z]{2}$|^\\d{3,4}-[A-Z]{2}-\\d{3,4}$");
    return regex.match(immatriculation).hasMatch();
}

bool Vehicule::validerModele(const QString& modele) {
    QRegularExpression regex("^[a-zA-Z0-9\\s\\-]{1,20}$");
    return regex.match(modele).hasMatch() && !modele.isEmpty();
}

bool Vehicule::validerKilometrage(int kilometrage) {
    return kilometrage >= 0 && kilometrage <= 9999999;
}
