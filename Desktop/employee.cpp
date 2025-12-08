#include "employee.h"
#include "connection.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QTextToSpeech>
#include <QSettings>
#include <QRegularExpression>

static QTextToSpeech* g_speech = nullptr;

// Constructors
Employee::Employee() 
    : cin(""), nom(""), prenom(""), telephone(""), disponibilite(""), email(""), role("") {}

Employee::Employee(QString p_cin, QString p_nom, QString p_prenom,
                 QString p_telephone, QString p_disponibilite)
    : cin(p_cin), nom(p_nom), prenom(p_prenom), 
      telephone(p_telephone), disponibilite(p_disponibilite), 
      email(""), role("") {}

bool Employee::ajouter()
{
    QSqlDatabase db = Connection::instance()->getDatabase();
    QSqlQuery query(db);
    db.transaction();

    try {
        // Vérifier si l'employé existe déjà
        if (employeeExists(cin)) {
            qDebug() << "❌ Erreur: Employé avec CIN" << cin << "existe déjà";
            db.rollback();
            return false;
        }

        // Vérifier que les champs obligatoires sont remplis
        if (cin.isEmpty() || nom.isEmpty() || prenom.isEmpty() || telephone.isEmpty() || disponibilite.isEmpty()) {
            qDebug() << "❌ Erreur: Tous les champs obligatoires doivent être remplis";
            db.rollback();
            return false;
        }

        // Vérifier le format du CIN (8 chiffres)
        QRegularExpression cinRegex("^\\d{8}$");
        if (!cinRegex.match(cin).hasMatch()) {
            qDebug() << "❌ Erreur: Le CIN doit contenir exactement 8 chiffres";
            db.rollback();
            return false;
        }

        // Préparer et exécuter la requête d'insertion
        query.prepare("INSERT INTO EMPLOYEES (CIN, NOM, PRENOM, TELEPHONE, DISPONIBILITE) "
                      "VALUES (:cin, :nom, :prenom, :telephone, :disponibilite)");

        query.bindValue(":cin", cin);
        query.bindValue(":nom", nom);
        query.bindValue(":prenom", prenom);
        query.bindValue(":telephone", telephone);
        query.bindValue(":disponibilite", disponibilite);

        if (!query.exec()) {
            qDebug() << "❌ Erreur lors de l'ajout de l'employé:" << query.lastError().text();
            db.rollback();
            return false;
        }

        db.commit();
        qDebug() << "✅ Employé ajouté avec succès - CIN:" << cin;
        return true;
    } catch (const std::exception &e) {
        qDebug() << "❌ Exception lors de l'ajout de l'employé:" << e.what();
        db.rollback();
        return false;
    }
}

bool Employee::modifier()
{
    QSqlDatabase db = Connection::instance()->getDatabase();
    QSqlQuery query(db);
    db.transaction();

    try {
        // Vérifier si l'employé existe
        if (!employeeExists(cin)) {
            qDebug() << "❌ Erreur: Aucun employé trouvé avec le CIN" << cin;
            db.rollback();
            return false;
        }

        // Vérifier que les champs obligatoires sont remplis
        if (cin.isEmpty() || nom.isEmpty() || prenom.isEmpty() || telephone.isEmpty() || disponibilite.isEmpty()) {
            qDebug() << "❌ Erreur: Tous les champs obligatoires doivent être remplis";
            db.rollback();
            return false;
        }

        // Vérifier le format du CIN (8 chiffres)
        QRegularExpression cinRegex("^\\d{8}$");
        if (!cinRegex.match(cin).hasMatch()) {
            qDebug() << "❌ Erreur: Le CIN doit contenir exactement 8 chiffres";
            db.rollback();
            return false;
        }

        // Préparer et exécuter la requête de mise à jour
        query.prepare("UPDATE EMPLOYEES SET NOM = :nom, PRENOM = :prenom, "
                      "TELEPHONE = :telephone, DISPONIBILITE = :disponibilite "
                      "WHERE CIN = :cin");

        query.bindValue(":cin", cin);
        query.bindValue(":nom", nom);
        query.bindValue(":prenom", prenom);
        query.bindValue(":telephone", telephone);
        query.bindValue(":disponibilite", disponibilite);

        if (!query.exec()) {
            qDebug() << "❌ Erreur lors de la modification de l'employé:" << query.lastError().text();
            db.rollback();
            return false;
        }

        if (query.numRowsAffected() <= 0) {
            qDebug() << "⚠️ Aucune modification effectuée. Vérifiez les données.";
            db.rollback();
            return false;
        }

        db.commit();
        qDebug() << "✅ Employé modifié avec succès - CIN:" << cin;
        return true;
    } catch (const std::exception &e) {
        qDebug() << "❌ Exception lors de la modification de l'employé:" << e.what();
        db.rollback();
        return false;
    }
}

