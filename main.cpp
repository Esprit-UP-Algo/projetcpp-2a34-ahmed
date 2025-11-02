#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Connection c;
    if (!c.createconnect()) {
        QMessageBox::critical(nullptr, "ERREUR BASE DE DONNÉES",
                              "<b>Connexion échouée !</b><br><br>"
                              "Vérifiez :<br>"
                              "1. DSN <b>jaffel</b> créé dans <b>ODBC 64-bit</b><br>"
                              "2. Oracle XE est démarré<br>"
                              "3. Utilisateur <b>apple</b> existe<br><br>"
                              "<i>Cliquez sur OK pour fermer.</i>");
        return -1;
    }

    MainWindow w(&c);
    w.show();

    return a.exec();
}
