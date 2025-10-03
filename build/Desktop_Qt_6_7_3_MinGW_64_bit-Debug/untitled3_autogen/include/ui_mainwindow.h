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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page0;
    QFrame *frame_2;
    QPushButton *Apprenant_2;
    QPushButton *Vehicule_2;
    QPushButton *Seance_2;
    QPushButton *Examen_2;
    QPushButton *deconnecter_2;
    QPushButton *Employe_2;
    QLineEdit *recherche_6;
    QLabel *Immatriculation;
    QTextEdit *textModel;
    QLabel *Modele;
    QLabel *date;
    QTextEdit *texteDate;
    QLabel *etat;
    QLabel *Kilometrage;
    QTextEdit *textImmatriculation;
    QPushButton *modifier;
    QPushButton *btnValider_4;
    QPushButton *annuler_4;
    QTextEdit *textImmatriculation_2;
    QTextEdit *texteDate_2;
    QTableWidget *tableWidget;
    QPushButton *pushButton_12;
    QPushButton *Supprimer;
    QLabel *label_2;
    QLineEdit *identifant;
    QPushButton *pushButton;
    QLabel *label_7;
    QComboBox *comboBox;
    QPushButton *pushButton_statistique;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *page_3;
    QFrame *frame_3;
    QPushButton *Apprenant_3;
    QPushButton *Vehicule_3;
    QPushButton *Seance_3;
    QPushButton *Examen_3;
    QPushButton *deconnecter_3;
    QPushButton *pushButton_statistique_3;
    QLineEdit *recherche_2;
    QLabel *Nom;
    QTextEdit *textnom;
    QLabel *prenom;
    QTextEdit *textespecialite;
    QLabel *disponibilite;
    QTextEdit *textdisponibilite;
    QLabel *telephone;
    QTextEdit *texttelephone_2;
    QLabel *cin;
    QTextEdit *textcin;
    QPushButton *annuler_2;
    QTableWidget *tableWidget_2;
    QLabel *label_6;
    QComboBox *comboBox_2;
    QLineEdit *identifant_2;
    QPushButton *pushButton_2;
    QLabel *label_8;
    QPushButton *pushButton_13;
    QPushButton *Supprimer_2;
    QPushButton *btnValider_5;
    QPushButton *modifier_2;
    QPushButton *pushButton_statistique_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *page_2;
    QLabel *label;
    QPushButton *pushButton_retour;
    QWidget *page;
    QLabel *label_3;
    QPushButton *pushButton_retour_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1361, 780);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1511, 731));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 240, 250);"));
        stackedWidget->setFrameShape(QFrame::Shape::StyledPanel);
        stackedWidget->setLineWidth(-11);
        stackedWidget->setMidLineWidth(0);
        page0 = new QWidget();
        page0->setObjectName("page0");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(page0->sizePolicy().hasHeightForWidth());
        page0->setSizePolicy(sizePolicy);
        frame_2 = new QFrame(page0);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, -10, 201, 731));
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
        Examen_2->setGeometry(QRect(10, 490, 171, 61));
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
        deconnecter_2->setGeometry(QRect(20, 640, 171, 61));
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
        recherche_6 = new QLineEdit(page0);
        recherche_6->setObjectName("recherche_6");
        recherche_6->setGeometry(QRect(280, 20, 201, 41));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush17(QColor(0, 170, 255, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush17);
        QBrush brush18(QColor(0, 0, 190, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush18);
        QBrush brush19(QColor(0, 0, 158, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        QBrush brush20(QColor(0, 0, 63, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush20);
        QBrush brush21(QColor(0, 0, 85, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush17);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush20);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette6.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush18);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush19);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush21);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush17);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush17);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush20);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush18);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        QBrush brush22(QColor(0, 0, 127, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush22);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        QBrush brush23(QColor(0, 0, 89, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Disabled, QPalette::Accent, brush23);
        recherche_6->setPalette(palette6);
        recherche_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        Immatriculation = new QLabel(page0);
        Immatriculation->setObjectName("Immatriculation");
        Immatriculation->setGeometry(QRect(280, 100, 131, 31));
        Immatriculation->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        textModel = new QTextEdit(page0);
        textModel->setObjectName("textModel");
        textModel->setGeometry(QRect(280, 150, 191, 31));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush24(QColor(127, 127, 127, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush24);
        QBrush brush25(QColor(170, 170, 170, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush25);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush26(QColor(0, 0, 0, 128));
        brush26.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush26);
#endif
        palette7.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush24);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush25);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush24);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush25);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush26);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        textModel->setPalette(palette7);
        textModel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        Modele = new QLabel(page0);
        Modele->setObjectName("Modele");
        Modele->setGeometry(QRect(280, 190, 171, 31));
        Modele->setStyleSheet(QString::fromUtf8("\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 127);\n"
""));
        date = new QLabel(page0);
        date->setObjectName("date");
        date->setEnabled(true);
        date->setGeometry(QRect(280, 390, 131, 31));
        date->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        texteDate = new QTextEdit(page0);
        texteDate->setObjectName("texteDate");
        texteDate->setGeometry(QRect(280, 440, 191, 31));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush24);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush25);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush26);
