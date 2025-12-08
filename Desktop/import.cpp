#include "import.h"
#include <QFile>
#include <QTextStream>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>
#include <QSqlDatabase>
#include <QMap>
#include "connection.h"
#include "apprenant.h"

Import::Import(QObject *parent) : QObject(parent) {}

void Import::importDatabase(QWidget *parentWidget) {
    // Open file dialog to select CSV file
    QString fileName = QFileDialog::getOpenFileName(parentWidget, "Open Backup File", "", "CSV Files (*.csv)");
    if (fileName.isEmpty()) return;

    // Parse the CSV file
    QStringList data = parseCSVFile(fileName);
    if (data.isEmpty()) {
        QMessageBox::critical(parentWidget, "Error", "Failed to read the backup file or file is empty.");
        return;
    }

    // Insert data into the database
    if (insertIntoDatabase(data)) {
        QMessageBox::information(parentWidget, "Success", "Data imported successfully.");
    } else {
        QMessageBox::warning(parentWidget, "Error", "Failed to insert data into the database.");
    }
}

QStringList Import::parseCSVFile(const QString &fileName) {
    QFile file(fileName);
    QStringList rows;

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "File Error: Cannot open file for reading.";
        return rows;
    }

    QTextStream in(&file);
    in.setAutoDetectUnicode(true);
    while (!in.atEnd()) {
        QString line = in.readLine();
        if (line.trimmed().isEmpty()) continue;
        rows.append(line);
    }

    file.close();
    return rows;
}

bool Import::insertIntoDatabase(const QStringList &data) {
    if (data.isEmpty()) return false;

    QSqlDatabase db = Connection::instance()->getDatabase();
    if (!db.isValid() || !db.isOpen()) {
        qDebug() << "Database connection is invalid or not open.";
        return false;
    }

    auto splitLine = [](const QString &line) -> QStringList {
        QString cleaned = line.trimmed();
        QChar sep = cleaned.contains(';') ? ';' : ',';
        QStringList parts = cleaned.split(sep);
        for (QString &p : parts) {
            p = p.trimmed();
            if (p.startsWith('"') && p.endsWith('"') && p.size() >= 2) {
                p = p.mid(1, p.size() - 2);
            }
        }
        return parts;
    };

    QStringList headerParts = splitLine(data.first());
    bool hasHeader = false;
    QMap<QString, int> idx;

    // Detect header by known field names
    QStringList known = {"NOM", "PRENOM", "EMAIL", "MDP", "TELEPHONE", "CIN"};
    for (int i = 0; i < headerParts.size(); ++i) {
        QString h = headerParts[i].toUpper();
        if (known.contains(h)) {
            hasHeader = true;
            idx[h] = i;
        }
    }

    int startRow = hasHeader ? 1 : 0;
    int inserted = 0;
    int failed = 0;

    for (int i = startRow; i < data.size(); ++i) {
        QStringList values = splitLine(data[i]);
        if (values.isEmpty()) continue;

        QString nom, prenom, email, mdp, tel;
        int cin = 0;

        if (hasHeader) {
            auto get = [&](const QString &key) -> QString {
                int j = idx.value(key, -1);
                return j >= 0 && j < values.size() ? values[j] : QString();
            };
            nom = get("NOM");
            prenom = get("PRENOM");
            email = get("EMAIL");
            mdp = get("MDP");
            tel = get("TELEPHONE");
            cin = get("CIN").toInt();
        } else {
            if (values.size() < 6) {
                qDebug() << "Skipping row: not enough values" << values;
                failed++;
                continue;
            }
            nom = values[0];
            prenom = values[1];
            email = values[2];
            mdp = values[3];
            tel = values[4];
            cin = values[5].toInt();
        }

        QSqlQuery q(db);
        q.prepare("INSERT INTO APPRENANT (NOM, PRENOM, EMAIL, MDP, TELEPHONE, CIN) "
                  "VALUES (:nom, :prenom, :email, :mdp, :tel, :cin)");
        q.bindValue(":nom", nom);
        q.bindValue(":prenom", prenom);
        q.bindValue(":email", email);
        q.bindValue(":mdp", mdp);
        q.bindValue(":tel", tel);
        q.bindValue(":cin", cin);

        if (!q.exec()) {
            qDebug() << "Database Insertion Error:" << q.lastError().text();
            failed++;
        } else {
            inserted++;
        }
    }

    qDebug() << "Import completed. Inserted:" << inserted << ", Failed:" << failed;
    return inserted > 0;
}