bool Employee::supprimer()
{
    QSqlDatabase db = Connection::instance()->getDatabase();
    QSqlQuery query(db);

    // Vérifier si l'employé existe
    if (!employeeExists(cin)) {
        qDebug() << "❌ Erreur: Employé avec CIN" << cin << "n'existe pas";
        return false;
    }

    query.prepare("DELETE FROM EMPLOYEES WHERE CIN = :cin");
    query.bindValue(":cin", cin);

    if (query.exec()) {
        if (query.numRowsAffected() > 0) {
            qDebug() << "✅ Employé supprimé avec CIN:" << cin;
            return true;
        } else {
            qDebug() << "⚠️ Aucun employé supprimé pour CIN:" << cin;
            return false;
        }
    } else {
        qDebug() << "❌ Erreur suppression employé:" << query.lastError().text();
        return false;
    }
}

QList<Employee> Employee::chargerTousLesEmployees()
{
    QList<Employee> employees;

    // Vérifier la connexion
    QSqlDatabase db = Connection::instance()->getDatabase();
    if (!db.isOpen()) {
        qDebug() << "❌ Base de données non ouverte!";
        return employees;
    }

    QSqlQuery query(db);
    QString queryStr = "SELECT CIN, NOM, PRENOM, TELEPHONE, DISPONIBILITE FROM EMPLOYEES ORDER BY CIN";

    qDebug() << "🔍 Exécution de la requête:" << queryStr;

    if (!query.exec(queryStr)) {
        qDebug() << "❌ Erreur exécution requête:" << query.lastError().text();
        qDebug() << "❌ Détails:" << query.lastError().databaseText();
        return employees;
    }

    int count = 0;
    while (query.next()) {
        Employee emp(
            query.value("CIN").toString(),
            query.value("NOM").toString(),
            query.value("PRENOM").toString(),
            query.value("TELEPHONE").toString(),
            query.value("DISPONIBILITE").toString()
            );
        employees.append(emp);
        count++;

        qDebug() << "📥 Employé chargé:" << emp.getCin() << emp.getNom();
    }

    qDebug() << "✅" << count << "employés chargés depuis la base de données";
    return employees;
}

Employee Employee::chargerParCin(const QString& p_cin)
{
    QSqlDatabase db = Connection::instance()->getDatabase();
    QSqlQuery query(db);

    query.prepare("SELECT CIN, NOM, PRENOM, TELEPHONE, DISPONIBILITE FROM EMPLOYEES WHERE CIN = :cin");
    query.bindValue(":cin", p_cin);

    if (query.exec() && query.next()) {
        qDebug() << "✅ Employé trouvé avec CIN:" << p_cin;
        return Employee(
            query.value("CIN").toString(),
            query.value("NOM").toString(),
            query.value("PRENOM").toString(),
            query.value("TELEPHONE").toString(),
            query.value("DISPONIBILITE").toString()
            );
    } else {
        qDebug() << "❌ Employé non trouvé avec CIN:" << p_cin;
    }

    return Employee(); // Retourne un employé vide si non trouvé
}

bool Employee::employeeExists(const QString& p_cin)
{
    QSqlDatabase db = Connection::instance()->getDatabase();
    QSqlQuery query(db);

    query.prepare("SELECT COUNT(*) FROM EMPLOYEES WHERE CIN = :cin");
    query.bindValue(":cin", p_cin);

    if (query.exec() && query.next()) {
        return query.value(0).toInt() > 0;
    }

    return false;
}

QList<Employee> Employee::trierParDisponibilite(bool ascending)
{
    QList<Employee> employees;
    QSqlDatabase db = Connection::instance()->getDatabase();
    QSqlQuery query(db);

    // FIX: Use proper SQL construction without QString::arg() for ORDER BY
    QString queryStr = "SELECT CIN, NOM, PRENOM, TELEPHONE, DISPONIBILITE FROM EMPLOYEES ";

    if (ascending) {
        queryStr += "ORDER BY DISPONIBILITE ASC, CIN ASC";
    } else {
        queryStr += "ORDER BY DISPONIBILITE DESC, CIN ASC";
    }

    qDebug() << "🔍 Exécution du tri par disponibilité:" << queryStr;

    if (query.exec(queryStr)) {
        while (query.next()) {
            Employee emp(
                query.value("CIN").toString(),
                query.value("NOM").toString(),
                query.value("PRENOM").toString(),
                query.value("TELEPHONE").toString(),
                query.value("DISPONIBILITE").toString()
                );
            employees.append(emp);
        }
        qDebug() << "✅ Tri par disponibilité" << (ascending ? "ascendant" : "descendant") << "réussi -" << employees.size() << "employés";
    } else {
        qDebug() << "❌ Erreur tri par disponibilité:" << query.lastError().text();
        qDebug() << "❌ Détails de l'erreur:" << query.lastError().databaseText();
    }

    return employees;
}