#endif
        palette8.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush24);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush25);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush24);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush25);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush26);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        texteDate->setPalette(palette8);
        texteDate->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        etat = new QLabel(page0);
        etat->setObjectName("etat");
        etat->setGeometry(QRect(280, 500, 151, 31));
        etat->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        Kilometrage = new QLabel(page0);
        Kilometrage->setObjectName("Kilometrage");
        Kilometrage->setGeometry(QRect(280, 290, 131, 31));
        Kilometrage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        textImmatriculation = new QTextEdit(page0);
        textImmatriculation->setObjectName("textImmatriculation");
        textImmatriculation->setGeometry(QRect(280, 550, 191, 31));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush24);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush25);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush26);
#endif
        palette9.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush24);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush25);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush24);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush25);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush26);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        textImmatriculation->setPalette(palette9);
        textImmatriculation->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
"font: 9pt \"Segoe UI\";"));
        modifier = new QPushButton(page0);
        modifier->setObjectName("modifier");
        modifier->setGeometry(QRect(330, 610, 90, 29));
        modifier->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        btnValider_4 = new QPushButton(page0);
        btnValider_4->setObjectName("btnValider_4");
        btnValider_4->setGeometry(QRect(260, 660, 90, 29));
        btnValider_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::ContactNew));
        btnValider_4->setIcon(icon);
        annuler_4 = new QPushButton(page0);
        annuler_4->setObjectName("annuler_4");
        annuler_4->setGeometry(QRect(400, 660, 90, 29));
        annuler_4->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::EditClear));
        annuler_4->setIcon(icon1);
        textImmatriculation_2 = new QTextEdit(page0);
        textImmatriculation_2->setObjectName("textImmatriculation_2");
        textImmatriculation_2->setGeometry(QRect(280, 340, 191, 31));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush24);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush25);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush26);
#endif
        palette10.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush24);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush25);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush24);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush25);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush26);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        textImmatriculation_2->setPalette(palette10);
        textImmatriculation_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
"font: 9pt \"Segoe UI\";"));
        texteDate_2 = new QTextEdit(page0);
        texteDate_2->setObjectName("texteDate_2");
        texteDate_2->setGeometry(QRect(280, 240, 191, 31));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush24);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush25);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush26);
