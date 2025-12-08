#include "connection.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>

// Initialisation du pointeur static
Connection* Connection::instancePtr = nullptr;

Connection::Connection() {}

Connection* Connection::instance()
{
    if (!instancePtr) {
        instancePtr = new Connection();
    }
    return instancePtr;
}

Connection::~Connection()
{
    if (instancePtr) {
        delete instancePtr;
        instancePtr = nullptr;
    }
}

bool Connection::connect()
{
    bool test = false;

    // Initialiser la connexion ODBC
    db = QSqlDatabase::addDatabase("QODBC");

    // Nom de la Data Source Name (DSN) EXACTEMENT comme dans ODBC
    db.setDatabaseName("projet");

    // Identifiants Oracle
    db.setUserName("tarek");
    db.setPassword("tarek0000");

    if (db.open()) {
        test = true;
        qDebug() << "✅ Connexion réussie à la base Oracle.";

        QSqlQuery query(db);

        // Table EMPLOYEES (inchangée)
        QString createTable =
            "CREATE TABLE EMPLOYEES ("
            "CIN VARCHAR2(20) PRIMARY KEY, "
            "NOM VARCHAR2(50), "
            "PRENOM VARCHAR2(50), "
            "TELEPHONE VARCHAR2(20), "
            "DISPONIBILITE VARCHAR2(20))";

        if (!query.exec(createTable)) {
            // Si la table existe déjà, c'est normal - on ignore l'erreur
            if (query.lastError().text().contains("already exists", Qt::CaseInsensitive) ||
                query.lastError().text().contains("existe déjà", Qt::CaseInsensitive)) {
                qDebug() << "ℹ️ Table EMPLOYEES existe déjà";
            } else {
                qDebug() << "⚠️ Erreur création table EMPLOYEES:" << query.lastError().text();
            }
        } else {
            qDebug() << "✅ Table EMPLOYEES créée avec succès";
        }

        // Table EXAMEN (corrigée selon votre structure)
        QString createExamenTable =
            "CREATE TABLE EXAMEN ("
            "ID NUMBER PRIMARY KEY, "
            "NOMAPPRENANT VARCHAR2(100) NOT NULL, "
            "TYPEEXAMEN VARCHAR2(50) NOT NULL, "
            "DATEEXAMEN DATE NOT NULL, "
            "NUM VARCHAR2(20) NOT NULL, "
            "NB_UTILISATION NUMBER DEFAULT 1)";

        if (!query.exec(createExamenTable)) {
            // Si la table existe déjà, c'est normal - on ignore l'erreur
            if (query.lastError().text().contains("already exists", Qt::CaseInsensitive) ||
                query.lastError().text().contains("existe déjà", Qt::CaseInsensitive) ||
                query.lastError().text().contains("name is already used", Qt::CaseInsensitive)) {
                qDebug() << "ℹ️ Table EXAMEN existe déjà";
            } else {
                qDebug() << "⚠️ Erreur création table EXAMEN:" << query.lastError().text();
            }
        } else {
            qDebug() << "✅ Table EXAMEN créée avec succès";
        }

        QString createExamenSeq = "CREATE SEQUENCE examen_seq START WITH 1 INCREMENT BY 1 NOCACHE";
        if (!query.exec(createExamenSeq)) {
            if (query.lastError().text().contains("already exists", Qt::CaseInsensitive) ||
                query.lastError().text().contains("name is already used", Qt::CaseInsensitive) ||
                query.lastError().text().contains("ORA-00955")) {
                qDebug() << "ℹ️ Séquence EXAMEN_SEQ existe déjà";
            } else {
                qDebug() << "⚠️ Erreur création séquence EXAMEN_SEQ:" << query.lastError().text();
            }
        } else {
            qDebug() << "✅ Séquence EXAMEN_SEQ créée avec succès";
        }

        QString createExamenTrigger =
            "CREATE OR REPLACE TRIGGER examen_id_trigger "
            "BEFORE INSERT ON EXAMEN FOR EACH ROW "
            "BEGIN "
            "  IF :NEW.ID IS NULL THEN "
            "    SELECT examen_seq.NEXTVAL INTO :NEW.ID FROM dual; "
            "  END IF; "
            "END;";

        if (!query.exec(createExamenTrigger)) {
            qDebug() << "⚠️ Erreur création trigger EXAMEN_ID_TRIGGER:" << query.lastError().text();
        } else {
            qDebug() << "✅ Trigger EXAMEN_ID_TRIGGER créé avec succès";
        }

        QString createApprenantTable =
            "CREATE TABLE APPRENANT ("
            "NOM VARCHAR2(50) NOT NULL, "
            "PRENOM VARCHAR2(50), "
            "EMAIL VARCHAR2(50), "
            "MDP VARCHAR2(50), "
            "TELEPHONE VARCHAR2(50), "
            "CIN NUMBER PRIMARY KEY, "
            "CONSTRAINT uk_apprenant_nom UNIQUE (NOM))";
        if (!query.exec(createApprenantTable)) {
            if (query.lastError().text().contains("already exists", Qt::CaseInsensitive) ||
                query.lastError().text().contains("existe déjà", Qt::CaseInsensitive) ||
                query.lastError().text().contains("name is already used", Qt::CaseInsensitive)) {
                qDebug() << "ℹ️ Table APPRENANT existe déjà";
            } else {
                qDebug() << "⚠️ Erreur création table APPRENANT:" << query.lastError().text();
            }
        } else {
            qDebug() << "✅ Table APPRENANT créée avec succès";
        }

        {
            QSqlQuery qlen(db);
            auto ensureLen = [&](const QString &col){
                qlen.prepare("SELECT DATA_LENGTH FROM USER_TAB_COLUMNS WHERE TABLE_NAME='APPRENANT' AND COLUMN_NAME=:c");
                qlen.bindValue(":c", col);
                if (qlen.exec() && qlen.next()) {
                    int len = qlen.value(0).toInt();
                    if (len < 50) {
                        QSqlQuery alter(db);
                        alter.exec("ALTER TABLE APPRENANT MODIFY " + col + " VARCHAR2(50)");
                    }
                }
            };
            ensureLen("NOM");
            ensureLen("PRENOM");
            ensureLen("EMAIL");
            ensureLen("MDP");
            ensureLen("TELEPHONE");
        }

        QString createVehiculeTable =
            "CREATE TABLE VEHICULE ("
            "IMMATRICULATION VARCHAR2(20) PRIMARY KEY, "
            "MODELE_DU_VEHICULE VARCHAR2(20), "
            "KILOMETRAGE NUMBER, "
            "DATE_ASSURANCE DATE, "
            "ETAT VARCHAR2(20), "
            "TEMPERATURE NUMBER)";
        if (!query.exec(createVehiculeTable)) {
            if (query.lastError().text().contains("already exists", Qt::CaseInsensitive) ||
                query.lastError().text().contains("existe déjà", Qt::CaseInsensitive) ||
                query.lastError().text().contains("name is already used", Qt::CaseInsensitive)) {
                qDebug() << "ℹ️ Table VEHICULE existe déjà";
            } else {
                qDebug() << "⚠️ Erreur création table VEHICULE:" << query.lastError().text();
            }
        } else {
            qDebug() << "✅ Table VEHICULE créée avec succès";
        }

        {
            QSqlQuery qc(db);
            auto exists = [&](const QString &col){
                qc.prepare("SELECT COUNT(*) FROM USER_TAB_COLUMNS WHERE TABLE_NAME='VEHICULE' AND COLUMN_NAME=:c");
                qc.bindValue(":c", col);
                return qc.exec() && qc.next() && qc.value(0).toInt() > 0;
            };
            if (exists("KILOMÉTRAGE") && !exists("KILOMETRAGE")) {
                QSqlQuery alter(db);
                alter.exec("ALTER TABLE VEHICULE RENAME COLUMN \"KILOMÉTRAGE\" TO \"KILOMETRAGE\"");
            }
            if (exists("MODELE_DU_VEHICLE") && !exists("MODELE_DU_VEHICULE")) {
                QSqlQuery alter2(db);
                alter2.exec("ALTER TABLE VEHICULE RENAME COLUMN \"MODELE_DU_VEHICLE\" TO \"MODELE_DU_VEHICULE\"");
            }
        }

    } else {
        qDebug() << "❌ Erreur connexion :" << db.lastError().text();
    }

    return test;
}

QSqlDatabase& Connection::getDatabase()
{
    return db;
}

void Connection::close()
{
    if (db.isOpen()) {
        db.close();
    }
}
