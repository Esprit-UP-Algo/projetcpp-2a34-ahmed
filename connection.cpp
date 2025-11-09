#include "connection.h"

Connection::Connection() {}

bool Connection::connect()
{
    bool test = false;

    // Initialiser la connexion ODBC
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    // Nom de la Data Source Name (DSN) EXACTEMENT comme dans ODBC
    db.setDatabaseName("rojet25");

    // Identifiants Oracle
    db.setUserName("admin_esprit");
    db.setPassword("esprit25");

    if (db.open()) {
        test = true;
        qDebug() << "✅ Connexion réussie à la base Oracle.";
    } else {
        qDebug() << "❌ Erreur connexion :" << db.lastError().text();
    }

    return test;
}
