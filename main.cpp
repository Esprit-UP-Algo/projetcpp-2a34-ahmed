#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Créer l'instance de connexion
    Connection c;

    // Utiliser connect() au lieu de createConnection()
    bool test = c.connect();  // Changé ici

    if(test) {
        MainWindow w;
        w.show();

        QMessageBox::information(nullptr, "Connexion réussie",
                                 "Connexion à la base de données établie avec succès!",
                                 QMessageBox::Ok);

        int result = a.exec();

        // Pas de closeConnection() car elle n'existe pas dans votre classe
        // La connexion sera fermée automatiquement à la destruction de l'objet

        return result;
    } else {
        QMessageBox::critical(nullptr, "Erreur de connexion",
                              "Impossible de se connecter à la base de données.\n"
                              "Vérifiez la configuration et réessayez.",
                              QMessageBox::Ok);
        return -1;
    }
}