#endif
        palette11.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush24);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush25);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush24);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush25);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush26);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        texteDate_2->setPalette(palette11);
        texteDate_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        tableWidget = new QTableWidget(page0);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(500, 140, 891, 431));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        pushButton_12 = new QPushButton(page0);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(540, 600, 281, 29));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush27(QColor(94, 198, 215, 255));
        brush27.setStyle(Qt::SolidPattern);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush27);
        palette12.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush27);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush27);
        palette12.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette12.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush27);
        palette12.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush27);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush27);
        palette12.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush27);
        palette12.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush27);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush27);
        palette12.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        pushButton_12->setPalette(palette12);
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::DocumentPrint));
        pushButton_12->setIcon(icon2);
        Supprimer = new QPushButton(page0);
        Supprimer->setObjectName("Supprimer");
        Supprimer->setGeometry(QRect(1040, 600, 281, 29));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush27);
        palette13.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Dark, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush);
        palette13.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush27);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush27);
        palette13.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette13.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette13.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush27);
        palette13.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush27);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush27);
        palette13.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush27);
        palette13.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush27);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush27);
        palette13.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        Supprimer->setPalette(palette13);
        Supprimer->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        Supprimer->setIcon(icon1);
        label_2 = new QLabel(page0);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(510, 110, 231, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        identifant = new QLineEdit(page0);
        identifant->setObjectName("identifant");
        identifant->setGeometry(QRect(730, 110, 181, 31));
        identifant->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(page0);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(910, 110, 121, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        label_7 = new QLabel(page0);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(1040, 110, 151, 31));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        comboBox = new QComboBox(page0);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(1190, 110, 82, 31));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        pushButton_statistique = new QPushButton(page0);
        pushButton_statistique->setObjectName("pushButton_statistique");
        pushButton_statistique->setGeometry(QRect(1050, 0, 211, 29));
        pushButton_statistique->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::EditFind));
        pushButton_statistique->setIcon(icon3);
        pushButton_3 = new QPushButton(page0);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(1270, 110, 61, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::GoDown));
        pushButton_3->setIcon(icon4);
        pushButton_4 = new QPushButton(page0);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(1330, 110, 61, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::GoUp));
        pushButton_4->setIcon(icon5);
        stackedWidget->addWidget(page0);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        frame_3 = new QFrame(page_3);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(0, -10, 201, 731));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        Apprenant_3 = new QPushButton(frame_3);
        Apprenant_3->setObjectName("Apprenant_3");
        Apprenant_3->setGeometry(QRect(10, 120, 171, 61));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette14.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette14.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush);
        palette14.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette14.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette14.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette14.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Apprenant_3->setPalette(palette14);
        Apprenant_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";\n"
""));
        Vehicule_3 = new QPushButton(frame_3);
        Vehicule_3->setObjectName("Vehicule_3");
        Vehicule_3->setGeometry(QRect(10, 230, 171, 61));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette15.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette15.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush);
        palette15.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette15.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette15.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette15.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette15.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette15.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Vehicule_3->setPalette(palette15);
        Vehicule_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        Seance_3 = new QPushButton(frame_3);
        Seance_3->setObjectName("Seance_3");
        Seance_3->setGeometry(QRect(10, 350, 171, 61));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette16.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette16.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette16.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush);
        palette16.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette16.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette16.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette16.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette16.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Seance_3->setPalette(palette16);
        Seance_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::FormatIndentLess));
        Seance_3->setIcon(icon6);
        Examen_3 = new QPushButton(frame_3);
        Examen_3->setObjectName("Examen_3");
        Examen_3->setGeometry(QRect(10, 490, 171, 61));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush);
        palette17.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette17.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette17.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette17.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Examen_3->setPalette(palette17);
        Examen_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        deconnecter_3 = new QPushButton(frame_3);
        deconnecter_3->setObjectName("deconnecter_3");
        deconnecter_3->setGeometry(QRect(20, 640, 171, 61));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette18.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette18.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette18.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette18.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush);
        palette18.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette18.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette18.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette18.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette18.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette18.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette18.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette18.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette18.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette18.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette18.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette18.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette18.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette18.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette18.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::Highlight, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette18.setBrush(QPalette::Disabled, QPalette::Accent, brush16);
        deconnecter_3->setPalette(palette18);
        deconnecter_3->setStyleSheet(QString::fromUtf8("font: 350 11pt \"Segoe UI Variable\";\n"
"background-color: rgb(170, 0, 0);"));
        deconnecter_3->setCheckable(true);
        deconnecter_3->setChecked(false);
        deconnecter_3->setAutoRepeat(true);
        deconnecter_3->setAutoExclusive(true);
        deconnecter_3->setAutoRepeatDelay(366);
        pushButton_statistique_3 = new QPushButton(frame_3);
        pushButton_statistique_3->setObjectName("pushButton_statistique_3");
        pushButton_statistique_3->setGeometry(QRect(10, 20, 171, 61));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette19.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette19.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette19.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush);
        palette19.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette19.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette19.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette19.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette19.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette19.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette19.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        pushButton_statistique_3->setPalette(palette19);
        pushButton_statistique_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        recherche_2 = new QLineEdit(page_3);
        recherche_2->setObjectName("recherche_2");
        recherche_2->setGeometry(QRect(270, 30, 211, 41));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette20.setBrush(QPalette::Active, QPalette::Light, brush18);
        palette20.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        palette20.setBrush(QPalette::Active, QPalette::Dark, brush20);
        palette20.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush);
        palette20.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush17);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette20.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette20.setBrush(QPalette::Active, QPalette::AlternateBase, brush20);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette20.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette20.setBrush(QPalette::Inactive, QPalette::Light, brush18);
        palette20.setBrush(QPalette::Inactive, QPalette::Midlight, brush19);
        palette20.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette20.setBrush(QPalette::Inactive, QPalette::Mid, brush21);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush17);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush17);
        palette20.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush20);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette20.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette20.setBrush(QPalette::Disabled, QPalette::Light, brush18);
        palette20.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette20.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette20.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette20.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush22);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette20.setBrush(QPalette::Disabled, QPalette::Accent, brush23);
        recherche_2->setPalette(palette20);
        recherche_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        Nom = new QLabel(page_3);
        Nom->setObjectName("Nom");
        Nom->setGeometry(QRect(270, 90, 131, 31));
        Nom->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
