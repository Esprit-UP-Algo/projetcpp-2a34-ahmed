#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ajouter_clicked();
    void on_annuler_7_clicked();
    void on_modifier_5_clicked();
    void on_valider_clicked();
    void on_Supprimer_5_clicked();
    void on_comboBox_5_currentTextChanged(const QString &arg1);
    void on_pushButton_19_clicked();
    void on_pushButton_20_clicked();
    void on_pushButton_statistique_6_clicked();
    void on_pushButton_retour_3_clicked();
    void on_Employe_5_clicked();  // AJOUTEZ CETTE LIGNE

private:
    Ui::MainWindow *ui;
    QString originalImmatriculation;
    void chargerTousLesVehicules();
};

#endif // MAINWINDOW_H
