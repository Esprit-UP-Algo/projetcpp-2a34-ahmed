#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>
#include <QList>
#include <QDate>
#include <QMap>
#include <QSettings>

class Employee {
private:
    QString cin;
    QString nom;
    QString prenom;
    QString telephone;
    QString disponibilite;
    QString email;  // Added to match implementation
    QString role;   // Added to match implementation

public:
    // Constructors
    Employee();
    Employee(QString p_cin, QString p_nom, QString p_prenom, 
             QString p_telephone, QString p_disponibilite);

    // Getters
    QString getCin() const { return cin; }
    QString getNom() const { return nom; }
    QString getPrenom() const { return prenom; }
    QString getTelephone() const { return telephone; }
    QString getDisponibilite() const { return disponibilite; }
    QString getEmail() const { return email; }
    QString getRole() const { return role; }

    // Setters
    void setCin(const QString &newCin) { cin = newCin; }
    void setNom(const QString &newNom) { nom = newNom; }
    void setPrenom(const QString &newPrenom) { prenom = newPrenom; }
    void setTelephone(const QString &newTelephone) { telephone = newTelephone; }
    void setDisponibilite(const QString &newDisponibilite) { disponibilite = newDisponibilite; }
    void setEmail(const QString &newEmail) { email = newEmail; }
    void setRole(const QString &newRole) { role = newRole; }

    // CRUD Operations
    bool ajouter();
    bool modifier();
    bool supprimer();
    static QList<Employee> chargerTousLesEmployees();
    static Employee chargerParCin(const QString& cin);
    bool employeeExists(const QString& p_cin);

    // Sorting methods
    static QList<Employee> trierParDisponibilite(bool ascending = true);
    static QList<Employee> trierParTelephone(bool ascending = true);

    // Voice synthesis
    static void initialiserSyntheseVocale();
    static void lireMessage(const QString &message);

    // Calendar methods
    static bool sauvegarderDisponibiliteCalendrier(const QString& employeeId,
                                                 const QDate& date,
                                                 const QString& timeSlot,
                                                 bool disponible);
    static QMap<QString, bool> chargerDisponibilitesDate(const QDate& date);
    static QList<QString> getCreneauxHoraires();

    // Statistics methods
    static QMap<QString, int> getStatistiquesDisponibilite();
    static QList<QPair<QString, int>> getTopEmployeesParStatut(const QString& statut, int limit = 5);
    static double getTauxDisponibiliteMoyen();

    // Export functionality
    static void exporterStatistiquesPdf(const QString &fileName, const QList<Employee> &employees);
};

#endif // EMPLOYEE_H
