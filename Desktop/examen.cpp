#include "examen.h"
#include <QRegularExpression>
#include <QDate>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

// ==================== CONSTRUCTEURS ====================
Examen::Examen()
    : id(-1), nomApprenant(""), typeExamen(""), dateExamen(QDate()), num(""), nbUtilisations(1)
{}

Examen::Examen(QString nomApprenant, QString typeExamen, QDate dateExamen, QString num)
    : id(-1), nomApprenant(nomApprenant), typeExamen(typeExamen),
    dateExamen(dateExamen), num(num), nbUtilisations(1)
{}

Examen::Examen(int id, QString nomApprenant, QString typeExamen, QDate dateExamen, QString num, int nbUtilisations)
    : id(id), nomApprenant(nomApprenant), typeExamen(typeExamen),
    dateExamen(dateExamen), num(num), nbUtilisations(nbUtilisations)
{}

// ==================== MÉTHODES DE VALIDATION ====================
bool Examen::validerNum(const QString& num) {
    static const QRegularExpression regex("^[259]\\d{7}$");
    return regex.match(num.trimmed()).hasMatch();
}

bool Examen::validerTypeExamen(const QString& type) {
    QString typeLower = type.toLower();
    return (typeLower == "théorique" || typeLower == "pratique" || typeLower == "theorique");
}

bool Examen::validerDate(const QDate& date) {
    return date.isValid() && date >= QDate::currentDate();
}

bool Examen::numeroExisteDeja(const QString& num, int idExclu) {
    QSqlQuery query;

    if (idExclu == -1) {
        query.prepare("SELECT COUNT(*) FROM EXAMEN WHERE num = :num");
        query.bindValue(":num", num);
    } else {
        query.prepare("SELECT COUNT(*) FROM EXAMEN WHERE num = :num AND id != :id");
        query.bindValue(":num", num);
        query.bindValue(":id", idExclu);
    }

    if (query.exec() && query.next()) {
        return query.value(0).toInt() > 0;
    }
    return false;
}

// ==================== GESTION NUMÉROS ====================
int Examen::getNbUtilisationsNumero(const QString& num) {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM EXAMEN WHERE num = :num");
    query.bindValue(":num", num);

    if (query.exec() && query.next()) {
        return query.value(0).toInt();
    }
    return 0;
}

void Examen::mettreAJourNbUtilisations() {
    QSqlQuery query;
    query.prepare("UPDATE EXAMEN e1 SET nb_utilisation = (SELECT COUNT(*) FROM EXAMEN e2 WHERE e2.num = e1.num)");

    if (query.exec()) {
        qDebug() << "✅ Mise à jour des nombres d'utilisations effectuée";
    } else {
        qDebug() << "❌ Erreur mise à jour:" << query.lastError().text();
    }
}

// ==================== CRUD - OPÉRATIONS BASE DE DONNÉES ====================
bool Examen::ajouter() {
    // Validation
    if (!validerNum(num) || !validerTypeExamen(typeExamen) || !validerDate(dateExamen)) {
        return false;
    }

    QSqlQuery query;
    int nbUtilisationsActuel = getNbUtilisationsNumero(num);

    // The ID will be automatically populated by the trigger
    QString requeteOracle = "INSERT INTO EXAMEN (nomApprenant, typeExamen, dateExamen, num, nb_utilisation) "
                          "VALUES (:nomApprenant, :typeExamen, TO_DATE(:dateExamen, 'DD/MM/YYYY'), :num, :nb_utilisations)";

    query.prepare(requeteOracle);
    query.bindValue(":nomApprenant", nomApprenant);
    query.bindValue(":typeExamen", typeExamen);
    
    query.bindValue(":dateExamen", dateExamen.toString("dd/MM/yyyy"));
    query.bindValue(":num", num);
    query.bindValue(":nb_utilisations", 1);

    if (query.exec()) {
        // Get the last inserted ID using the sequence
        QSqlQuery idQuery("SELECT examen_seq.CURRVAL FROM DUAL");
        if (idQuery.next()) {
            id = idQuery.value(0).toInt();
        }
        return true;
    }
    return false;
}

bool Examen::modifier() {
    if (id == -1) return false;

    // Validation
    if (!validerNum(num) || !validerTypeExamen(typeExamen) || !validerDate(dateExamen)) {
        return false;
    }

    QSqlQuery query;
    QString requeteOracle = "UPDATE EXAMEN SET "
                          "nomApprenant = :nomApprenant, "
                          "typeExamen = :typeExamen, "
                          "dateExamen = TO_DATE(:dateExamen, 'DD/MM/YYYY'), "
                          "num = :num, "
                          "nb_utilisation = :nb_utilisations "
                          "WHERE id = :id";

    query.prepare(requeteOracle);
    query.bindValue(":id", id);
    query.bindValue(":nomApprenant", nomApprenant);
    query.bindValue(":typeExamen", typeExamen);
    query.bindValue(":dateExamen", dateExamen.toString("dd/MM/yyyy"));
    query.bindValue(":num", num);
    query.bindValue(":nb_utilisations", nbUtilisations);

    return query.exec();
}

