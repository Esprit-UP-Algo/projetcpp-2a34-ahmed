#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:                       // ✅ ajoute cette section
    void on_pushButton_modifier_clicked();  // déclaration du slot

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