"\n"
""));
        textnom = new QTextEdit(page_3);
        textnom->setObjectName("textnom");
        textnom->setGeometry(QRect(270, 150, 191, 31));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette21.setBrush(QPalette::Active, QPalette::Button, brush);
        palette21.setBrush(QPalette::Active, QPalette::Light, brush);
        palette21.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette21.setBrush(QPalette::Active, QPalette::Dark, brush24);
        palette21.setBrush(QPalette::Active, QPalette::Mid, brush25);
        palette21.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette21.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush);
        palette21.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette21.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Active, QPalette::PlaceholderText, brush26);
#endif
        palette21.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Dark, brush24);
        palette21.setBrush(QPalette::Inactive, QPalette::Mid, brush25);
        palette21.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
#endif
        palette21.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::Dark, brush24);
        palette21.setBrush(QPalette::Disabled, QPalette::Mid, brush25);
        palette21.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush26);
#endif
        palette21.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        textnom->setPalette(palette21);
        textnom->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        prenom = new QLabel(page_3);
        prenom->setObjectName("prenom");
        prenom->setGeometry(QRect(270, 210, 111, 31));
        prenom->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        textespecialite = new QTextEdit(page_3);
        textespecialite->setObjectName("textespecialite");
        textespecialite->setGeometry(QRect(270, 260, 191, 31));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette22.setBrush(QPalette::Active, QPalette::Button, brush);
        palette22.setBrush(QPalette::Active, QPalette::Light, brush);
        palette22.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette22.setBrush(QPalette::Active, QPalette::Dark, brush24);
        palette22.setBrush(QPalette::Active, QPalette::Mid, brush25);
        palette22.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette22.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush);
        palette22.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette22.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Active, QPalette::PlaceholderText, brush26);
#endif
        palette22.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Dark, brush24);
        palette22.setBrush(QPalette::Inactive, QPalette::Mid, brush25);
        palette22.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
#endif
        palette22.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::Dark, brush24);
        palette22.setBrush(QPalette::Disabled, QPalette::Mid, brush25);
        palette22.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush26);
#endif
        palette22.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        textespecialite->setPalette(palette22);
        textespecialite->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        disponibilite = new QLabel(page_3);
        disponibilite->setObjectName("disponibilite");
        disponibilite->setGeometry(QRect(270, 310, 131, 31));
        disponibilite->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        textdisponibilite = new QTextEdit(page_3);
        textdisponibilite->setObjectName("textdisponibilite");
        textdisponibilite->setGeometry(QRect(270, 360, 191, 31));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette23.setBrush(QPalette::Active, QPalette::Button, brush);
        palette23.setBrush(QPalette::Active, QPalette::Light, brush);
        palette23.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette23.setBrush(QPalette::Active, QPalette::Dark, brush24);
        palette23.setBrush(QPalette::Active, QPalette::Mid, brush25);
        palette23.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette23.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush);
        palette23.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette23.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette23.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette23.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Active, QPalette::PlaceholderText, brush26);
