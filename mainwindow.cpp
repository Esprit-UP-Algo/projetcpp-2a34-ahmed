#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // ⚡ Toujours commencer sur la page 0
    ui->stackedWidget->setCurrentIndex(0);

    // 👉 Associer chaque bouton à une page (via une propriété "page")
    ui->pushButton_statistique->setProperty("page", 2);
    ui->pushButton_statistique_2->setProperty("page", 3);
    ui->pushButton_retour->setProperty("page", 0);
    ui->pushButton_retour_2->setProperty("page", 1);
    ui->Employe_2->setProperty("page", 1);
    ui->Vehicule_3->setProperty("page", 0);

    // 👉 Connecter tous les boutons à la même fonction changePage()
    connect(ui->pushButton_statistique, &QPushButton::clicked, this, &MainWindow::changePage);
    connect(ui->pushButton_statistique_2, &QPushButton::clicked, this, &MainWindow::changePage);
    connect(ui->pushButton_retour, &QPushButton::clicked, this, &MainWindow::changePage);
    connect(ui->pushButton_retour_2, &QPushButton::clicked, this, &MainWindow::changePage);
    connect(ui->Employe_2, &QPushButton::clicked, this, &MainWindow::changePage);
    connect(ui->Vehicule_3, &QPushButton::clicked, this, &MainWindow::changePage);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// 🔥 Slot unique qui gère tous les boutons
void MainWindow::changePage()
{
    QObject *button = sender(); // Récupère le bouton cliqué
    if (button && button->property("page").isValid()) {
        int index = button->property("page").toInt();
        ui->stackedWidget->setCurrentIndex(index);
    }
}
