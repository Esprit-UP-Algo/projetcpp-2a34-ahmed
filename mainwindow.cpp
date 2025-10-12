#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPushButton>
#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>
#include <QDebug>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0);

    // Only set properties for buttons that actually exist
    ui->pushButton_statistique->setProperty("page", 2);
    ui->pushButton_statistique_2->setProperty("page", 3);
    ui->pushButton_retour->setProperty("page", 0);
    ui->pushButton_retour_2->setProperty("page", 1);
    ui->Employe_3->setProperty("page", 1);
    ui->Employe_4->setProperty("page", 1);
    ui->Vehicule_3->setProperty("page", 0);
    ui->Vehicule_4->setProperty("page", 0);
    ui->Vehicule_5->setProperty("page", 0);
    ui->Examen_3->setProperty("page", 4);
    ui->Examen_4->setProperty("page", 1);
    ui->Examen_5->setProperty("page", 4);
    // ui->Apprenant_2->setProperty("page", 5);  // REMOVE - doesn't exist
    ui->Apprenant_3->setProperty("page", 5);
    ui->Apprenant_4->setProperty("page", 5);

    // Create list with only existing buttons
    QList<QPushButton*> buttons = {
        ui->pushButton_statistique,
        ui->pushButton_statistique_2,
        ui->pushButton_retour,
        ui->pushButton_retour_2,
        ui->Employe_3,
        ui->Employe_4,
        ui->Vehicule_3,
        ui->Vehicule_4,
        ui->Vehicule_5,
        ui->Examen_3,
        ui->Examen_4,
        ui->Examen_5,
        // ui->Apprenant_2,  // REMOVE - doesn't exist
        ui->Apprenant_3,
        ui->Apprenant_4
    };

    for (auto *button : buttons) {
        if (button) { // Additional safety check
            connect(button, &QPushButton::clicked, this, &MainWindow::changePageWithFade);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changePageWithFade()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button && button->property("page").isValid()) {
        int index = button->property("page").toInt();

        // Get current page and apply fade out
        QWidget *currentPage = ui->stackedWidget->currentWidget();
        QGraphicsOpacityEffect *effect = new QGraphicsOpacityEffect(currentPage);
        currentPage->setGraphicsEffect(effect);

        QPropertyAnimation *anim = new QPropertyAnimation(effect, "opacity");
        anim->setDuration(300);
        anim->setStartValue(1.0);
        anim->setEndValue(0.0);
        anim->start(QAbstractAnimation::DeleteWhenStopped);

        // When fade out completes, switch page and fade in
        connect(anim, &QPropertyAnimation::finished, [=]() {
            ui->stackedWidget->setCurrentIndex(index);

            QWidget *newPage = ui->stackedWidget->currentWidget();
            QGraphicsOpacityEffect *effect2 = new QGraphicsOpacityEffect(newPage);
            newPage->setGraphicsEffect(effect2);

            QPropertyAnimation *anim2 = new QPropertyAnimation(effect2, "opacity");
            anim2->setDuration(300);
            anim2->setStartValue(0.0);
            anim2->setEndValue(1.0);
            anim2->start(QAbstractAnimation::DeleteWhenStopped);

            qDebug() << "Page changed to:" << index;
        });
    }
}