#endif
        palette23.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Dark, brush24);
        palette23.setBrush(QPalette::Inactive, QPalette::Mid, brush25);
        palette23.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette23.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
#endif
        palette23.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::Dark, brush24);
        palette23.setBrush(QPalette::Disabled, QPalette::Mid, brush25);
        palette23.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette23.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush26);
#endif
        palette23.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        textdisponibilite->setPalette(palette23);
        textdisponibilite->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        telephone = new QLabel(page_3);
        telephone->setObjectName("telephone");
        telephone->setGeometry(QRect(270, 410, 121, 31));
        telephone->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        texttelephone_2 = new QTextEdit(page_3);
        texttelephone_2->setObjectName("texttelephone_2");
        texttelephone_2->setGeometry(QRect(270, 460, 191, 31));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette24.setBrush(QPalette::Active, QPalette::Button, brush);
        palette24.setBrush(QPalette::Active, QPalette::Light, brush);
        palette24.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette24.setBrush(QPalette::Active, QPalette::Dark, brush24);
        palette24.setBrush(QPalette::Active, QPalette::Mid, brush25);
        palette24.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette24.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette24.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette24.setBrush(QPalette::Active, QPalette::Base, brush);
        palette24.setBrush(QPalette::Active, QPalette::Window, brush);
        palette24.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette24.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette24.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette24.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Active, QPalette::PlaceholderText, brush26);
#endif
        palette24.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette24.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Dark, brush24);
        palette24.setBrush(QPalette::Inactive, QPalette::Mid, brush25);
        palette24.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette24.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette24.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette24.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette24.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
#endif
        palette24.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette24.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::Dark, brush24);
        palette24.setBrush(QPalette::Disabled, QPalette::Mid, brush25);
        palette24.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette24.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette24.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette24.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette24.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush26);
#endif
        palette24.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        texttelephone_2->setPalette(palette24);
        texttelephone_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
"font: 9pt \"Segoe UI\";"));
        cin = new QLabel(page_3);
        cin->setObjectName("cin");
        cin->setGeometry(QRect(270, 510, 121, 31));
        cin->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        textcin = new QTextEdit(page_3);
        textcin->setObjectName("textcin");
        textcin->setGeometry(QRect(270, 560, 191, 31));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette25.setBrush(QPalette::Active, QPalette::Button, brush);
        palette25.setBrush(QPalette::Active, QPalette::Light, brush);
        palette25.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette25.setBrush(QPalette::Active, QPalette::Dark, brush24);
        palette25.setBrush(QPalette::Active, QPalette::Mid, brush25);
        palette25.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette25.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette25.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette25.setBrush(QPalette::Active, QPalette::Base, brush);
        palette25.setBrush(QPalette::Active, QPalette::Window, brush);
        palette25.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette25.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette25.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette25.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Active, QPalette::PlaceholderText, brush26);
#endif
        palette25.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette25.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Dark, brush24);
        palette25.setBrush(QPalette::Inactive, QPalette::Mid, brush25);
        palette25.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette25.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette25.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette25.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette25.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
#endif
        palette25.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette25.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::Dark, brush24);
        palette25.setBrush(QPalette::Disabled, QPalette::Mid, brush25);
        palette25.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette25.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette25.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette25.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette25.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush26);
#endif
        palette25.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        textcin->setPalette(palette25);
        textcin->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
