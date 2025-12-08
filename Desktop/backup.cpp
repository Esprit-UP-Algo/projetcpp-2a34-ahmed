#include "backup.h"
#include <QFile>
#include <QTextStream>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QFileDialog>
#include <QSqlRecord>
#include <QSqlDatabase>
#include <QDebug>
#include "connection.h"

Backup::Backup(QObject *parent) : QObject(parent) {}

// Public function to export database
void Backup::exportDatabase(QWidget *parentWidget) {
    // Open save dialog
    QString fileName = QFileDialog::getSaveFileName(parentWidget, "Save Backup", "", "CSV Files (*.csv)");
    if (fileName.isEmpty()) return;

    // Fetch data
    QString data = fetchDatabaseData();
    if (data.isEmpty()) {
        QMessageBox::critical(parentWidget, "Error", "Failed to retrieve data from the database.");
        return;
    }

    // Save to file
    if (saveToFile(fileName, data)) {
        QMessageBox::information(parentWidget, "Success", "Data exported successfully.");
    } else {
        QMessageBox::warning(parentWidget, "Error", "Failed to save data to file.");
    }
}

// Private function to fetch database data
QString Backup::fetchDatabaseData() {
    QSqlDatabase db = Connection::instance()->getDatabase();
    if (!db.isValid()) {
        qDebug() << "Database connection is invalid.";
        return QString();
    }
    if (!db.isOpen()) {
        qDebug() << "Database connection is not open.";
        return QString();
    }

    auto esc = [](const QString &s) -> QString {
        QString v = s;
        bool needQuotes = v.contains(',') || v.contains(';') || v.contains('\n') || v.contains('"');
        v.replace('"', "\"\"");
        if (needQuotes) v = '"' + v + '"';
        return v;
    };

    QString data;
    QSqlQuery query(db);
    query.setForwardOnly(true);
    if (!query.prepare("SELECT NOM, PRENOM, EMAIL, MDP, TELEPHONE, CIN FROM APPRENANT ORDER BY NOM")) {
        qDebug() << "Query Preparation Error:" << query.lastError().text();
        return QString();
    }

    if (!query.exec()) {
        qDebug() << "Query Execution Error:" << query.lastError().text();
        return QString();
    }

    data.append("NOM,PRENOM,EMAIL,MDP,TELEPHONE,CIN\n");
    while (query.next()) {
        QStringList row;
        row << esc(query.value(0).toString())
            << esc(query.value(1).toString())
            << esc(query.value(2).toString())
            << esc(query.value(3).toString())
            << esc(query.value(4).toString())
            << esc(query.value(5).toString());
        data.append(row.join(','));
        data.append("\n");
    }

    return data;
}



// Private function to save data to file
bool Backup::saveToFile(const QString &fileName, const QString &data) {
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "File Error: Cannot open file for writing.";
        return false;
    }

    QTextStream out(&file);
    out << data;
    file.close();
    return true;
}
