#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "connection.h"
#include "apprenant.h"  // Pour FTemp (ajuste si besoin)

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(Connection* connection, QWidget *parent = nullptr);  // ← Accepte Connection*
    ~MainWindow();

private slots:
    void on_pushButton_ajouter_clicked();
    void on_pushButton_modifier_clicked();
    void on_pushButton_supprimer_clicked();

private:
    bool validateInputs(const QString &nom, const QString &prenom, int telephone,
                        const QString &email, const QString &mdp, int cin);
    Ui::MainWindow *ui;
    Connection* dbConnection;  // ← Membre pour la connexion unique
    Apprenant FTemp;
};

#endif // MAINWINDOW_H
