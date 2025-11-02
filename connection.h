#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class Connection
{
    static QSqlDatabase db;  // ← AJOUTE CETTE LIGNE (membre statique)
public:
    Connection();
    bool createconnect();
    void closeConnect();
    QSqlDatabase getDatabase();
};

#endif // CONNECTION_H
