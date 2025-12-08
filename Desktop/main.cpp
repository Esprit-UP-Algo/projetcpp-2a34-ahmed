#include "connection.h"
#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Connexion à la base de données
    Connection* conn = Connection::instance();

    if (conn->connect()) {
        qDebug() << "✅ Connexion à la base de données Oracle réussie !";
        MainWindow window;
        window.show();
        return app.exec();
    } else {
        qDebug() << "❌ Échec de connexion à la base de données Oracle !";
        QMessageBox::critical(nullptr, "Erreur de Connexion",
                              "Impossible de se connecter à la base de données Oracle.");
        return -1;
    }
}
