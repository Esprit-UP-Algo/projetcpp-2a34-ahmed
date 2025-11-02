#include "connection.h"
#include <QDebug>

QSqlDatabase Connection::db;  // ← Membre statique

Connection::Connection() {}

bool Connection::createconnect()
{
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("jaffel");
    db.setUserName("apple");
    db.setPassword("apple");

    if (!db.open()) {
        qDebug() << "ÉCHEC CONNEXION À LA BASE !";
        qDebug() << "Erreur ODBC :" << db.lastError().text();
        return false;
    }

    qDebug() << "Connexion Oracle réussie !";
    return true;
}

void Connection::closeConnect()
{
    if (db.isOpen()) {
        db.close();
        qDebug() << "Connexion fermée.";
    }
}

QSqlDatabase Connection::getDatabase()
{
    return db;
}

