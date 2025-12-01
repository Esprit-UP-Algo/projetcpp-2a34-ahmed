
#include "connection.h"

Connection::Connection() {}

bool Connection::connect()
{
    bool test = false;

    // Initialiser la connexion ODBC
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    // Nom de la Data Source Name (DSN) EXACTEMENT comme dans ODBC
    db.setDatabaseName("jaffel");

    // Identifiants Oracle
    db.setUserName("apple");
    db.setPassword("apple");

    if (db.open()) {
        test = true;
        qDebug() << "✅ Connexion réussie à la base Oracle.";
    } else {
        qDebug() << "❌ Erreur connexion :" << db.lastError().text();
    }

    return test;
}