"font: 9pt \"Segoe UI\";"));
        annuler_2 = new QPushButton(page_3);
        annuler_2->setObjectName("annuler_2");
        annuler_2->setGeometry(QRect(370, 660, 101, 29));
        annuler_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        annuler_2->setIcon(icon1);
        tableWidget_2 = new QTableWidget(page_3);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(510, 170, 891, 431));
        tableWidget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_6 = new QLabel(page_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(510, 140, 231, 31));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        comboBox_2 = new QComboBox(page_3);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(1200, 140, 82, 31));
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        comboBox_2->setMinimumContentsLength(0);
        identifant_2 = new QLineEdit(page_3);
        identifant_2->setObjectName("identifant_2");
        identifant_2->setGeometry(QRect(740, 140, 181, 31));
        identifant_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(page_3);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(920, 140, 121, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        label_8 = new QLabel(page_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(1060, 140, 141, 31));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        pushButton_13 = new QPushButton(page_3);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(520, 610, 281, 29));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Active, QPalette::Button, brush27);
        palette26.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette26.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette26.setBrush(QPalette::Active, QPalette::Dark, brush6);
        palette26.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette26.setBrush(QPalette::Active, QPalette::Text, brush);
        palette26.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette26.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette26.setBrush(QPalette::Active, QPalette::Base, brush27);
        palette26.setBrush(QPalette::Active, QPalette::Window, brush27);
        palette26.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette26.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette26.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette26.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette26.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette26.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::Button, brush27);
        palette26.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::Base, brush27);
        palette26.setBrush(QPalette::Inactive, QPalette::Window, brush27);
        palette26.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette26.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette26.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette26.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::Button, brush27);
        palette26.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette26.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette26.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette26.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette26.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::Base, brush27);
        palette26.setBrush(QPalette::Disabled, QPalette::Window, brush27);
        palette26.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette26.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette26.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette26.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette26.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette26.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        pushButton_13->setPalette(palette26);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(11);
        font.setWeight(QFont::DemiBold);
        font.setItalic(false);
        font.setStrikeOut(false);
        pushButton_13->setFont(font);
        pushButton_13->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        pushButton_13->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        pushButton_13->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        pushButton_13->setIcon(icon2);
        Supprimer_2 = new QPushButton(page_3);
        Supprimer_2->setObjectName("Supprimer_2");
        Supprimer_2->setGeometry(QRect(1060, 610, 281, 29));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Active, QPalette::Button, brush27);
        palette27.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette27.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette27.setBrush(QPalette::Active, QPalette::Dark, brush6);
        palette27.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette27.setBrush(QPalette::Active, QPalette::Text, brush);
        palette27.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette27.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette27.setBrush(QPalette::Active, QPalette::Base, brush27);
        palette27.setBrush(QPalette::Active, QPalette::Window, brush27);
        palette27.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette27.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette27.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette27.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette27.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette27.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette27.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Button, brush27);
        palette27.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette27.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette27.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette27.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette27.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Base, brush27);
        palette27.setBrush(QPalette::Inactive, QPalette::Window, brush27);
        palette27.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette27.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette27.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette27.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette27.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette27.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette27.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::Button, brush27);
        palette27.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette27.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette27.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette27.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette27.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::Base, brush27);
        palette27.setBrush(QPalette::Disabled, QPalette::Window, brush27);
        palette27.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette27.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette27.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette27.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette27.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette27.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        Supprimer_2->setPalette(palette27);
        Supprimer_2->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        Supprimer_2->setIcon(icon1);
        btnValider_5 = new QPushButton(page_3);
        btnValider_5->setObjectName("btnValider_5");
        btnValider_5->setGeometry(QRect(240, 660, 101, 29));
        btnValider_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        btnValider_5->setIcon(icon);
        modifier_2 = new QPushButton(page_3);
        modifier_2->setObjectName("modifier_2");
        modifier_2->setGeometry(QRect(310, 610, 90, 29));
        modifier_2->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        pushButton_statistique_2 = new QPushButton(page_3);
        pushButton_statistique_2->setObjectName("pushButton_statistique_2");
        pushButton_statistique_2->setGeometry(QRect(1060, 30, 211, 29));
        pushButton_statistique_2->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        pushButton_statistique_2->setIcon(icon3);
        pushButton_5 = new QPushButton(page_3);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(1280, 140, 41, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        pushButton_5->setIcon(icon4);
        pushButton_6 = new QPushButton(page_3);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(1320, 140, 41, 31));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        pushButton_6->setIcon(icon5);
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label = new QLabel(page_2);
        label->setObjectName("label");
        label->setGeometry(QRect(-280, 130, 1301, 421));
        label->setStyleSheet(QString::fromUtf8("image: url(:/res/ChatGPT Image 2 oct. 2025, 21_24_38.png);"));
        pushButton_retour = new QPushButton(page_2);
        pushButton_retour->setObjectName("pushButton_retour");
        pushButton_retour->setGeometry(QRect(640, 20, 301, 29));
        pushButton_retour->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        stackedWidget->addWidget(page_2);
        page = new QWidget();
        page->setObjectName("page");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        page->setFont(font1);
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(160, 40, 531, 541));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/res23/Screenshot 2025-10-03 015331.png);"));
        pushButton_retour_2 = new QPushButton(page);
        pushButton_retour_2->setObjectName("pushButton_retour_2");
        pushButton_retour_2->setGeometry(QRect(1040, 20, 301, 29));
        pushButton_retour_2->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        stackedWidget->addWidget(page);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1361, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Apprenant_2->setText(QCoreApplication::translate("MainWindow", "Apprenant", nullptr));
        Vehicule_2->setText(QCoreApplication::translate("MainWindow", "Vehicule", nullptr));
        Seance_2->setText(QCoreApplication::translate("MainWindow", "S\303\251ance ", nullptr));
        Examen_2->setText(QCoreApplication::translate("MainWindow", "Examen", nullptr));
        deconnecter_2->setText(QCoreApplication::translate("MainWindow", "Se d\303\251connecter", nullptr));
        Employe_2->setText(QCoreApplication::translate("MainWindow", "Employ\303\251", nullptr));
        recherche_6->setText(QCoreApplication::translate("MainWindow", "Ajouter une vehicule", nullptr));
        Immatriculation->setText(QCoreApplication::translate("MainWindow", "Immatriculation", nullptr));
        textModel->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        Modele->setText(QCoreApplication::translate("MainWindow", "Mod\303\250le du vehicle", nullptr));
        date->setText(QCoreApplication::translate("MainWindow", "Date assurance", nullptr));
        etat->setText(QCoreApplication::translate("MainWindow", "\303\211tat", nullptr));
        Kilometrage->setText(QCoreApplication::translate("MainWindow", "Kilom\303\251trage", nullptr));
        modifier->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        btnValider_4->setText(QCoreApplication::translate("MainWindow", "ajouter", nullptr));
        annuler_4->setText(QCoreApplication::translate("MainWindow", "annuler", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Exportation PDF", nullptr));
        Supprimer->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Recherche des vehicules :", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "valider", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">trie par</p></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "..............", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "kilometrage", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "etat", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "date assurance", nullptr));

        pushButton_statistique->setText(QCoreApplication::translate("MainWindow", "statistique", nullptr));
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        Apprenant_3->setText(QCoreApplication::translate("MainWindow", "Apprenant", nullptr));
        Vehicule_3->setText(QCoreApplication::translate("MainWindow", "Vehicule", nullptr));
        Seance_3->setText(QCoreApplication::translate("MainWindow", "S\303\251ance ", nullptr));
        Examen_3->setText(QCoreApplication::translate("MainWindow", "Examen", nullptr));
        deconnecter_3->setText(QCoreApplication::translate("MainWindow", "Se d\303\251connecter", nullptr));
        pushButton_statistique_3->setText(QCoreApplication::translate("MainWindow", "Employ\303\251", nullptr));
        recherche_2->setText(QCoreApplication::translate("MainWindow", "Ajouter un emplye", nullptr));
        Nom->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        textnom->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        prenom->setText(QCoreApplication::translate("MainWindow", "Pr\303\251nom", nullptr));
        disponibilite->setText(QCoreApplication::translate("MainWindow", "Disponibilit\303\251", nullptr));
        telephone->setText(QCoreApplication::translate("MainWindow", "T\303\251l\303\251phone", nullptr));
        cin->setText(QCoreApplication::translate("MainWindow", "CIN", nullptr));
        annuler_2->setText(QCoreApplication::translate("MainWindow", "annuler", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Recherche des emplye:", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "........", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "telephone ", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "Nom", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("MainWindow", "cin", nullptr));

        pushButton_2->setText(QCoreApplication::translate("MainWindow", "valider", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">trie par</p></body></html>", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "Exportation PDF", nullptr));
        Supprimer_2->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        btnValider_5->setText(QCoreApplication::translate("MainWindow", "ajouter", nullptr));
        modifier_2->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        pushButton_statistique_2->setText(QCoreApplication::translate("MainWindow", "statistique", nullptr));
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_retour->setText(QCoreApplication::translate("MainWindow", "retoure", nullptr));
        label_3->setText(QString());
        pushButton_retour_2->setText(QCoreApplication::translate("MainWindow", "retoure", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
