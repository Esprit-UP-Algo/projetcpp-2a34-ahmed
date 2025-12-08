#include "apprenant.h"
#include "connection.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>

Apprenant::Apprenant() : cin(0) {}

Apprenant::Apprenant(const QString& p_nom,
                     const QString& p_prenom,
                     const QString& p_email,
                     const QString& p_mdp,
                     const QString& p_telephone,
                     int p_cin)
    : nom(p_nom), prenom(p_prenom), email(p_email), mdp(p_mdp), telephone(p_telephone), cin(p_cin) {}

QString Apprenant::getNom() const { return nom; }
QString Apprenant::getPrenom() const { return prenom; }
QString Apprenant::getEmail() const { return email; }
QString Apprenant::getMdp() const { return mdp; }
QString Apprenant::getTelephone() const { return telephone; }
int Apprenant::getCin() const { return cin; }

void Apprenant::setNom(const QString& v) { nom = v; }
void Apprenant::setPrenom(const QString& v) { prenom = v; }
void Apprenant::setEmail(const QString& v) { email = v; }
void Apprenant::setMdp(const QString& v) { mdp = v; }
void Apprenant::setTelephone(const QString& v) { telephone = v; }
void Apprenant::setCin(int v) { cin = v; }

QString Apprenant::last_error;

bool Apprenant::ajouter() const
{
    QSqlDatabase db = Connection::instance()->getDatabase();
    QSqlQuery q(db);
    
    // Check if CIN already exists
    if (existe(cin)) {
        last_error = QString("Un apprenant avec le CIN %1 existe déjà").arg(cin);
        return false;
    }
    
    q.prepare("INSERT INTO APPRENANT (NOM, PRENOM, EMAIL, MDP, TELEPHONE, CIN) "
              "VALUES (:nom, :prenom, :email, :mdp, :telephone, :cin)");
    q.bindValue(":nom", nom);
    q.bindValue(":prenom", prenom);
    q.bindValue(":email", email);
    q.bindValue(":mdp", mdp);
    q.bindValue(":telephone", telephone);
    q.bindValue(":cin", cin);
    
    bool ok = q.exec();
    if (!ok) {
        last_error = q.lastError().text();
    }
    return ok;
}

bool Apprenant::modifier() const
{
    QSqlDatabase db = Connection::instance()->getDatabase();
    QSqlQuery q(db);
    q.prepare("UPDATE APPRENANT SET PRENOM = :prenom, EMAIL = :email, MDP = :mdp, TELEPHONE = :telephone, CIN = :cin WHERE NOM = :nom");
    q.bindValue(":prenom", prenom);
    q.bindValue(":email", email);
    q.bindValue(":mdp", mdp);
    q.bindValue(":telephone", telephone);
    q.bindValue(":cin", cin);
    q.bindValue(":nom", nom);
    bool ok = q.exec();
    if (!ok) {
        last_error = q.lastError().text();
    }
    return ok;
}

bool Apprenant::modifierDepuisCle(int ancienCin) const
{
    QSqlDatabase db = Connection::instance()->getDatabase();
    QSqlQuery q(db);
    
    // First check if the new CIN already exists (if it's being changed)
    if (cin != ancienCin && existe(cin)) {
        last_error = QString("Un apprenant avec le CIN %1 existe déjà").arg(cin);
        return false;
    }
    
    q.prepare("UPDATE APPRENANT SET NOM = :nom, PRENOM = :prenom, EMAIL = :email, "
              "MDP = :mdp, TELEPHONE = :telephone, CIN = :newCin WHERE CIN = :oldCin");
    q.bindValue(":nom", nom);
    q.bindValue(":prenom", prenom);
    q.bindValue(":email", email);
    q.bindValue(":mdp", mdp);
    q.bindValue(":telephone", telephone);
    q.bindValue(":cin", cin);
    bool ok = q.exec();
    if (!ok) {
        last_error = q.lastError().text();
    }
    return ok;
}

bool Apprenant::supprimer() const
{
    QSqlDatabase db = Connection::instance()->getDatabase();
    QSqlQuery q(db);
    if (cin > 0) {
        q.prepare("DELETE FROM APPRENANT WHERE CIN = :cin");
        q.bindValue(":cin", cin);
        return q.exec();
    } else if (!nom.isEmpty()) {
        q.prepare("DELETE FROM APPRENANT WHERE NOM = :nom");
        q.bindValue(":nom", nom);
        return q.exec();
    }
    last_error = QString();
    return false;
}

QList<Apprenant> Apprenant::chargerTous()
{
    QList<Apprenant> list;
    QSqlDatabase db = Connection::instance()->getDatabase();
    QSqlQuery q(db);
    if (q.exec("SELECT NOM, PRENOM, EMAIL, MDP, TELEPHONE, CIN FROM APPRENANT ORDER BY NOM")) {
        while (q.next()) {
            list.append(Apprenant(q.value(0).toString(),
                                  q.value(1).toString(),
                                  q.value(2).toString(),
                                  q.value(3).toString(),
                                  q.value(4).toString(),
                                  q.value(5).toInt()));
        }
    }
    return list;
}

Apprenant Apprenant::chargerParCin(int p_cin)
{
    QSqlDatabase db = Connection::instance()->getDatabase();
    QSqlQuery q(db);
    q.prepare("SELECT NOM, PRENOM, EMAIL, MDP, TELEPHONE, CIN FROM APPRENANT WHERE CIN = :cin");
    q.bindValue(":cin", p_cin);
    if (q.exec() && q.next()) {
        return Apprenant(q.value(0).toString(), q.value(1).toString(), q.value(2).toString(),
                        q.value(3).toString(), q.value(4).toString(), q.value(5).toInt());
    }
    return Apprenant();
}

bool Apprenant::existe(int p_cin)
{
    QSqlDatabase db = Connection::instance()->getDatabase();
    QSqlQuery q(db);
    q.prepare("SELECT 1 FROM APPRENANT WHERE CIN = :cin");
    q.bindValue(":cin", p_cin);
    return q.exec() && q.next();
}

QString Apprenant::getLastError()
{
    return last_error;
}
