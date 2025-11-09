#include "mainwindow.h"
#include "connection.h"
#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Connection c;

    if(!c.connect()) {
        QMessageBox::critical(nullptr, QObject::tr("❌ Connexion échouée"),
                              QObject::tr("Impossible de se connecter à la base Oracle."));
        return a.exec();
    }

    MainWindow w;
    w.show();
    return a.exec();
}
