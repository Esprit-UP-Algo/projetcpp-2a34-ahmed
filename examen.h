#ifndef EXAMEN_H
#define EXAMEN_H

#include <QString>
#include <QDate>
#include <QList>
#include <QMap>

class Examen {
private:
    int id;
    QString nomApprenant;
    QString typeExamen;
    QDate dateExamen;
    QString num;
    int nbUtilisations;

public:
    // ==================== CONSTRUCTEURS ====================
    Examen();
    Examen(QString nomApprenant, QString typeExamen, QDate dateExamen, QString num);
    Examen(int id, QString nomApprenant, QString typeExamen, QDate dateExamen, QString num, int nbUtilisations = 1);

    // ==================== GETTERS ====================
    int getId() const { return id; }
    QString getNomApprenant() const { return nomApprenant; }
    QString getTypeExamen() const { return typeExamen; }
    QDate getDateExamen() const { return dateExamen; }
    QString getNum() const { return num; }
    int getNbUtilisations() const { return nbUtilisations; }

    // ==================== SETTERS ====================
    void setId(int newId) { id = newId; }
    void setNomApprenant(QString newNom) { nomApprenant = newNom; }
    void setTypeExamen(QString newType) { typeExamen = newType; }
    void setDateExamen(QDate newDate) { dateExamen = newDate; }
    void setNum(QString newNum) { num = newNum; }
    void setNbUtilisations(int nb) { nbUtilisations = nb; }

    // ==================== VALIDATION ====================
    static bool validerNum(const QString& num);
    static bool validerTypeExamen(const QString& type);
    static bool validerDate(const QDate& date);
    static bool numeroExisteDeja(const QString& num, int idExclu = -1);

    // ==================== CRUD - OPÉRATIONS BASE DE DONNÉES ====================
    bool ajouter();
    bool modifier();
    bool supprimer();
    static QList<Examen> chargerTousLesExamens();
    static Examen chargerParId(int id);
    static Examen chargerParNum(const QString& num);

    // ==================== GESTION NUMÉROS ====================
    static int getNbUtilisationsNumero(const QString& num);
    static void mettreAJourNbUtilisations();

    // ==================== STATISTIQUES ====================
    static QList<Examen> getClientPlusExamens();
    static QMap<QString, int> getStatsParType();
    static QMap<QString, int> getStatsParDate();
    static Examen getExamenLePlusProche();
};

#endif // EXAMEN_H
