/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget_2;
    QWidget *page_1;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *nom_2;
    QLabel *password_2;
    QLineEdit *textpassword_2;
    QPushButton *valider_2;
    QWidget *widget_2;
    QLabel *disponibilite;
    QLabel *Nom;
    QLabel *label_6;
    QFrame *frame_2;
    QPushButton *Apprenant_2;
    QPushButton *Vehicule_2;
    QPushButton *Seance_2;
    QPushButton *Examen_2;
    QPushButton *deconnecter_2;
    QPushButton *Employe_2;
    QLabel *specialite;
    QLabel *telephone;
    QPushButton *annuler_2;
    QCheckBox *checkBox_2;
    QPushButton *pushButton_ajouter;
    QLabel *prenom;
    QLineEdit *recherche_2;
    QLineEdit *identifant_2;
    QLabel *cin;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QTableView *tableView_2;
    QWidget *tab_5;
    QLabel *Nom_3;
    QLabel *prenom_3;
    QLabel *specialite_3;
    QLabel *disponibilite_3;
    QLabel *telephone_3;
    QLabel *cin_3;
    QPushButton *pushButton_modifier;
    QLineEdit *nom_modifier;
    QLineEdit *prenom_modifier;
    QLineEdit *telephone_modifier;
    QLineEdit *email_modifier;
    QLineEdit *mdp_modifier;
    QLineEdit *cin_modifier;
    QWidget *tab_4;
    QLabel *cin_4;
    QLineEdit *cin_supprimer;
    QPushButton *pushButton_supprimer;
    QWidget *page_3;
    QLineEdit *nom;
    QLineEdit *prenomm;
    QLineEdit *telephonne;
    QLineEdit *email;
    QLineEdit *mdp;
    QLineEdit *cinn;
    QWidget *page_2;
    QPushButton *pushButton;
    QCommandLinkButton *commandLinkButton;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1307, 727);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        stackedWidget_2 = new QStackedWidget(centralWidget);
        stackedWidget_2->setObjectName("stackedWidget_2");
        stackedWidget_2->setGeometry(QRect(0, -50, 1571, 801));
        stackedWidget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(161, 161, 161);"));
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        label_4 = new QLabel(page_1);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(580, 90, 431, 90));
        label_4->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"text-decoration: underline;\n"
