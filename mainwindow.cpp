#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "modifier_2.h"
#include "ui_modifier_2.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_modifier_clicked()
{
    modifier_2 *m = new modifier_2(this);
    m->show();
}