bool Examen::supprimer() {
    if (id == -1) return false;

    QSqlQuery query;
    query.prepare("DELETE FROM EXAMEN WHERE id = :id");
    query.bindValue(":id", id);

    return query.exec();
}

// ==================== CHARGEMENT DONNÉES ====================
Examen Examen::chargerParId(int id) {
    QSqlQuery query;
    query.prepare("SELECT * FROM EXAMEN WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec() && query.next()) {
        return Examen(
            query.value("id").toInt(),
            query.value("nomApprenant").toString(),
            query.value("typeExamen").toString(),
            query.value("dateExamen").toDate(),
            query.value("num").toString(),
            query.value("nb_utilisation").toInt()
            );
    }
    return Examen();
}

Examen Examen::chargerParNum(const QString& num) {
    QSqlQuery query;
    query.prepare("SELECT * FROM EXAMEN WHERE num = :num");
    query.bindValue(":num", num);

    if (query.exec() && query.next()) {
        return Examen(
            query.value("id").toInt(),
            query.value("nomApprenant").toString(),
            query.value("typeExamen").toString(),
            query.value("dateExamen").toDate(),
            query.value("num").toString(),
            query.value("nb_utilisation").toInt()
            );
    }
    return Examen();
}

QList<Examen> Examen::chargerTousLesExamens() {
    QList<Examen> examens;
    QSqlQuery query("SELECT * FROM EXAMEN ORDER BY id");

    while (query.next()) {
        examens.append(Examen(
            query.value("id").toInt(),
            query.value("nomApprenant").toString(),
            query.value("typeExamen").toString(),
            query.value("dateExamen").toDate(),
            query.value("num").toString(),
            query.value("nb_utilisation").toInt()
            ));
    }
    return examens;
}

// ==================== STATISTIQUES ====================
QList<Examen> Examen::getClientPlusExamens() {
    QList<Examen> resultats;
    QSqlQuery query;

    query.prepare("SELECT nomApprenant, COUNT(*) as nb_examens "
                  "FROM EXAMEN GROUP BY nomApprenant ORDER BY nb_examens DESC");

    if (query.exec() && query.next()) {
        QString clientTop = query.value("nomApprenant").toString();

        QSqlQuery queryExamens;
        queryExamens.prepare("SELECT * FROM EXAMEN WHERE nomApprenant = :nomApprenant ORDER BY dateExamen DESC");
        queryExamens.bindValue(":nomApprenant", clientTop);

        if (queryExamens.exec()) {
            while (queryExamens.next()) {
                resultats.append(Examen(
                    queryExamens.value("id").toInt(),
                    queryExamens.value("nomApprenant").toString(),
                    queryExamens.value("typeExamen").toString(),
                    queryExamens.value("dateExamen").toDate(),
                    queryExamens.value("num").toString(),
                    queryExamens.value("nb_utilisations").toInt()
                    ));
            }
        }
    }
    return resultats;
}

QMap<QString, int> Examen::getStatsParType() {
    QMap<QString, int> stats;
    QSqlQuery query("SELECT typeExamen, COUNT(*) as count FROM EXAMEN GROUP BY typeExamen");

    while (query.next()) {
        stats[query.value("typeExamen").toString()] = query.value("count").toInt();
    }
    return stats;
}

QMap<QString, int> Examen::getStatsParDate() {
    QMap<QString, int> stats;
    QSqlQuery query("SELECT TO_CHAR(dateExamen, 'YYYY-MM') as mois, COUNT(*) as count FROM EXAMEN GROUP BY TO_CHAR(dateExamen, 'YYYY-MM') ORDER BY mois");

    while (query.next()) {
        stats[query.value("mois").toString()] = query.value("count").toInt();
    }
    return stats;
}

Examen Examen::getExamenLePlusProche() {
    QSqlQuery query;
    QDate aujourdhui = QDate::currentDate();

    // Recherche examen futur le plus proche
    query.prepare("SELECT * FROM EXAMEN WHERE dateExamen >= TO_DATE(:aujourdhui, 'YYYY-MM-DD') ORDER BY dateExamen ASC");
    query.bindValue(":aujourdhui", aujourdhui.toString("yyyy-MM-dd"));

    if (query.exec() && query.next()) {
        return Examen(
            query.value("id").toInt(),
            query.value("nomApprenant").toString(),
            query.value("typeExamen").toString(),
            query.value("dateExamen").toDate(),
            query.value("num").toString(),
            query.value("nb_utilisations").toInt()
            );
    }

    // Si aucun examen futur, prendre le dernier examen passé
    query.prepare("SELECT * FROM EXAMEN WHERE dateExamen < TO_DATE(:aujourdhui, 'YYYY-MM-DD') ORDER BY dateExamen DESC");
    query.bindValue(":aujourdhui", aujourdhui.toString("yyyy-MM-dd"));

    if (query.exec() && query.next()) {
        return Examen(
            query.value("id").toInt(),
            query.value("nomApprenant").toString(),
            query.value("typeExamen").toString(),
            query.value("dateExamen").toDate(),
            query.value("num").toString(),
            query.value("nb_utilisations").toInt()
            );
    }

    return Examen();
}