"font: 16pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 0);"));
        label_5 = new QLabel(page_1);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(870, 270, 291, 51));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        nom_2 = new QLineEdit(page_1);
        nom_2->setObjectName("nom_2");
        nom_2->setGeometry(QRect(870, 360, 481, 28));
        nom_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 10pt \"Segoe UI\";"));
        password_2 = new QLabel(page_1);
        password_2->setObjectName("password_2");
        password_2->setGeometry(QRect(870, 440, 291, 51));
        password_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        textpassword_2 = new QLineEdit(page_1);
        textpassword_2->setObjectName("textpassword_2");
        textpassword_2->setGeometry(QRect(870, 530, 481, 28));
        textpassword_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 10pt \"Segoe UI\";"));
        valider_2 = new QPushButton(page_1);
        valider_2->setObjectName("valider_2");
        valider_2->setGeometry(QRect(870, 620, 90, 29));
        valider_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 600 11pt \"Segoe UI\";"));
        stackedWidget_2->addWidget(page_1);
        widget_2 = new QWidget();
        widget_2->setObjectName("widget_2");
        disponibilite = new QLabel(widget_2);
        disponibilite->setObjectName("disponibilite");
        disponibilite->setGeometry(QRect(230, 350, 181, 31));
        disponibilite->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        Nom = new QLabel(widget_2);
        Nom->setObjectName("Nom");
        Nom->setGeometry(QRect(240, 110, 171, 31));
        Nom->setStyleSheet(QString::fromUtf8("\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 127);\n"
""));
        label_6 = new QLabel(widget_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(530, 60, 231, 31));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        frame_2 = new QFrame(widget_2);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 50, 201, 731));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        Apprenant_2 = new QPushButton(frame_2);
        Apprenant_2->setObjectName("Apprenant_2");
        Apprenant_2->setGeometry(QRect(10, 120, 171, 61));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 85, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 127, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(0, 106, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 42, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 57, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush8(QColor(255, 255, 255, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        QBrush brush9(QColor(0, 60, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Apprenant_2->setPalette(palette);
        Apprenant_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";\n"
""));
        Vehicule_2 = new QPushButton(frame_2);
        Vehicule_2->setObjectName("Vehicule_2");
        Vehicule_2->setGeometry(QRect(10, 230, 171, 61));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Vehicule_2->setPalette(palette1);
        Vehicule_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        Seance_2 = new QPushButton(frame_2);
        Seance_2->setObjectName("Seance_2");
        Seance_2->setGeometry(QRect(10, 350, 171, 61));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Seance_2->setPalette(palette2);
        Seance_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        Examen_2 = new QPushButton(frame_2);
        Examen_2->setObjectName("Examen_2");
        Examen_2->setGeometry(QRect(10, 450, 171, 61));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Examen_2->setPalette(palette3);
        Examen_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        deconnecter_2 = new QPushButton(frame_2);
        deconnecter_2->setObjectName("deconnecter_2");
        deconnecter_2->setGeometry(QRect(10, 590, 171, 61));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush10(QColor(170, 0, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush10);
        QBrush brush11(QColor(255, 0, 0, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush11);
        QBrush brush12(QColor(212, 0, 0, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        QBrush brush13(QColor(85, 0, 0, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush13);
        QBrush brush14(QColor(113, 0, 0, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Highlight, brush);
        QBrush brush15(QColor(212, 127, 127, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Highlight, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        QBrush brush16(QColor(221, 0, 0, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Disabled, QPalette::Accent, brush16);
        deconnecter_2->setPalette(palette4);
        deconnecter_2->setStyleSheet(QString::fromUtf8("font: 350 11pt \"Segoe UI Variable\";\n"
"background-color: rgb(170, 0, 0);"));
        deconnecter_2->setCheckable(true);
        deconnecter_2->setChecked(false);
        deconnecter_2->setAutoRepeat(true);
        deconnecter_2->setAutoExclusive(true);
        deconnecter_2->setAutoRepeatDelay(366);
        Employe_2 = new QPushButton(frame_2);
        Employe_2->setObjectName("Employe_2");
        Employe_2->setGeometry(QRect(10, 20, 171, 61));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette5.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Employe_2->setPalette(palette5);
        Employe_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        specialite = new QLabel(widget_2);
        specialite->setObjectName("specialite");
        specialite->setGeometry(QRect(230, 270, 181, 31));
        specialite->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        telephone = new QLabel(widget_2);
        telephone->setObjectName("telephone");
        telephone->setGeometry(QRect(230, 430, 181, 31));
        telephone->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        annuler_2 = new QPushButton(widget_2);
        annuler_2->setObjectName("annuler_2");
        annuler_2->setGeometry(QRect(350, 600, 90, 31));
        annuler_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        checkBox_2 = new QCheckBox(widget_2);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(1000, 90, 92, 31));
        checkBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);"));
        pushButton_ajouter = new QPushButton(widget_2);
        pushButton_ajouter->setObjectName("pushButton_ajouter");
        pushButton_ajouter->setGeometry(QRect(230, 600, 91, 31));
        pushButton_ajouter->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        prenom = new QLabel(widget_2);
        prenom->setObjectName("prenom");
        prenom->setGeometry(QRect(240, 190, 171, 31));
        prenom->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        recherche_2 = new QLineEdit(widget_2);
        recherche_2->setObjectName("recherche_2");
        recherche_2->setGeometry(QRect(230, 60, 211, 41));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush6);
        QBrush brush17(QColor(0, 0, 190, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush17);
        QBrush brush18(QColor(0, 0, 158, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush18);
        QBrush brush19(QColor(0, 0, 63, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush19);
        QBrush brush20(QColor(0, 0, 85, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush20);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush19);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette6.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush17);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush18);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush19);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush20);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush19);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush17);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush18);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush19);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        QBrush brush21(QColor(0, 0, 127, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush21);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        QBrush brush22(QColor(0, 0, 89, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Disabled, QPalette::Accent, brush22);
        recherche_2->setPalette(palette6);
        recherche_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        identifant_2 = new QLineEdit(widget_2);
        identifant_2->setObjectName("identifant_2");
        identifant_2->setGeometry(QRect(780, 90, 181, 31));
        identifant_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);\n"
"background-color: rgb(154, 154, 154);"));
        cin = new QLabel(widget_2);
        cin->setObjectName("cin");
        cin->setGeometry(QRect(230, 510, 181, 31));
        cin->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        stackedWidget = new QStackedWidget(widget_2);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(530, 170, 691, 361));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 115, 171);"));
        page = new QWidget();
        page->setObjectName("page");
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(50, 30, 581, 301));
        tabWidget->setContextMenuPolicy(Qt::ContextMenuPolicy::ActionsContextMenu);
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(73, 73, 109);\n"
""));
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tableView_2 = new QTableView(tab_3);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(25, 21, 521, 231));
        tableView_2->setStyleSheet(QString::fromUtf8("background-color: rgb(118, 118, 176);"));
        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        Nom_3 = new QLabel(tab_5);
        Nom_3->setObjectName("Nom_3");
        Nom_3->setGeometry(QRect(20, 20, 81, 31));
        Nom_3->setStyleSheet(QString::fromUtf8("\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 127);\n"
""));
        prenom_3 = new QLabel(tab_5);
        prenom_3->setObjectName("prenom_3");
        prenom_3->setGeometry(QRect(20, 70, 81, 31));
        prenom_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        specialite_3 = new QLabel(tab_5);
        specialite_3->setObjectName("specialite_3");
        specialite_3->setGeometry(QRect(20, 120, 81, 31));
        specialite_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        disponibilite_3 = new QLabel(tab_5);
        disponibilite_3->setObjectName("disponibilite_3");
        disponibilite_3->setGeometry(QRect(20, 170, 81, 31));
        disponibilite_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        telephone_3 = new QLabel(tab_5);
        telephone_3->setObjectName("telephone_3");
        telephone_3->setGeometry(QRect(20, 220, 111, 31));
        telephone_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        cin_3 = new QLabel(tab_5);
        cin_3->setObjectName("cin_3");
        cin_3->setGeometry(QRect(320, 20, 81, 31));
        cin_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        pushButton_modifier = new QPushButton(tab_5);
        pushButton_modifier->setObjectName("pushButton_modifier");
        pushButton_modifier->setGeometry(QRect(470, 200, 90, 51));
        pushButton_modifier->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        nom_modifier = new QLineEdit(tab_5);
        nom_modifier->setObjectName("nom_modifier");
        nom_modifier->setGeometry(QRect(110, 20, 171, 31));
        nom_modifier->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        prenom_modifier = new QLineEdit(tab_5);
        prenom_modifier->setObjectName("prenom_modifier");
        prenom_modifier->setGeometry(QRect(110, 70, 171, 31));
        prenom_modifier->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        telephone_modifier = new QLineEdit(tab_5);
        telephone_modifier->setObjectName("telephone_modifier");
        telephone_modifier->setGeometry(QRect(110, 120, 171, 31));
        telephone_modifier->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        email_modifier = new QLineEdit(tab_5);
        email_modifier->setObjectName("email_modifier");
        email_modifier->setGeometry(QRect(110, 170, 171, 31));
        email_modifier->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        mdp_modifier = new QLineEdit(tab_5);
        mdp_modifier->setObjectName("mdp_modifier");
        mdp_modifier->setGeometry(QRect(140, 220, 141, 31));
        mdp_modifier->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        cin_modifier = new QLineEdit(tab_5);
        cin_modifier->setObjectName("cin_modifier");
        cin_modifier->setGeometry(QRect(410, 20, 151, 31));
        cin_modifier->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        cin_4 = new QLabel(tab_4);
        cin_4->setObjectName("cin_4");
        cin_4->setGeometry(QRect(70, 110, 81, 31));
        cin_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        cin_supprimer = new QLineEdit(tab_4);
        cin_supprimer->setObjectName("cin_supprimer");
        cin_supprimer->setGeometry(QRect(180, 100, 261, 51));
        pushButton_supprimer = new QPushButton(tab_4);
        pushButton_supprimer->setObjectName("pushButton_supprimer");
        pushButton_supprimer->setGeometry(QRect(410, 210, 93, 29));
        tabWidget->addTab(tab_4, QString());
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        stackedWidget->addWidget(page_3);
        nom = new QLineEdit(widget_2);
        nom->setObjectName("nom");
        nom->setGeometry(QRect(260, 150, 201, 26));
        nom->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        prenomm = new QLineEdit(widget_2);
        prenomm->setObjectName("prenomm");
        prenomm->setGeometry(QRect(260, 230, 201, 26));
        prenomm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        telephonne = new QLineEdit(widget_2);
        telephonne->setObjectName("telephonne");
        telephonne->setGeometry(QRect(260, 310, 201, 26));
        telephonne->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        email = new QLineEdit(widget_2);
        email->setObjectName("email");
        email->setGeometry(QRect(260, 390, 201, 26));
        email->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        mdp = new QLineEdit(widget_2);
        mdp->setObjectName("mdp");
        mdp->setGeometry(QRect(260, 470, 201, 26));
        mdp->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        cinn = new QLineEdit(widget_2);
        cinn->setObjectName("cinn");
        cinn->setGeometry(QRect(260, 550, 201, 26));
        cinn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        cinn->setMaxLength(32762);
        stackedWidget_2->addWidget(widget_2);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(370, 200, 90, 29));
        commandLinkButton = new QCommandLinkButton(page_2);
        commandLinkButton->setObjectName("commandLinkButton");
        commandLinkButton->setGeometry(QRect(230, 350, 187, 41));
        tableView = new QTableView(page_2);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(550, 480, 256, 192));
        stackedWidget_2->addWidget(page_2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1307, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget_2->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gestion des Clients", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; font-weight:700;\">sign in</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Nom d'utilisateur</span></p></body></html>", nullptr));
        password_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">password</span></p></body></html>", nullptr));
        valider_2->setText(QCoreApplication::translate("MainWindow", "valider", nullptr));
        disponibilite->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        Nom->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Recherche des apprenants:", nullptr));
        Apprenant_2->setText(QCoreApplication::translate("MainWindow", "Apprenant", nullptr));
        Vehicule_2->setText(QCoreApplication::translate("MainWindow", "Vehicule", nullptr));
        Seance_2->setText(QCoreApplication::translate("MainWindow", "S\303\251ance ", nullptr));
        Examen_2->setText(QCoreApplication::translate("MainWindow", "Examen", nullptr));
        deconnecter_2->setText(QCoreApplication::translate("MainWindow", "Se d\303\251connecter", nullptr));
        Employe_2->setText(QCoreApplication::translate("MainWindow", "Employ\303\251", nullptr));
        specialite->setText(QCoreApplication::translate("MainWindow", "N\302\260tel", nullptr));
        telephone->setText(QCoreApplication::translate("MainWindow", "Mot de passe", nullptr));
        annuler_2->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "verifier", nullptr));
        pushButton_ajouter->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        prenom->setText(QCoreApplication::translate("MainWindow", "Pr\303\251nom", nullptr));
        recherche_2->setText(QCoreApplication::translate("MainWindow", "Ajouter un apprenant", nullptr));
        cin->setText(QCoreApplication::translate("MainWindow", "CIN", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Afficher", nullptr));
        Nom_3->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        prenom_3->setText(QCoreApplication::translate("MainWindow", "Pr\303\251nom", nullptr));
        specialite_3->setText(QCoreApplication::translate("MainWindow", "N\302\260tel", nullptr));
        disponibilite_3->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        telephone_3->setText(QCoreApplication::translate("MainWindow", "Mot de passe", nullptr));
        cin_3->setText(QCoreApplication::translate("MainWindow", "CIN", nullptr));
        pushButton_modifier->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        cin_4->setText(QCoreApplication::translate("MainWindow", "CIN", nullptr));
        pushButton_supprimer->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("MainWindow", "CommandLinkButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