QList<Employee> Employee::trierParTelephone(bool ascending)
{
    QList<Employee> employees;
    QSqlDatabase db = Connection::instance()->getDatabase();
    QSqlQuery query(db);

    // FIX: Use proper SQL construction without QString::arg() for ORDER BY
    QString queryStr = "SELECT CIN, NOM, PRENOM, TELEPHONE, DISPONIBILITE FROM EMPLOYEES ";

    if (ascending) {
        queryStr += "ORDER BY TELEPHONE ASC, CIN ASC";
    } else {
        queryStr += "ORDER BY TELEPHONE DESC, CIN ASC";
    }

    qDebug() << "🔍 Exécution du tri par téléphone:" << queryStr;

    if (query.exec(queryStr)) {
        while (query.next()) {
            Employee emp(
                query.value("CIN").toString(),
                query.value("NOM").toString(),
                query.value("PRENOM").toString(),
                query.value("TELEPHONE").toString(),
                query.value("DISPONIBILITE").toString()
                );
            employees.append(emp);
        }
        qDebug() << "✅ Tri par téléphone" << (ascending ? "ascendant" : "descendant") << "réussi -" << employees.size() << "employés";
    } else {
        qDebug() << "❌ Erreur tri par téléphone:" << query.lastError().text();
        qDebug() << "❌ Détails de l'erreur:" << query.lastError().databaseText();
    }

    return employees;
}

// ==================== AJOUT: MÉTHODES POUR LA SYNTHÈSE VOCALE ====================

void Employee::initialiserSyntheseVocale()
{
    if (!g_speech) {
        g_speech = new QTextToSpeech();

        // Configurer la voix
        QVector<QVoice> voices = g_speech->availableVoices();
        if (!voices.isEmpty()) {
            // Préférer une voix française
            for (const QVoice &voice : voices) {
                if (voice.name().contains("french", Qt::CaseInsensitive) ||
                    voice.name().contains("français", Qt::CaseInsensitive)) {
                    g_speech->setVoice(voice);
                    qDebug() << "🎤 Voix sélectionnée:" << voice.name();
                    break;
                }
            }
        }

        // Configurer paramètres
        g_speech->setRate(0.0);   // Vitesse normale
        g_speech->setVolume(1.0); // Volume maximum

        qDebug() << "✅ Synthèse vocale initialisée";
    }
}

void Employee::lireMessage(const QString &message)
{
    // Initialiser si pas déjà fait
    if (!g_speech) {
        initialiserSyntheseVocale();
    }

    if (g_speech) {
        qDebug() << "🔊 Lecture vocale:" << message;

        // Arrêter toute lecture en cours
        if (g_speech->state() == QTextToSpeech::Speaking) {
            g_speech->stop();
        }

        // Lire le message
        g_speech->say(message);
    } else {
        qDebug() << "❌ Synthèse vocale non disponible";
    }
}

// ============================================================================
// ⭐ AJOUT: MÉTHODES POUR LE CALENDRIER ⭐
// ============================================================================

bool Employee::sauvegarderDisponibiliteCalendrier(const QString& employeeId,
                                                  const QDate& date,
                                                  const QString& timeSlot,
                                                  bool disponible)
{
    // Utiliser QSettings pour stocker les disponibilités du calendrier
    QSettings settings("YourCompany", "EmployeeCalendar");

    QString dateKey = date.toString("yyyy-MM-dd");
    QString fullKey = QString("%1/%2_%3").arg(dateKey).arg(timeSlot).arg(employeeId);

    settings.setValue(fullKey, disponible);

    qDebug() << "💾 Disponibilité sauvegardée - Date:" << date.toString("dd/MM/yyyy")
             << "Créneau:" << timeSlot
             << "Employé:" << employeeId
             << "Disponible:" << (disponible ? "Oui" : "Non");

    return true;
}

