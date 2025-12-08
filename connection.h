#ifndef CONNECTION_H
#define CONNECTION_H

#include <QSqlDatabase>
#include <QString>
#include <QDate>

class Connection
{
private:
    Connection();
    QSqlDatabase db;
    static Connection* instancePtr;

public:
    ~Connection();
    static Connection* instance();
    bool connect();
    QSqlDatabase& getDatabase();
    void close();

    // New methods for exam management - moved to public section
    bool addExamen(int id, const QString& nomApprenant, const QString& typeExamen,
                   const QDate& dateExamen, const QString& num, int nbUtilisations = 1);
    int getNextExamenId();
};

#endif // CONNECTION_H

/*#ifndef CONNECTION_H
#define CONNECTION_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

class Connection
{
public:
    static Connection* instance();
    bool connect();

    // ➜ MISSING IN YOUR ORIGINAL FILE
    QSqlDatabase& getDatabase();

private:
    Connection() = default;
    QSqlDatabase db;
};

#endif
*/
