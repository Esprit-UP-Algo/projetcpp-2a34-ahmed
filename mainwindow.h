#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidgetItem>

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
    void on_btnModifier_clicked();
    void on_annuler_4_clicked();
    void on_Supprimer_clicked();
    void on_tableWidget_cellClicked(int row, int column);
    void on_btnajouter_clicked();
    void on_pushButton_clicked(); // Recherche par ID

private:
    Ui::MainWindow *ui;
    int ligneSelectionnee;
};

#endif // MAINWINDOW_H