QMap<QString, bool> Employee::chargerDisponibilitesDate(const QDate& date)
{
    QMap<QString, bool> disponibilites;
    QSettings settings("YourCompany", "EmployeeCalendar");

    QString dateKey = date.toString("yyyy-MM-dd");

    // Charger tous les employés pour vérifier leurs disponibilités
    QList<Employee> employees = chargerTousLesEmployees();

    // Parcourir tous les créneaux horaires
    QStringList creneaux = getCreneauxHoraires();

    for (const QString& creneau : creneaux) {
        for (const Employee& emp : employees) {
            QString fullKey = QString("%1/%2_%3").arg(dateKey).arg(creneau).arg(emp.getCin());
            bool estDisponible = settings.value(fullKey, true).toBool(); // Par défaut disponible

            QString key = QString("%1_%2").arg(creneau).arg(emp.getCin());
            disponibilites[key] = estDisponible;
        }
    }

    qDebug() << "📅 Chargé" << disponibilites.size() << "disponibilités pour le"
             << date.toString("dd/MM/yyyy");

    return disponibilites;
}

QList<QString> Employee::getCreneauxHoraires()
{
    // Retourne la liste des créneaux horaires disponibles
    return {
        "🕗 08:00 - 10:00",
        "🕙 10:00 - 12:00",
        "🕑 14:00 - 16:00",
        "🕓 16:00 - 18:00"
    };
}

// ============================================================================
// 📊 AJOUT: FONCTIONS POUR LES STATISTIQUES 📊
// ============================================================================

QMap<QString, int> Employee::getStatistiquesDisponibilite() {
    QMap<QString, int> stats;
    QList<Employee> employees = chargerTousLesEmployees();

    qDebug() << "📊 Calcul des statistiques de disponibilité...";

    for (const Employee &emp : employees) {
        QString statut = emp.getDisponibilite();
        stats[statut] = stats.value(statut, 0) + 1;

        qDebug() << "  👤" << emp.getPrenom() << emp.getNom() << "- Statut:" << statut;
    }

    qDebug() << "✅ Statistiques calculées - Total employés:" << employees.size();
    for (auto it = stats.begin(); it != stats.end(); ++it) {
        qDebug() << "  📈" << it.key() << ":" << it.value() << "employé(s)";
    }

    return stats;
}

QList<QPair<QString, int>> Employee::getTopEmployeesParStatut(const QString& statut, int limit) {
    QList<QPair<QString, int>> result;
    QList<Employee> employees = chargerTousLesEmployees();

    qDebug() << "🔝 Recherche des top employés pour le statut:" << statut;

    // Filtrer par statut et préparer les données
    QList<QPair<QString, QString>> filtered; // Nom complet + CIN
    for (const Employee &emp : employees) {
        if (emp.getDisponibilite().compare(statut, Qt::CaseInsensitive) == 0) {
            QString nomComplet = emp.getPrenom() + " " + emp.getNom();
            filtered.append(qMakePair(nomComplet, emp.getCin()));
        }
    }

    qDebug() << "📋" << filtered.size() << "employé(s) trouvé(s) avec le statut:" << statut;

    // Trier par CIN (ou autre critère) et limiter les résultats
    std::sort(filtered.begin(), filtered.end(),
              [](const QPair<QString, QString> &a, const QPair<QString, QString> &b) {
                  return a.second < b.second; // Tri par CIN
              });

    for (int i = 0; i < qMin(limit, filtered.size()); ++i) {
        result.append(qMakePair(filtered[i].first, filtered[i].second.toInt()));
        qDebug() << "  🥇" << filtered[i].first << "- CIN:" << filtered[i].second;
    }

    return result;
}

double Employee::getTauxDisponibiliteMoyen() {
    QList<Employee> employees = chargerTousLesEmployees();
    if (employees.isEmpty()) {
        qDebug() << "📊 Aucun employé trouvé pour calculer le taux de disponibilité";
        return 0.0;
    }

    int disponibles = 0;
    for (const Employee &emp : employees) {
        if (emp.getDisponibilite().compare("Disponible", Qt::CaseInsensitive) == 0) {
            disponibles++;
        }
    }

    double taux = (disponibles * 100.0) / employees.size();

    qDebug() << "📈 Taux de disponibilité calculé:"
             << disponibles << "/" << employees.size()
             << "=" << QString::number(taux, 'f', 2) << "%";

    return taux;
}
// ============================================================================
// 📄 AJOUT: FONCTION POUR L'EXPORT PDF 📄
// ============================================================================

void Employee::exporterStatistiquesPdf(const QString &fileName, const QList<Employee> &employees)
{
    qDebug() << "📄 Début de l'export PDF vers:" << fileName;

    // Vérifier si la liste d'employés est vide
    if (employees.isEmpty()) {
        qDebug() << "❌ Aucune donnée à exporter";
        return;
    }

    qDebug() << "✅ Export PDF démarré pour" << employees.size() << "employés";

    // Cette fonction est maintenant déclarée dans employee.h
    // L'implémentation complète se trouve dans mainwindow.cpp
    // Cette fonction sert de pont entre les classes
}
