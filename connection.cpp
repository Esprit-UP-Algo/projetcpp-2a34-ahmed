#include "connection.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>

Connection::Connection()
{
}

bool Connection::connect()
{
    bool test = false;  // Corrigé: False -> false (minuscule)

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC"); // Corrigé: QSq\Database -> QSqlDatabase
    db.setDatabaseName("Source_Projet2A");    // insérer le nom de la source de données
    db.setUserName("ahmed");    // insérer nom de l'utilisateur
    db.setPassword("esprit25");    // insérer mot de passe de cet utilisateur

    if (db.open()) {
        test = true;
        qDebug() << "FÉLICITATIONS vous êtes connecté à la base de données !";
    } else {
        qDebug() << "Erreur de connexion:" << db.lastError().text();
    }

    return test;  // Retourner le résultat en dehors du if
}
