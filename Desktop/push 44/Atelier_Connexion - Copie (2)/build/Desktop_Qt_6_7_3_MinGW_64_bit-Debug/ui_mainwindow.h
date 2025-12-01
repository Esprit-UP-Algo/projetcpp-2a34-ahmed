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
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QFrame *frame_6;
    QPushButton *Apprenant_6;
    QPushButton *Vehicule_6;
    QPushButton *Seance_6;
    QPushButton *Examen_6;
    QPushButton *deconnecter_6;
    QPushButton *Employe_5;
    QLineEdit *recherche_8;
    QLabel *Immatriculation_2;
    QLabel *Modele_2;
    QLabel *date_2;
    QLabel *etat_2;
    QLabel *Kilometrage_2;
    QPushButton *modifier_5;
    QPushButton *ajouter;
    QPushButton *annuler_7;
    QTableWidget *tab;
    QPushButton *pushButton_17;
    QPushButton *Supprimer_5;
    QLabel *label_5;
    QLineEdit *identifant_5;
    QPushButton *valider;
    QLabel *label_12;
    QComboBox *comboBox_5;
    QPushButton *pushButton_statistique_6;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QLineEdit *Immatriculation_3;
    QLineEdit *mo;
    QLineEdit *kilo;
    QLineEdit *date_3;
    QLineEdit *ett;
    QWidget *page_3;
    QFrame *frame_7;
    QPushButton *Apprenant_7;
    QPushButton *Vehicule_7;
    QPushButton *Seance_7;
    QPushButton *Examen_7;
    QPushButton *deconnecter_7;
    QPushButton *pushButton_statistique_7;
    QLineEdit *recherche_4;
    QLabel *Nom_4;
    QTextEdit *nom_employe;
    QLabel *prenom_4;
    QTextEdit *prenom_employe;
    QLabel *disponibilite_4;
    QTextEdit *disponibilite_employe;
    QLabel *telephone_4;
    QTextEdit *telephone_employe;
    QLabel *cin_2;
    QTextEdit *cin_employe;
    QPushButton *annuler_employe;
    QTableWidget *tab_employe;
    QLabel *label_13;
    QComboBox *comboBox_6;
    QLineEdit *recherche_employe;
    QPushButton *pushButton_21;
    QLabel *label_14;
    QPushButton *pushButton_22;
    QPushButton *supprimer_employe;
    QPushButton *ajouter_employe;
    QPushButton *modifier_employe;
    QPushButton *pushButton_statistique_8;
    QPushButton *pushButton_23;
    QPushButton *pushButton_24;
    QWidget *page_2;
    QPushButton *pushButton_retour_3;
    QWidget *page_4;
    QLabel *label_16;
    QPushButton *pushButton_retour_4;
    QWidget *page_6;
    QFrame *frame_8;
    QPushButton *Apprenant_8;
    QPushButton *Vehicule_8;
    QPushButton *Seance_8;
    QPushButton *Examen_8;
    QPushButton *deconnecter_8;
    QPushButton *Employe_6;
    QLabel *Nom_5;
    QTextEdit *textnom_10;
    QTextEdit *textprenom_4;
    QLabel *specialite_4;
    QTextEdit *textprenom_5;
    QLabel *disponibilite_5;
    QTextEdit *textespecialite_6;
    QLabel *telephone_5;
    QLabel *disponibilite_11;
    QTextEdit *textespecialite_7;
    QPushButton *modifier_7;
    QPushButton *btnValider_10;
    QPushButton *annuler_8;
    QTableWidget *tableWidget_7;
    QLabel *label_17;
    QLineEdit *identifant_7;
    QPushButton *pushButton_25;
    QComboBox *comboBox_7;
    QLabel *label_18;
    QPushButton *pushButton_26;
    QPushButton *pushButton_27;
    QPushButton *pushButton_statistique_9;
    QPushButton *Supprimer_7;
    QPushButton *pushButton_28;
    QLabel *prenom_5;
    QTextEdit *textespecialite_8;
    QLineEdit *recherche_9;
    QWidget *page_5;
    QFrame *frame_9;
    QPushButton *Apprenant_9;
    QPushButton *Vehicule_9;
    QPushButton *Seance_9;
    QPushButton *Examen_9;
    QPushButton *deconnecter_9;
    QPushButton *Employe_7;
    QLabel *Nom_6;
    QTextEdit *textnom_11;
    QLabel *prenom_6;
    QLabel *specialite_5;
    QLabel *disponibilite_6;
    QLabel *telephone_6;
    QLabel *disponibilite_12;
    QTextEdit *textnom_12;
    QTextEdit *textnom_13;
    QTextEdit *textnom_14;
    QTextEdit *textnom_15;
    QTextEdit *textnom_16;
    QPushButton *modifier_8;
    QPushButton *btnValider_11;
    QPushButton *annuler_9;
    QTableWidget *tableWidget_8;
    QLabel *label_19;
    QLineEdit *identifant_8;
    QComboBox *comboBox_8;
    QLabel *label_20;
    QPushButton *pushButton_29;
    QPushButton *pushButton_30;
    QPushButton *pushButton_31;
    QPushButton *Supprimer_8;
    QPushButton *pushButton_32;
    QPushButton *pushButton_statistique_10;
    QLineEdit *recherche_5;
    QMenuBar *menuBar;
    QMenu *menummm;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1401, 701);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1581, 811));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 240, 250);"));
        stackedWidget->setFrameShape(QFrame::Shape::StyledPanel);
        stackedWidget->setLineWidth(-11);
        stackedWidget->setMidLineWidth(0);
        page1 = new QWidget();
        page1->setObjectName("page1");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(page1->sizePolicy().hasHeightForWidth());
        page1->setSizePolicy(sizePolicy);
        frame_6 = new QFrame(page1);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(0, -10, 201, 731));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);"));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        Apprenant_6 = new QPushButton(frame_6);
        Apprenant_6->setObjectName("Apprenant_6");
        Apprenant_6->setGeometry(QRect(10, 120, 171, 61));
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
        Apprenant_6->setPalette(palette);
        Apprenant_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";\n"
""));
        Vehicule_6 = new QPushButton(frame_6);
        Vehicule_6->setObjectName("Vehicule_6");
        Vehicule_6->setGeometry(QRect(10, 230, 171, 61));
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
        Vehicule_6->setPalette(palette1);
        Vehicule_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        Seance_6 = new QPushButton(frame_6);
        Seance_6->setObjectName("Seance_6");
        Seance_6->setGeometry(QRect(10, 350, 171, 61));
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
        Seance_6->setPalette(palette2);
        Seance_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        Examen_6 = new QPushButton(frame_6);
        Examen_6->setObjectName("Examen_6");
        Examen_6->setGeometry(QRect(10, 490, 171, 61));
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
        Examen_6->setPalette(palette3);
        Examen_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        deconnecter_6 = new QPushButton(frame_6);
        deconnecter_6->setObjectName("deconnecter_6");
        deconnecter_6->setGeometry(QRect(20, 640, 171, 61));
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
        deconnecter_6->setPalette(palette4);
        deconnecter_6->setStyleSheet(QString::fromUtf8("font: 350 11pt \"Segoe UI Variable\";\n"
"background-color: rgb(170, 0, 0);"));
        deconnecter_6->setCheckable(true);
        deconnecter_6->setChecked(false);
        deconnecter_6->setAutoRepeat(true);
        deconnecter_6->setAutoExclusive(true);
        deconnecter_6->setAutoRepeatDelay(366);
        Employe_5 = new QPushButton(frame_6);
        Employe_5->setObjectName("Employe_5");
        Employe_5->setGeometry(QRect(10, 20, 171, 61));
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
        Employe_5->setPalette(palette5);
        Employe_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        recherche_8 = new QLineEdit(page1);
        recherche_8->setObjectName("recherche_8");
        recherche_8->setGeometry(QRect(250, 20, 201, 41));
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
        recherche_8->setPalette(palette6);
        recherche_8->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        Immatriculation_2 = new QLabel(page1);
        Immatriculation_2->setObjectName("Immatriculation_2");
        Immatriculation_2->setGeometry(QRect(280, 100, 131, 31));
        Immatriculation_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        Modele_2 = new QLabel(page1);
        Modele_2->setObjectName("Modele_2");
        Modele_2->setGeometry(QRect(280, 190, 171, 31));
        Modele_2->setStyleSheet(QString::fromUtf8("\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 127);\n"
""));
        date_2 = new QLabel(page1);
        date_2->setObjectName("date_2");
        date_2->setEnabled(true);
        date_2->setGeometry(QRect(280, 390, 131, 31));
        date_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        etat_2 = new QLabel(page1);
        etat_2->setObjectName("etat_2");
        etat_2->setGeometry(QRect(280, 500, 151, 31));
        etat_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        Kilometrage_2 = new QLabel(page1);
        Kilometrage_2->setObjectName("Kilometrage_2");
        Kilometrage_2->setGeometry(QRect(280, 290, 131, 31));
        Kilometrage_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        modifier_5 = new QPushButton(page1);
        modifier_5->setObjectName("modifier_5");
        modifier_5->setGeometry(QRect(330, 610, 90, 29));
        modifier_5->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        ajouter = new QPushButton(page1);
        ajouter->setObjectName("ajouter");
        ajouter->setGeometry(QRect(260, 660, 90, 29));
        ajouter->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::ContactNew));
        ajouter->setIcon(icon);
        annuler_7 = new QPushButton(page1);
        annuler_7->setObjectName("annuler_7");
        annuler_7->setGeometry(QRect(400, 660, 90, 29));
        annuler_7->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::EditClear));
        annuler_7->setIcon(icon1);
        tab = new QTableWidget(page1);
        tab->setObjectName("tab");
        tab->setGeometry(QRect(500, 140, 891, 431));
        tab->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_17 = new QPushButton(page1);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setGeometry(QRect(510, 580, 281, 29));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush24(QColor(94, 198, 215, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush24);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush24);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush24);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette7.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush24);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush24);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush24);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush24);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush24);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush24);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        pushButton_17->setPalette(palette7);
        pushButton_17->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::DocumentPrint));
        pushButton_17->setIcon(icon2);
        Supprimer_5 = new QPushButton(page1);
        Supprimer_5->setObjectName("Supprimer_5");
        Supprimer_5->setGeometry(QRect(1110, 580, 281, 29));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush24);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush24);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush24);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette8.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush24);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush24);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush24);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush24);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush24);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush24);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        Supprimer_5->setPalette(palette8);
        Supprimer_5->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        Supprimer_5->setIcon(icon1);
        label_5 = new QLabel(page1);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(510, 110, 231, 31));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        identifant_5 = new QLineEdit(page1);
        identifant_5->setObjectName("identifant_5");
        identifant_5->setGeometry(QRect(730, 110, 181, 31));
        identifant_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        valider = new QPushButton(page1);
        valider->setObjectName("valider");
        valider->setGeometry(QRect(910, 110, 121, 31));
        valider->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        label_12 = new QLabel(page1);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(1040, 110, 151, 31));
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        comboBox_5 = new QComboBox(page1);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName("comboBox_5");
        comboBox_5->setGeometry(QRect(1190, 110, 82, 31));
        comboBox_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        pushButton_statistique_6 = new QPushButton(page1);
        pushButton_statistique_6->setObjectName("pushButton_statistique_6");
        pushButton_statistique_6->setGeometry(QRect(1130, 10, 211, 29));
        pushButton_statistique_6->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::EditFind));
        pushButton_statistique_6->setIcon(icon3);
        pushButton_19 = new QPushButton(page1);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setGeometry(QRect(1270, 110, 71, 31));
        pushButton_19->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::GoDown));
        pushButton_19->setIcon(icon4);
        pushButton_20 = new QPushButton(page1);
        pushButton_20->setObjectName("pushButton_20");
        pushButton_20->setGeometry(QRect(1340, 110, 61, 31));
        pushButton_20->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::GoUp));
        pushButton_20->setIcon(icon5);
        Immatriculation_3 = new QLineEdit(page1);
        Immatriculation_3->setObjectName("Immatriculation_3");
        Immatriculation_3->setGeometry(QRect(280, 150, 181, 28));
        Immatriculation_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        mo = new QLineEdit(page1);
        mo->setObjectName("mo");
        mo->setGeometry(QRect(280, 240, 161, 28));
        mo->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        kilo = new QLineEdit(page1);
        kilo->setObjectName("kilo");
        kilo->setGeometry(QRect(280, 330, 151, 28));
        kilo->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        date_3 = new QLineEdit(page1);
        date_3->setObjectName("date_3");
        date_3->setGeometry(QRect(280, 440, 161, 28));
        date_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        ett = new QLineEdit(page1);
        ett->setObjectName("ett");
        ett->setGeometry(QRect(280, 550, 171, 28));
        ett->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(page1);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        frame_7 = new QFrame(page_3);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(0, -10, 201, 731));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);"));
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        Apprenant_7 = new QPushButton(frame_7);
        Apprenant_7->setObjectName("Apprenant_7");
        Apprenant_7->setGeometry(QRect(10, 120, 171, 61));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette9.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Apprenant_7->setPalette(palette9);
        Apprenant_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";\n"
""));
        Vehicule_7 = new QPushButton(frame_7);
        Vehicule_7->setObjectName("Vehicule_7");
        Vehicule_7->setGeometry(QRect(10, 230, 171, 61));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette10.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Vehicule_7->setPalette(palette10);
        Vehicule_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        Seance_7 = new QPushButton(frame_7);
        Seance_7->setObjectName("Seance_7");
        Seance_7->setGeometry(QRect(10, 350, 171, 61));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette11.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Seance_7->setPalette(palette11);
        Seance_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::FormatIndentLess));
        Seance_7->setIcon(icon6);
        Examen_7 = new QPushButton(frame_7);
        Examen_7->setObjectName("Examen_7");
        Examen_7->setGeometry(QRect(10, 490, 171, 61));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette12.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette12.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette12.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Examen_7->setPalette(palette12);
        Examen_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        deconnecter_7 = new QPushButton(frame_7);
        deconnecter_7->setObjectName("deconnecter_7");
        deconnecter_7->setGeometry(QRect(20, 640, 171, 61));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette13.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette13.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette13.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette13.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush);
        palette13.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette13.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette13.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette13.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette13.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette13.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette13.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette13.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette13.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette13.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette13.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette13.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette13.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette13.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::Highlight, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::Accent, brush16);
        deconnecter_7->setPalette(palette13);
        deconnecter_7->setStyleSheet(QString::fromUtf8("font: 350 11pt \"Segoe UI Variable\";\n"
"background-color: rgb(170, 0, 0);"));
        deconnecter_7->setCheckable(true);
        deconnecter_7->setChecked(false);
        deconnecter_7->setAutoRepeat(true);
        deconnecter_7->setAutoExclusive(true);
        deconnecter_7->setAutoRepeatDelay(366);
        pushButton_statistique_7 = new QPushButton(frame_7);
        pushButton_statistique_7->setObjectName("pushButton_statistique_7");
        pushButton_statistique_7->setGeometry(QRect(10, 20, 171, 61));
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
        pushButton_statistique_7->setPalette(palette14);
        pushButton_statistique_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        recherche_4 = new QLineEdit(page_3);
        recherche_4->setObjectName("recherche_4");
        recherche_4->setGeometry(QRect(270, 30, 211, 41));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette15.setBrush(QPalette::Active, QPalette::Light, brush18);
        palette15.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        palette15.setBrush(QPalette::Active, QPalette::Dark, brush20);
        palette15.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush);
        palette15.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush17);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette15.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette15.setBrush(QPalette::Active, QPalette::AlternateBase, brush20);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette15.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette15.setBrush(QPalette::Inactive, QPalette::Light, brush18);
        palette15.setBrush(QPalette::Inactive, QPalette::Midlight, brush19);
        palette15.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette15.setBrush(QPalette::Inactive, QPalette::Mid, brush21);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush17);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush17);
        palette15.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush20);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette15.setBrush(QPalette::Disabled, QPalette::Light, brush18);
        palette15.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette15.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette15.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette15.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush22);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette15.setBrush(QPalette::Disabled, QPalette::Accent, brush23);
        recherche_4->setPalette(palette15);
        recherche_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        Nom_4 = new QLabel(page_3);
        Nom_4->setObjectName("Nom_4");
        Nom_4->setGeometry(QRect(270, 90, 131, 31));
        Nom_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
"\n"
""));
        nom_employe = new QTextEdit(page_3);
        nom_employe->setObjectName("nom_employe");
        nom_employe->setGeometry(QRect(270, 150, 191, 31));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush);
        palette16.setBrush(QPalette::Active, QPalette::Light, brush);
        palette16.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush25(QColor(127, 127, 127, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::Dark, brush25);
        QBrush brush26(QColor(170, 170, 170, 255));
        brush26.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::Mid, brush26);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette16.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush);
        palette16.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette16.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush27(QColor(0, 0, 0, 128));
        brush27.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush27);
#endif
        palette16.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Dark, brush25);
        palette16.setBrush(QPalette::Inactive, QPalette::Mid, brush26);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush27);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Dark, brush25);
        palette16.setBrush(QPalette::Disabled, QPalette::Mid, brush26);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        nom_employe->setPalette(palette16);
        nom_employe->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        prenom_4 = new QLabel(page_3);
        prenom_4->setObjectName("prenom_4");
        prenom_4->setGeometry(QRect(270, 210, 111, 31));
        prenom_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        prenom_employe = new QTextEdit(page_3);
        prenom_employe->setObjectName("prenom_employe");
        prenom_employe->setGeometry(QRect(270, 260, 191, 31));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush);
        palette17.setBrush(QPalette::Active, QPalette::Light, brush);
        palette17.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette17.setBrush(QPalette::Active, QPalette::Dark, brush25);
        palette17.setBrush(QPalette::Active, QPalette::Mid, brush26);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette17.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush);
        palette17.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette17.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush27);
#endif
        palette17.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Dark, brush25);
        palette17.setBrush(QPalette::Inactive, QPalette::Mid, brush26);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush27);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Dark, brush25);
        palette17.setBrush(QPalette::Disabled, QPalette::Mid, brush26);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        prenom_employe->setPalette(palette17);
        prenom_employe->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        disponibilite_4 = new QLabel(page_3);
        disponibilite_4->setObjectName("disponibilite_4");
        disponibilite_4->setGeometry(QRect(270, 310, 131, 31));
        disponibilite_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        disponibilite_employe = new QTextEdit(page_3);
        disponibilite_employe->setObjectName("disponibilite_employe");
        disponibilite_employe->setGeometry(QRect(270, 360, 191, 31));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush);
        palette18.setBrush(QPalette::Active, QPalette::Light, brush);
        palette18.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette18.setBrush(QPalette::Active, QPalette::Dark, brush25);
        palette18.setBrush(QPalette::Active, QPalette::Mid, brush26);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette18.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush);
        palette18.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette18.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush27);
#endif
        palette18.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Dark, brush25);
        palette18.setBrush(QPalette::Inactive, QPalette::Mid, brush26);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush27);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Dark, brush25);
        palette18.setBrush(QPalette::Disabled, QPalette::Mid, brush26);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        palette18.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        disponibilite_employe->setPalette(palette18);
        disponibilite_employe->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        telephone_4 = new QLabel(page_3);
        telephone_4->setObjectName("telephone_4");
        telephone_4->setGeometry(QRect(270, 410, 121, 31));
        telephone_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        telephone_employe = new QTextEdit(page_3);
        telephone_employe->setObjectName("telephone_employe");
        telephone_employe->setGeometry(QRect(270, 460, 191, 31));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush);
        palette19.setBrush(QPalette::Active, QPalette::Light, brush);
        palette19.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette19.setBrush(QPalette::Active, QPalette::Dark, brush25);
        palette19.setBrush(QPalette::Active, QPalette::Mid, brush26);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette19.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush);
        palette19.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette19.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Active, QPalette::PlaceholderText, brush27);
#endif
        palette19.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Dark, brush25);
        palette19.setBrush(QPalette::Inactive, QPalette::Mid, brush26);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush27);
#endif
        palette19.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Dark, brush25);
        palette19.setBrush(QPalette::Disabled, QPalette::Mid, brush26);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        palette19.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        telephone_employe->setPalette(palette19);
        telephone_employe->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
"font: 9pt \"Segoe UI\";"));
        cin_2 = new QLabel(page_3);
        cin_2->setObjectName("cin_2");
        cin_2->setGeometry(QRect(270, 510, 121, 31));
        cin_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        cin_employe = new QTextEdit(page_3);
        cin_employe->setObjectName("cin_employe");
        cin_employe->setGeometry(QRect(270, 560, 191, 31));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush);
        palette20.setBrush(QPalette::Active, QPalette::Light, brush);
        palette20.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette20.setBrush(QPalette::Active, QPalette::Dark, brush25);
        palette20.setBrush(QPalette::Active, QPalette::Mid, brush26);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette20.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush);
        palette20.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette20.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Active, QPalette::PlaceholderText, brush27);
#endif
        palette20.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Dark, brush25);
        palette20.setBrush(QPalette::Inactive, QPalette::Mid, brush26);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush27);
#endif
        palette20.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Dark, brush25);
        palette20.setBrush(QPalette::Disabled, QPalette::Mid, brush26);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        palette20.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        cin_employe->setPalette(palette20);
        cin_employe->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
"font: 9pt \"Segoe UI\";"));
        annuler_employe = new QPushButton(page_3);
        annuler_employe->setObjectName("annuler_employe");
        annuler_employe->setGeometry(QRect(370, 660, 101, 29));
        annuler_employe->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        annuler_employe->setIcon(icon1);
        tab_employe = new QTableWidget(page_3);
        tab_employe->setObjectName("tab_employe");
        tab_employe->setGeometry(QRect(510, 170, 891, 431));
        tab_employe->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_13 = new QLabel(page_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(510, 140, 231, 31));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        comboBox_6 = new QComboBox(page_3);
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName("comboBox_6");
        comboBox_6->setGeometry(QRect(1200, 140, 82, 31));
        comboBox_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        comboBox_6->setMinimumContentsLength(0);
        recherche_employe = new QLineEdit(page_3);
        recherche_employe->setObjectName("recherche_employe");
        recherche_employe->setGeometry(QRect(740, 140, 181, 31));
        recherche_employe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_21 = new QPushButton(page_3);
        pushButton_21->setObjectName("pushButton_21");
        pushButton_21->setGeometry(QRect(920, 140, 121, 31));
        pushButton_21->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        label_14 = new QLabel(page_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(1060, 140, 141, 31));
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        pushButton_22 = new QPushButton(page_3);
        pushButton_22->setObjectName("pushButton_22");
        pushButton_22->setGeometry(QRect(520, 610, 281, 29));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Active, QPalette::Button, brush24);
        palette21.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette21.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette21.setBrush(QPalette::Active, QPalette::Dark, brush6);
        palette21.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette21.setBrush(QPalette::Active, QPalette::Text, brush);
        palette21.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush24);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush24);
        palette21.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette21.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette21.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette21.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush24);
        palette21.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush24);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush24);
        palette21.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette21.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush24);
        palette21.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush24);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush24);
        palette21.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette21.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        pushButton_22->setPalette(palette21);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(11);
        font.setWeight(QFont::DemiBold);
        font.setItalic(false);
        font.setStrikeOut(false);
        pushButton_22->setFont(font);
        pushButton_22->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        pushButton_22->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        pushButton_22->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        pushButton_22->setIcon(icon2);
        supprimer_employe = new QPushButton(page_3);
        supprimer_employe->setObjectName("supprimer_employe");
        supprimer_employe->setGeometry(QRect(1060, 610, 281, 29));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Active, QPalette::Button, brush24);
        palette22.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette22.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette22.setBrush(QPalette::Active, QPalette::Dark, brush6);
        palette22.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette22.setBrush(QPalette::Active, QPalette::Text, brush);
        palette22.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush24);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush24);
        palette22.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette22.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette22.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette22.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush24);
        palette22.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush24);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush24);
        palette22.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette22.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush24);
        palette22.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush24);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush24);
        palette22.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette22.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        supprimer_employe->setPalette(palette22);
        supprimer_employe->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        supprimer_employe->setIcon(icon1);
        ajouter_employe = new QPushButton(page_3);
        ajouter_employe->setObjectName("ajouter_employe");
        ajouter_employe->setGeometry(QRect(240, 660, 101, 29));
        ajouter_employe->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        ajouter_employe->setIcon(icon);
        modifier_employe = new QPushButton(page_3);
        modifier_employe->setObjectName("modifier_employe");
        modifier_employe->setGeometry(QRect(310, 610, 90, 29));
        modifier_employe->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        pushButton_statistique_8 = new QPushButton(page_3);
        pushButton_statistique_8->setObjectName("pushButton_statistique_8");
        pushButton_statistique_8->setGeometry(QRect(1060, 30, 211, 29));
        pushButton_statistique_8->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        pushButton_statistique_8->setIcon(icon3);
        pushButton_23 = new QPushButton(page_3);
        pushButton_23->setObjectName("pushButton_23");
        pushButton_23->setGeometry(QRect(1280, 140, 41, 31));
        pushButton_23->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        pushButton_23->setIcon(icon4);
        pushButton_24 = new QPushButton(page_3);
        pushButton_24->setObjectName("pushButton_24");
        pushButton_24->setGeometry(QRect(1320, 140, 41, 31));
        pushButton_24->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        pushButton_24->setIcon(icon5);
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        pushButton_retour_3 = new QPushButton(page_2);
        pushButton_retour_3->setObjectName("pushButton_retour_3");
        pushButton_retour_3->setGeometry(QRect(640, 20, 301, 29));
        pushButton_retour_3->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        stackedWidget->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        page_4->setFont(font1);
        label_16 = new QLabel(page_4);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(160, 40, 531, 541));
        label_16->setStyleSheet(QString::fromUtf8("background-image: url(:/res23/Screenshot 2025-10-03 015331.png);"));
        pushButton_retour_4 = new QPushButton(page_4);
        pushButton_retour_4->setObjectName("pushButton_retour_4");
        pushButton_retour_4->setGeometry(QRect(1040, 20, 301, 29));
        pushButton_retour_4->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        stackedWidget->addWidget(page_4);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        frame_8 = new QFrame(page_6);
        frame_8->setObjectName("frame_8");
        frame_8->setGeometry(QRect(0, 0, 201, 731));
        frame_8->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);"));
        frame_8->setFrameShape(QFrame::Shape::StyledPanel);
        frame_8->setFrameShadow(QFrame::Shadow::Raised);
        Apprenant_8 = new QPushButton(frame_8);
        Apprenant_8->setObjectName("Apprenant_8");
        Apprenant_8->setGeometry(QRect(10, 120, 171, 61));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette23.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette23.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette23.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette23.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette23.setBrush(QPalette::Active, QPalette::Text, brush);
        palette23.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette23.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette23.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette23.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette23.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette23.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette23.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette23.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette23.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette23.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette23.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette23.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette23.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette23.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette23.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette23.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette23.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette23.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette23.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette23.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Apprenant_8->setPalette(palette23);
        Apprenant_8->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";\n"
""));
        Vehicule_8 = new QPushButton(frame_8);
        Vehicule_8->setObjectName("Vehicule_8");
        Vehicule_8->setGeometry(QRect(10, 230, 171, 61));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette24.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette24.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette24.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette24.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette24.setBrush(QPalette::Active, QPalette::Text, brush);
        palette24.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette24.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette24.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette24.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette24.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette24.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette24.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette24.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette24.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette24.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette24.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette24.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette24.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette24.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette24.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette24.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette24.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette24.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette24.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette24.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette24.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette24.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette24.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette24.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette24.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette24.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette24.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette24.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette24.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette24.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Vehicule_8->setPalette(palette24);
        Vehicule_8->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        Seance_8 = new QPushButton(frame_8);
        Seance_8->setObjectName("Seance_8");
        Seance_8->setGeometry(QRect(10, 350, 171, 61));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette25.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette25.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette25.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette25.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette25.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette25.setBrush(QPalette::Active, QPalette::Text, brush);
        palette25.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette25.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette25.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette25.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette25.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette25.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette25.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette25.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette25.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette25.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette25.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette25.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette25.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette25.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette25.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette25.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette25.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette25.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette25.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette25.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette25.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette25.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette25.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette25.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette25.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette25.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette25.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette25.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette25.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette25.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette25.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette25.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Seance_8->setPalette(palette25);
        Seance_8->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        Examen_8 = new QPushButton(frame_8);
        Examen_8->setObjectName("Examen_8");
        Examen_8->setGeometry(QRect(10, 490, 171, 61));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette26.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette26.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette26.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette26.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette26.setBrush(QPalette::Active, QPalette::Text, brush);
        palette26.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette26.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette26.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette26.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette26.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette26.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette26.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette26.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette26.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette26.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette26.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette26.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette26.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette26.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette26.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette26.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette26.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette26.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette26.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette26.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette26.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette26.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette26.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette26.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette26.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette26.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette26.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette26.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette26.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette26.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette26.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette26.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette26.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Examen_8->setPalette(palette26);
        Examen_8->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        deconnecter_8 = new QPushButton(frame_8);
        deconnecter_8->setObjectName("deconnecter_8");
        deconnecter_8->setGeometry(QRect(20, 640, 171, 61));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette27.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette27.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette27.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette27.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette27.setBrush(QPalette::Active, QPalette::Text, brush);
        palette27.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette27.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette27.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette27.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette27.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette27.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette27.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette27.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette27.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette27.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette27.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette27.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette27.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette27.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette27.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette27.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette27.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette27.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette27.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette27.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette27.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette27.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette27.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette27.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette27.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette27.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette27.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette27.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette27.setBrush(QPalette::Disabled, QPalette::Highlight, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette27.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette27.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette27.setBrush(QPalette::Disabled, QPalette::Accent, brush16);
        deconnecter_8->setPalette(palette27);
        deconnecter_8->setStyleSheet(QString::fromUtf8("font: 350 11pt \"Segoe UI Variable\";\n"
"background-color: rgb(170, 0, 0);"));
        deconnecter_8->setCheckable(true);
        deconnecter_8->setChecked(false);
        deconnecter_8->setAutoRepeat(true);
        deconnecter_8->setAutoExclusive(true);
        deconnecter_8->setAutoRepeatDelay(366);
        Employe_6 = new QPushButton(frame_8);
        Employe_6->setObjectName("Employe_6");
        Employe_6->setGeometry(QRect(10, 20, 171, 61));
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette28.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette28.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette28.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette28.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette28.setBrush(QPalette::Active, QPalette::Text, brush);
        palette28.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette28.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette28.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette28.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette28.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette28.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette28.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette28.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette28.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette28.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette28.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette28.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette28.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette28.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette28.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette28.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette28.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette28.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette28.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette28.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette28.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette28.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette28.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette28.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette28.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette28.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette28.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette28.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette28.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette28.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Employe_6->setPalette(palette28);
        Employe_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        Nom_5 = new QLabel(page_6);
        Nom_5->setObjectName("Nom_5");
        Nom_5->setGeometry(QRect(300, 80, 171, 31));
        Nom_5->setStyleSheet(QString::fromUtf8("\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 127);\n"
""));
        textnom_10 = new QTextEdit(page_6);
        textnom_10->setObjectName("textnom_10");
        textnom_10->setGeometry(QRect(300, 130, 191, 31));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette29.setBrush(QPalette::Active, QPalette::Button, brush);
        palette29.setBrush(QPalette::Active, QPalette::Light, brush);
        palette29.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette29.setBrush(QPalette::Active, QPalette::Dark, brush25);
        palette29.setBrush(QPalette::Active, QPalette::Mid, brush26);
        palette29.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette29.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette29.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette29.setBrush(QPalette::Active, QPalette::Base, brush);
        palette29.setBrush(QPalette::Active, QPalette::Window, brush);
        palette29.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette29.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette29.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette29.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Active, QPalette::PlaceholderText, brush27);
#endif
        palette29.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette29.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::Dark, brush25);
        palette29.setBrush(QPalette::Inactive, QPalette::Mid, brush26);
        palette29.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette29.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette29.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette29.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette29.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush27);
#endif
        palette29.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette29.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::Dark, brush25);
        palette29.setBrush(QPalette::Disabled, QPalette::Mid, brush26);
        palette29.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette29.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette29.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette29.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette29.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        palette29.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        textnom_10->setPalette(palette29);
        textnom_10->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        textprenom_4 = new QTextEdit(page_6);
        textprenom_4->setObjectName("textprenom_4");
        textprenom_4->setGeometry(QRect(300, 230, 191, 31));
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette30.setBrush(QPalette::Active, QPalette::Button, brush);
        palette30.setBrush(QPalette::Active, QPalette::Light, brush);
        palette30.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette30.setBrush(QPalette::Active, QPalette::Dark, brush25);
        palette30.setBrush(QPalette::Active, QPalette::Mid, brush26);
        palette30.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette30.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette30.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette30.setBrush(QPalette::Active, QPalette::Base, brush);
        palette30.setBrush(QPalette::Active, QPalette::Window, brush);
        palette30.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette30.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette30.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette30.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Active, QPalette::PlaceholderText, brush27);
#endif
        palette30.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette30.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::Dark, brush25);
        palette30.setBrush(QPalette::Inactive, QPalette::Mid, brush26);
        palette30.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette30.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette30.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette30.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette30.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush27);
#endif
        palette30.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette30.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::Dark, brush25);
        palette30.setBrush(QPalette::Disabled, QPalette::Mid, brush26);
        palette30.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette30.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette30.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette30.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette30.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        palette30.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        textprenom_4->setPalette(palette30);
        textprenom_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        specialite_4 = new QLabel(page_6);
        specialite_4->setObjectName("specialite_4");
        specialite_4->setGeometry(QRect(300, 280, 181, 31));
        specialite_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        textprenom_5 = new QTextEdit(page_6);
        textprenom_5->setObjectName("textprenom_5");
        textprenom_5->setGeometry(QRect(300, 330, 191, 31));
        QPalette palette31;
        palette31.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette31.setBrush(QPalette::Active, QPalette::Button, brush);
        palette31.setBrush(QPalette::Active, QPalette::Light, brush);
        palette31.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette31.setBrush(QPalette::Active, QPalette::Dark, brush25);
        palette31.setBrush(QPalette::Active, QPalette::Mid, brush26);
        palette31.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette31.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette31.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette31.setBrush(QPalette::Active, QPalette::Base, brush);
        palette31.setBrush(QPalette::Active, QPalette::Window, brush);
        palette31.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette31.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette31.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette31.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette31.setBrush(QPalette::Active, QPalette::PlaceholderText, brush27);
#endif
        palette31.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette31.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::Dark, brush25);
        palette31.setBrush(QPalette::Inactive, QPalette::Mid, brush26);
        palette31.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette31.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette31.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette31.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette31.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette31.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush27);
#endif
        palette31.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette31.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::Dark, brush25);
        palette31.setBrush(QPalette::Disabled, QPalette::Mid, brush26);
        palette31.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette31.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette31.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette31.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette31.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette31.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        palette31.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        textprenom_5->setPalette(palette31);
        textprenom_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        textprenom_5->setLineWrapColumnOrWidth(0);
        disponibilite_5 = new QLabel(page_6);
        disponibilite_5->setObjectName("disponibilite_5");
        disponibilite_5->setGeometry(QRect(300, 370, 151, 31));
        disponibilite_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        textespecialite_6 = new QTextEdit(page_6);
        textespecialite_6->setObjectName("textespecialite_6");
        textespecialite_6->setGeometry(QRect(300, 420, 191, 31));
        QPalette palette32;
        palette32.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette32.setBrush(QPalette::Active, QPalette::Button, brush);
        palette32.setBrush(QPalette::Active, QPalette::Light, brush);
        palette32.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette32.setBrush(QPalette::Active, QPalette::Dark, brush25);
        palette32.setBrush(QPalette::Active, QPalette::Mid, brush26);
        palette32.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette32.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette32.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette32.setBrush(QPalette::Active, QPalette::Base, brush);
        palette32.setBrush(QPalette::Active, QPalette::Window, brush);
        palette32.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette32.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette32.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette32.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette32.setBrush(QPalette::Active, QPalette::PlaceholderText, brush27);
#endif
        palette32.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette32.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::Dark, brush25);
        palette32.setBrush(QPalette::Inactive, QPalette::Mid, brush26);
        palette32.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette32.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette32.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette32.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette32.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette32.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush27);
#endif
        palette32.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette32.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette32.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette32.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette32.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette32.setBrush(QPalette::Disabled, QPalette::Dark, brush25);
        palette32.setBrush(QPalette::Disabled, QPalette::Mid, brush26);
        palette32.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette32.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette32.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette32.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette32.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette32.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette32.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette32.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette32.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette32.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        palette32.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        textespecialite_6->setPalette(palette32);
        textespecialite_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        telephone_5 = new QLabel(page_6);
        telephone_5->setObjectName("telephone_5");
        telephone_5->setGeometry(QRect(300, 460, 171, 31));
        telephone_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        disponibilite_11 = new QLabel(page_6);
        disponibilite_11->setObjectName("disponibilite_11");
        disponibilite_11->setGeometry(QRect(300, 550, 181, 31));
        disponibilite_11->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        textespecialite_7 = new QTextEdit(page_6);
        textespecialite_7->setObjectName("textespecialite_7");
        textespecialite_7->setGeometry(QRect(300, 600, 191, 31));
        QPalette palette33;
        palette33.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette33.setBrush(QPalette::Active, QPalette::Button, brush);
        palette33.setBrush(QPalette::Active, QPalette::Light, brush);
        palette33.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette33.setBrush(QPalette::Active, QPalette::Dark, brush25);
        palette33.setBrush(QPalette::Active, QPalette::Mid, brush26);
        palette33.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette33.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette33.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette33.setBrush(QPalette::Active, QPalette::Base, brush);
        palette33.setBrush(QPalette::Active, QPalette::Window, brush);
        palette33.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette33.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette33.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette33.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::Active, QPalette::PlaceholderText, brush27);
#endif
        palette33.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette33.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::Dark, brush25);
        palette33.setBrush(QPalette::Inactive, QPalette::Mid, brush26);
        palette33.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette33.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette33.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette33.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette33.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush27);
#endif
        palette33.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette33.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette33.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette33.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette33.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette33.setBrush(QPalette::Disabled, QPalette::Dark, brush25);
        palette33.setBrush(QPalette::Disabled, QPalette::Mid, brush26);
        palette33.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette33.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette33.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette33.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette33.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette33.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette33.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette33.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette33.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        palette33.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        textespecialite_7->setPalette(palette33);
        textespecialite_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        modifier_7 = new QPushButton(page_6);
        modifier_7->setObjectName("modifier_7");
        modifier_7->setGeometry(QRect(350, 650, 90, 29));
        modifier_7->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        btnValider_10 = new QPushButton(page_6);
        btnValider_10->setObjectName("btnValider_10");
        btnValider_10->setGeometry(QRect(270, 690, 90, 29));
        btnValider_10->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        btnValider_10->setIcon(icon);
        annuler_8 = new QPushButton(page_6);
        annuler_8->setObjectName("annuler_8");
        annuler_8->setGeometry(QRect(420, 690, 90, 29));
        annuler_8->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        annuler_8->setIcon(icon1);
        tableWidget_7 = new QTableWidget(page_6);
        tableWidget_7->setObjectName("tableWidget_7");
        tableWidget_7->setGeometry(QRect(580, 180, 891, 431));
        tableWidget_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_17 = new QLabel(page_6);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(580, 150, 231, 31));
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        identifant_7 = new QLineEdit(page_6);
        identifant_7->setObjectName("identifant_7");
        identifant_7->setGeometry(QRect(800, 150, 181, 31));
        identifant_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_25 = new QPushButton(page_6);
        pushButton_25->setObjectName("pushButton_25");
        pushButton_25->setGeometry(QRect(980, 150, 121, 31));
        pushButton_25->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        comboBox_7 = new QComboBox(page_6);
        comboBox_7->addItem(QString());
        comboBox_7->addItem(QString());
        comboBox_7->setObjectName("comboBox_7");
        comboBox_7->setGeometry(QRect(1270, 150, 82, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_7->sizePolicy().hasHeightForWidth());
        comboBox_7->setSizePolicy(sizePolicy1);
        comboBox_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_18 = new QLabel(page_6);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(1120, 150, 151, 31));
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        pushButton_26 = new QPushButton(page_6);
        pushButton_26->setObjectName("pushButton_26");
        pushButton_26->setGeometry(QRect(1350, 150, 61, 31));
        pushButton_26->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        pushButton_26->setIcon(icon4);
        pushButton_27 = new QPushButton(page_6);
        pushButton_27->setObjectName("pushButton_27");
        pushButton_27->setGeometry(QRect(1410, 150, 61, 31));
        pushButton_27->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        pushButton_27->setIcon(icon5);
        pushButton_statistique_9 = new QPushButton(page_6);
        pushButton_statistique_9->setObjectName("pushButton_statistique_9");
        pushButton_statistique_9->setGeometry(QRect(1180, 20, 211, 29));
        pushButton_statistique_9->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        pushButton_statistique_9->setIcon(icon3);
        Supprimer_7 = new QPushButton(page_6);
        Supprimer_7->setObjectName("Supprimer_7");
        Supprimer_7->setGeometry(QRect(1140, 620, 281, 29));
        QPalette palette34;
        palette34.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette34.setBrush(QPalette::Active, QPalette::Button, brush24);
        palette34.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette34.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette34.setBrush(QPalette::Active, QPalette::Dark, brush6);
        palette34.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette34.setBrush(QPalette::Active, QPalette::Text, brush);
        palette34.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette34.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette34.setBrush(QPalette::Active, QPalette::Base, brush24);
        palette34.setBrush(QPalette::Active, QPalette::Window, brush24);
        palette34.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette34.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette34.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette34.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette34.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette34.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette34.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette34.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette34.setBrush(QPalette::Inactive, QPalette::Button, brush24);
        palette34.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette34.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette34.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette34.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette34.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette34.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette34.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette34.setBrush(QPalette::Inactive, QPalette::Base, brush24);
        palette34.setBrush(QPalette::Inactive, QPalette::Window, brush24);
        palette34.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette34.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette34.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette34.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette34.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette34.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette34.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette34.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette34.setBrush(QPalette::Disabled, QPalette::Button, brush24);
        palette34.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette34.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette34.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette34.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette34.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette34.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette34.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette34.setBrush(QPalette::Disabled, QPalette::Base, brush24);
        palette34.setBrush(QPalette::Disabled, QPalette::Window, brush24);
        palette34.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette34.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette34.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette34.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette34.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette34.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette34.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        Supprimer_7->setPalette(palette34);
        Supprimer_7->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        Supprimer_7->setIcon(icon1);
        pushButton_28 = new QPushButton(page_6);
        pushButton_28->setObjectName("pushButton_28");
        pushButton_28->setGeometry(QRect(620, 620, 281, 29));
        QPalette palette35;
        palette35.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette35.setBrush(QPalette::Active, QPalette::Button, brush24);
        palette35.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette35.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette35.setBrush(QPalette::Active, QPalette::Dark, brush6);
        palette35.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette35.setBrush(QPalette::Active, QPalette::Text, brush);
        palette35.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette35.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette35.setBrush(QPalette::Active, QPalette::Base, brush24);
        palette35.setBrush(QPalette::Active, QPalette::Window, brush24);
        palette35.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette35.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette35.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette35.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette35.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette35.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette35.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette35.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette35.setBrush(QPalette::Inactive, QPalette::Button, brush24);
        palette35.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette35.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette35.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette35.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette35.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette35.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette35.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette35.setBrush(QPalette::Inactive, QPalette::Base, brush24);
        palette35.setBrush(QPalette::Inactive, QPalette::Window, brush24);
        palette35.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette35.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette35.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette35.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette35.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette35.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette35.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette35.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette35.setBrush(QPalette::Disabled, QPalette::Button, brush24);
        palette35.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette35.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette35.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette35.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette35.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette35.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette35.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette35.setBrush(QPalette::Disabled, QPalette::Base, brush24);
        palette35.setBrush(QPalette::Disabled, QPalette::Window, brush24);
        palette35.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette35.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette35.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette35.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette35.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette35.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette35.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        pushButton_28->setPalette(palette35);
        pushButton_28->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        pushButton_28->setIcon(icon2);
        prenom_5 = new QLabel(page_6);
        prenom_5->setObjectName("prenom_5");
        prenom_5->setGeometry(QRect(300, 180, 161, 31));
        prenom_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        textespecialite_8 = new QTextEdit(page_6);
        textespecialite_8->setObjectName("textespecialite_8");
        textespecialite_8->setGeometry(QRect(300, 510, 191, 31));
        QPalette palette36;
        palette36.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette36.setBrush(QPalette::Active, QPalette::Button, brush);
        palette36.setBrush(QPalette::Active, QPalette::Light, brush);
        palette36.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette36.setBrush(QPalette::Active, QPalette::Dark, brush25);
        palette36.setBrush(QPalette::Active, QPalette::Mid, brush26);
        palette36.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette36.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette36.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette36.setBrush(QPalette::Active, QPalette::Base, brush);
        palette36.setBrush(QPalette::Active, QPalette::Window, brush);
        palette36.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette36.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette36.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette36.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette36.setBrush(QPalette::Active, QPalette::PlaceholderText, brush27);
#endif
        palette36.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette36.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette36.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette36.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette36.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette36.setBrush(QPalette::Inactive, QPalette::Dark, brush25);
        palette36.setBrush(QPalette::Inactive, QPalette::Mid, brush26);
        palette36.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette36.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette36.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette36.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette36.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette36.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette36.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette36.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette36.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette36.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush27);
#endif
        palette36.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette36.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette36.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette36.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette36.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette36.setBrush(QPalette::Disabled, QPalette::Dark, brush25);
        palette36.setBrush(QPalette::Disabled, QPalette::Mid, brush26);
        palette36.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette36.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette36.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette36.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette36.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette36.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette36.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette36.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette36.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette36.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        palette36.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        textespecialite_8->setPalette(palette36);
        textespecialite_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        recherche_9 = new QLineEdit(page_6);
        recherche_9->setObjectName("recherche_9");
        recherche_9->setGeometry(QRect(300, 20, 201, 41));
        QPalette palette37;
        palette37.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette37.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette37.setBrush(QPalette::Active, QPalette::Light, brush18);
        palette37.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        palette37.setBrush(QPalette::Active, QPalette::Dark, brush20);
        palette37.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette37.setBrush(QPalette::Active, QPalette::Text, brush);
        palette37.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette37.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette37.setBrush(QPalette::Active, QPalette::Base, brush17);
        palette37.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette37.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette37.setBrush(QPalette::Active, QPalette::AlternateBase, brush20);
        palette37.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette37.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette37.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette37.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette37.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette37.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette37.setBrush(QPalette::Inactive, QPalette::Light, brush18);
        palette37.setBrush(QPalette::Inactive, QPalette::Midlight, brush19);
        palette37.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette37.setBrush(QPalette::Inactive, QPalette::Mid, brush21);
        palette37.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette37.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette37.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette37.setBrush(QPalette::Inactive, QPalette::Base, brush17);
        palette37.setBrush(QPalette::Inactive, QPalette::Window, brush17);
        palette37.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette37.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush20);
        palette37.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette37.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette37.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette37.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette37.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette37.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette37.setBrush(QPalette::Disabled, QPalette::Light, brush18);
        palette37.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette37.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette37.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette37.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette37.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette37.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette37.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette37.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette37.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette37.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush22);
        palette37.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette37.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette37.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette37.setBrush(QPalette::Disabled, QPalette::Accent, brush23);
        recherche_9->setPalette(palette37);
        recherche_9->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        stackedWidget->addWidget(page_6);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        frame_9 = new QFrame(page_5);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(0, 0, 201, 731));
        frame_9->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);"));
        frame_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_9->setFrameShadow(QFrame::Shadow::Raised);
        Apprenant_9 = new QPushButton(frame_9);
        Apprenant_9->setObjectName("Apprenant_9");
        Apprenant_9->setGeometry(QRect(10, 120, 171, 61));
        QPalette palette38;
        palette38.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette38.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette38.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette38.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette38.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette38.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette38.setBrush(QPalette::Active, QPalette::Text, brush);
        palette38.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette38.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette38.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette38.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette38.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette38.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette38.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette38.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette38.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette38.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette38.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette38.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette38.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette38.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette38.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette38.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette38.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette38.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette38.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette38.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette38.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette38.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette38.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette38.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette38.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette38.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette38.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette38.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette38.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette38.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette38.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette38.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette38.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette38.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette38.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette38.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette38.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette38.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette38.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette38.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette38.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette38.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette38.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette38.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette38.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette38.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette38.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Apprenant_9->setPalette(palette38);
        Apprenant_9->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";\n"
""));
        Vehicule_9 = new QPushButton(frame_9);
        Vehicule_9->setObjectName("Vehicule_9");
        Vehicule_9->setGeometry(QRect(10, 230, 171, 61));
        QPalette palette39;
        palette39.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette39.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette39.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette39.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette39.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette39.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette39.setBrush(QPalette::Active, QPalette::Text, brush);
        palette39.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette39.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette39.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette39.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette39.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette39.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette39.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette39.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette39.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette39.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette39.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette39.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette39.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette39.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette39.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette39.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette39.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette39.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette39.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette39.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette39.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette39.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette39.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette39.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette39.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette39.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette39.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette39.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette39.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette39.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette39.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette39.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette39.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette39.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette39.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette39.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette39.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette39.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette39.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette39.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette39.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette39.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette39.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette39.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette39.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette39.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette39.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Vehicule_9->setPalette(palette39);
        Vehicule_9->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        Seance_9 = new QPushButton(frame_9);
        Seance_9->setObjectName("Seance_9");
        Seance_9->setGeometry(QRect(10, 350, 171, 61));
        QPalette palette40;
        palette40.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette40.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette40.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette40.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette40.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette40.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette40.setBrush(QPalette::Active, QPalette::Text, brush);
        palette40.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette40.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette40.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette40.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette40.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette40.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette40.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette40.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette40.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette40.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette40.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette40.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette40.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette40.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette40.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette40.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette40.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette40.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette40.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette40.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette40.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette40.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette40.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette40.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette40.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette40.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette40.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette40.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette40.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette40.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette40.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette40.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette40.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette40.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette40.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette40.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette40.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette40.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette40.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette40.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette40.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette40.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette40.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette40.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette40.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette40.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette40.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Seance_9->setPalette(palette40);
        Seance_9->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        Examen_9 = new QPushButton(frame_9);
        Examen_9->setObjectName("Examen_9");
        Examen_9->setGeometry(QRect(10, 490, 171, 61));
        QPalette palette41;
        palette41.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette41.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette41.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette41.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette41.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette41.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette41.setBrush(QPalette::Active, QPalette::Text, brush);
        palette41.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette41.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette41.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette41.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette41.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette41.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette41.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette41.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette41.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette41.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette41.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette41.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette41.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette41.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette41.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette41.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette41.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette41.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette41.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette41.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette41.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette41.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette41.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette41.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette41.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette41.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette41.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette41.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette41.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette41.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette41.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette41.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette41.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette41.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette41.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette41.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette41.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette41.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette41.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette41.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette41.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette41.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette41.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette41.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette41.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette41.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette41.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Examen_9->setPalette(palette41);
        Examen_9->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        deconnecter_9 = new QPushButton(frame_9);
        deconnecter_9->setObjectName("deconnecter_9");
        deconnecter_9->setGeometry(QRect(20, 640, 171, 61));
        QPalette palette42;
        palette42.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette42.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette42.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette42.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette42.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette42.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette42.setBrush(QPalette::Active, QPalette::Text, brush);
        palette42.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette42.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette42.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette42.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette42.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette42.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette42.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette42.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette42.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette42.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette42.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette42.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette42.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette42.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette42.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette42.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette42.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette42.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette42.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette42.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette42.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette42.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette42.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette42.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette42.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette42.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette42.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette42.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette42.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette42.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette42.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette42.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette42.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette42.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette42.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette42.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette42.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette42.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette42.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette42.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette42.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette42.setBrush(QPalette::Disabled, QPalette::Highlight, brush);
        palette42.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette42.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette42.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette42.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette42.setBrush(QPalette::Disabled, QPalette::Accent, brush16);
        deconnecter_9->setPalette(palette42);
        deconnecter_9->setStyleSheet(QString::fromUtf8("font: 350 11pt \"Segoe UI Variable\";\n"
"background-color: rgb(170, 0, 0);"));
        deconnecter_9->setCheckable(true);
        deconnecter_9->setChecked(false);
        deconnecter_9->setAutoRepeat(true);
        deconnecter_9->setAutoExclusive(true);
        deconnecter_9->setAutoRepeatDelay(366);
        Employe_7 = new QPushButton(frame_9);
        Employe_7->setObjectName("Employe_7");
        Employe_7->setGeometry(QRect(10, 20, 171, 61));
        QPalette palette43;
        palette43.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette43.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette43.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette43.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette43.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette43.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette43.setBrush(QPalette::Active, QPalette::Text, brush);
        palette43.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette43.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette43.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette43.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette43.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette43.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette43.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette43.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette43.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette43.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette43.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette43.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette43.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette43.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette43.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette43.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette43.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette43.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette43.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette43.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette43.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette43.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette43.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette43.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette43.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette43.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette43.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette43.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette43.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette43.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette43.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette43.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette43.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette43.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette43.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette43.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette43.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette43.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette43.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette43.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette43.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette43.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette43.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette43.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette43.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette43.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette43.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        Employe_7->setPalette(palette43);
        Employe_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        Nom_6 = new QLabel(page_5);
        Nom_6->setObjectName("Nom_6");
        Nom_6->setGeometry(QRect(300, 90, 171, 31));
        Nom_6->setStyleSheet(QString::fromUtf8("\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 127);\n"
""));
        textnom_11 = new QTextEdit(page_5);
        textnom_11->setObjectName("textnom_11");
        textnom_11->setGeometry(QRect(300, 130, 191, 31));
        QPalette palette44;
        palette44.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette44.setBrush(QPalette::Active, QPalette::Button, brush);
        palette44.setBrush(QPalette::Active, QPalette::Light, brush);
        palette44.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette44.setBrush(QPalette::Active, QPalette::Dark, brush25);
        palette44.setBrush(QPalette::Active, QPalette::Mid, brush26);
        palette44.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette44.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette44.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette44.setBrush(QPalette::Active, QPalette::Base, brush);
        palette44.setBrush(QPalette::Active, QPalette::Window, brush);
        palette44.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette44.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette44.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette44.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette44.setBrush(QPalette::Active, QPalette::PlaceholderText, brush27);
#endif
        palette44.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette44.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette44.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette44.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette44.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette44.setBrush(QPalette::Inactive, QPalette::Dark, brush25);
        palette44.setBrush(QPalette::Inactive, QPalette::Mid, brush26);
        palette44.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette44.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette44.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette44.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette44.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette44.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette44.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette44.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette44.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette44.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush27);
#endif
        palette44.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette44.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette44.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette44.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette44.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette44.setBrush(QPalette::Disabled, QPalette::Dark, brush25);
        palette44.setBrush(QPalette::Disabled, QPalette::Mid, brush26);
        palette44.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette44.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette44.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette44.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette44.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette44.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette44.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette44.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette44.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette44.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        palette44.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        textnom_11->setPalette(palette44);
        textnom_11->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        prenom_6 = new QLabel(page_5);
        prenom_6->setObjectName("prenom_6");
        prenom_6->setGeometry(QRect(300, 170, 131, 31));
        prenom_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        specialite_5 = new QLabel(page_5);
        specialite_5->setObjectName("specialite_5");
        specialite_5->setGeometry(QRect(300, 550, 131, 31));
        specialite_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        disponibilite_6 = new QLabel(page_5);
        disponibilite_6->setObjectName("disponibilite_6");
        disponibilite_6->setGeometry(QRect(300, 360, 151, 31));
        disponibilite_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        telephone_6 = new QLabel(page_5);
        telephone_6->setObjectName("telephone_6");
        telephone_6->setGeometry(QRect(300, 450, 131, 31));
        telephone_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        disponibilite_12 = new QLabel(page_5);
        disponibilite_12->setObjectName("disponibilite_12");
        disponibilite_12->setGeometry(QRect(300, 260, 151, 31));
        disponibilite_12->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 600 11pt \"Segoe UI\";\n"
"\n"
""));
        textnom_12 = new QTextEdit(page_5);
        textnom_12->setObjectName("textnom_12");
        textnom_12->setGeometry(QRect(300, 210, 191, 31));
        QPalette palette45;
        palette45.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette45.setBrush(QPalette::Active, QPalette::Button, brush);
        palette45.setBrush(QPalette::Active, QPalette::Light, brush);
        palette45.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette45.setBrush(QPalette::Active, QPalette::Dark, brush25);
        palette45.setBrush(QPalette::Active, QPalette::Mid, brush26);
        palette45.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette45.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette45.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette45.setBrush(QPalette::Active, QPalette::Base, brush);
        palette45.setBrush(QPalette::Active, QPalette::Window, brush);
        palette45.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette45.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette45.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette45.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette45.setBrush(QPalette::Active, QPalette::PlaceholderText, brush27);
#endif
        palette45.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette45.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette45.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette45.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette45.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette45.setBrush(QPalette::Inactive, QPalette::Dark, brush25);
        palette45.setBrush(QPalette::Inactive, QPalette::Mid, brush26);
        palette45.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette45.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette45.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette45.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette45.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette45.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette45.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette45.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette45.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette45.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush27);
#endif
        palette45.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette45.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette45.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette45.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette45.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette45.setBrush(QPalette::Disabled, QPalette::Dark, brush25);
        palette45.setBrush(QPalette::Disabled, QPalette::Mid, brush26);
        palette45.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette45.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette45.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette45.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette45.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette45.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette45.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette45.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette45.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette45.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        palette45.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        textnom_12->setPalette(palette45);
        textnom_12->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        textnom_13 = new QTextEdit(page_5);
        textnom_13->setObjectName("textnom_13");
        textnom_13->setGeometry(QRect(300, 500, 191, 31));
        QPalette palette46;
        palette46.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette46.setBrush(QPalette::Active, QPalette::Button, brush);
        palette46.setBrush(QPalette::Active, QPalette::Light, brush);
        palette46.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette46.setBrush(QPalette::Active, QPalette::Dark, brush25);
        palette46.setBrush(QPalette::Active, QPalette::Mid, brush26);
        palette46.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette46.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette46.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette46.setBrush(QPalette::Active, QPalette::Base, brush);
        palette46.setBrush(QPalette::Active, QPalette::Window, brush);
        palette46.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette46.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette46.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette46.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette46.setBrush(QPalette::Active, QPalette::PlaceholderText, brush27);
#endif
        palette46.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette46.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette46.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette46.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette46.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette46.setBrush(QPalette::Inactive, QPalette::Dark, brush25);
        palette46.setBrush(QPalette::Inactive, QPalette::Mid, brush26);
        palette46.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette46.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette46.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette46.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette46.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette46.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette46.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette46.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette46.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette46.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush27);
#endif
        palette46.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette46.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette46.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette46.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette46.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette46.setBrush(QPalette::Disabled, QPalette::Dark, brush25);
        palette46.setBrush(QPalette::Disabled, QPalette::Mid, brush26);
        palette46.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette46.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette46.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette46.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette46.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette46.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette46.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette46.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette46.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette46.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        palette46.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        textnom_13->setPalette(palette46);
        textnom_13->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        textnom_14 = new QTextEdit(page_5);
        textnom_14->setObjectName("textnom_14");
        textnom_14->setGeometry(QRect(300, 410, 191, 31));
        QPalette palette47;
        palette47.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette47.setBrush(QPalette::Active, QPalette::Button, brush);
        palette47.setBrush(QPalette::Active, QPalette::Light, brush);
        palette47.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette47.setBrush(QPalette::Active, QPalette::Dark, brush25);
        palette47.setBrush(QPalette::Active, QPalette::Mid, brush26);
        palette47.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette47.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette47.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette47.setBrush(QPalette::Active, QPalette::Base, brush);
        palette47.setBrush(QPalette::Active, QPalette::Window, brush);
        palette47.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette47.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette47.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette47.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette47.setBrush(QPalette::Active, QPalette::PlaceholderText, brush27);
#endif
        palette47.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette47.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette47.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette47.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette47.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette47.setBrush(QPalette::Inactive, QPalette::Dark, brush25);
        palette47.setBrush(QPalette::Inactive, QPalette::Mid, brush26);
        palette47.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette47.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette47.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette47.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette47.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette47.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette47.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette47.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette47.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette47.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush27);
#endif
        palette47.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette47.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette47.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette47.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette47.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette47.setBrush(QPalette::Disabled, QPalette::Dark, brush25);
        palette47.setBrush(QPalette::Disabled, QPalette::Mid, brush26);
        palette47.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette47.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette47.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette47.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette47.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette47.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette47.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette47.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette47.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette47.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        palette47.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        textnom_14->setPalette(palette47);
        textnom_14->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        textnom_15 = new QTextEdit(page_5);
        textnom_15->setObjectName("textnom_15");
        textnom_15->setGeometry(QRect(300, 310, 191, 31));
        QPalette palette48;
        palette48.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette48.setBrush(QPalette::Active, QPalette::Button, brush);
        palette48.setBrush(QPalette::Active, QPalette::Light, brush);
        palette48.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette48.setBrush(QPalette::Active, QPalette::Dark, brush25);
        palette48.setBrush(QPalette::Active, QPalette::Mid, brush26);
        palette48.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette48.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette48.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette48.setBrush(QPalette::Active, QPalette::Base, brush);
        palette48.setBrush(QPalette::Active, QPalette::Window, brush);
        palette48.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette48.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette48.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette48.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette48.setBrush(QPalette::Active, QPalette::PlaceholderText, brush27);
#endif
        palette48.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette48.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette48.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette48.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette48.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette48.setBrush(QPalette::Inactive, QPalette::Dark, brush25);
        palette48.setBrush(QPalette::Inactive, QPalette::Mid, brush26);
        palette48.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette48.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette48.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette48.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette48.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette48.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette48.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette48.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette48.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette48.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush27);
#endif
        palette48.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette48.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette48.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette48.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette48.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette48.setBrush(QPalette::Disabled, QPalette::Dark, brush25);
        palette48.setBrush(QPalette::Disabled, QPalette::Mid, brush26);
        palette48.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette48.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette48.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette48.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette48.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette48.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette48.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette48.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette48.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette48.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        palette48.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        textnom_15->setPalette(palette48);
        textnom_15->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        textnom_16 = new QTextEdit(page_5);
        textnom_16->setObjectName("textnom_16");
        textnom_16->setGeometry(QRect(300, 600, 191, 31));
        QPalette palette49;
        palette49.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette49.setBrush(QPalette::Active, QPalette::Button, brush);
        palette49.setBrush(QPalette::Active, QPalette::Light, brush);
        palette49.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette49.setBrush(QPalette::Active, QPalette::Dark, brush25);
        palette49.setBrush(QPalette::Active, QPalette::Mid, brush26);
        palette49.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette49.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette49.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette49.setBrush(QPalette::Active, QPalette::Base, brush);
        palette49.setBrush(QPalette::Active, QPalette::Window, brush);
        palette49.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette49.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette49.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette49.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette49.setBrush(QPalette::Active, QPalette::PlaceholderText, brush27);
#endif
        palette49.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette49.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::Dark, brush25);
        palette49.setBrush(QPalette::Inactive, QPalette::Mid, brush26);
        palette49.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette49.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette49.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette49.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette49.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette49.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush27);
#endif
        palette49.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette49.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette49.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette49.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette49.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette49.setBrush(QPalette::Disabled, QPalette::Dark, brush25);
        palette49.setBrush(QPalette::Disabled, QPalette::Mid, brush26);
        palette49.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette49.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette49.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette49.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette49.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette49.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette49.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette49.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette49.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette49.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        palette49.setBrush(QPalette::Disabled, QPalette::Accent, brush);
        textnom_16->setPalette(palette49);
        textnom_16->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        modifier_8 = new QPushButton(page_5);
        modifier_8->setObjectName("modifier_8");
        modifier_8->setGeometry(QRect(350, 640, 90, 29));
        modifier_8->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        btnValider_11 = new QPushButton(page_5);
        btnValider_11->setObjectName("btnValider_11");
        btnValider_11->setGeometry(QRect(260, 690, 90, 29));
        btnValider_11->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        btnValider_11->setIcon(icon);
        annuler_9 = new QPushButton(page_5);
        annuler_9->setObjectName("annuler_9");
        annuler_9->setGeometry(QRect(440, 690, 90, 29));
        annuler_9->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127);\n"
"font: 350 11pt \"Segoe UI Variable\";"));
        annuler_9->setIcon(icon1);
        tableWidget_8 = new QTableWidget(page_5);
        tableWidget_8->setObjectName("tableWidget_8");
        tableWidget_8->setGeometry(QRect(550, 160, 891, 431));
        tableWidget_8->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_19 = new QLabel(page_5);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(550, 130, 231, 31));
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        identifant_8 = new QLineEdit(page_5);
        identifant_8->setObjectName("identifant_8");
        identifant_8->setGeometry(QRect(770, 130, 181, 31));
        identifant_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        comboBox_8 = new QComboBox(page_5);
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->setObjectName("comboBox_8");
        comboBox_8->setGeometry(QRect(1240, 130, 82, 31));
        comboBox_8->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_20 = new QLabel(page_5);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(1090, 130, 151, 31));
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        pushButton_29 = new QPushButton(page_5);
        pushButton_29->setObjectName("pushButton_29");
        pushButton_29->setGeometry(QRect(1320, 130, 61, 31));
        pushButton_29->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        pushButton_29->setIcon(icon4);
        pushButton_30 = new QPushButton(page_5);
        pushButton_30->setObjectName("pushButton_30");
        pushButton_30->setGeometry(QRect(1380, 130, 61, 31));
        pushButton_30->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        pushButton_30->setIcon(icon5);
        pushButton_31 = new QPushButton(page_5);
        pushButton_31->setObjectName("pushButton_31");
        pushButton_31->setGeometry(QRect(950, 130, 121, 31));
        pushButton_31->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        Supprimer_8 = new QPushButton(page_5);
        Supprimer_8->setObjectName("Supprimer_8");
        Supprimer_8->setGeometry(QRect(1150, 600, 281, 29));
        QPalette palette50;
        palette50.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette50.setBrush(QPalette::Active, QPalette::Button, brush24);
        palette50.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette50.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette50.setBrush(QPalette::Active, QPalette::Dark, brush6);
        palette50.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette50.setBrush(QPalette::Active, QPalette::Text, brush);
        palette50.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette50.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette50.setBrush(QPalette::Active, QPalette::Base, brush24);
        palette50.setBrush(QPalette::Active, QPalette::Window, brush24);
        palette50.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette50.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette50.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette50.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette50.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette50.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette50.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette50.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette50.setBrush(QPalette::Inactive, QPalette::Button, brush24);
        palette50.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette50.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette50.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette50.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette50.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette50.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette50.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette50.setBrush(QPalette::Inactive, QPalette::Base, brush24);
        palette50.setBrush(QPalette::Inactive, QPalette::Window, brush24);
        palette50.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette50.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette50.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette50.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette50.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette50.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette50.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette50.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette50.setBrush(QPalette::Disabled, QPalette::Button, brush24);
        palette50.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette50.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette50.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette50.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette50.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette50.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette50.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette50.setBrush(QPalette::Disabled, QPalette::Base, brush24);
        palette50.setBrush(QPalette::Disabled, QPalette::Window, brush24);
        palette50.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette50.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette50.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette50.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette50.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette50.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette50.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        Supprimer_8->setPalette(palette50);
        Supprimer_8->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        Supprimer_8->setIcon(icon1);
        pushButton_32 = new QPushButton(page_5);
        pushButton_32->setObjectName("pushButton_32");
        pushButton_32->setGeometry(QRect(560, 600, 281, 29));
        QPalette palette51;
        palette51.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette51.setBrush(QPalette::Active, QPalette::Button, brush24);
        palette51.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette51.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette51.setBrush(QPalette::Active, QPalette::Dark, brush6);
        palette51.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette51.setBrush(QPalette::Active, QPalette::Text, brush);
        palette51.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette51.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette51.setBrush(QPalette::Active, QPalette::Base, brush24);
        palette51.setBrush(QPalette::Active, QPalette::Window, brush24);
        palette51.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette51.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette51.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette51.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette51.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette51.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette51.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette51.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette51.setBrush(QPalette::Inactive, QPalette::Button, brush24);
        palette51.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette51.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette51.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette51.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette51.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette51.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette51.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette51.setBrush(QPalette::Inactive, QPalette::Base, brush24);
        palette51.setBrush(QPalette::Inactive, QPalette::Window, brush24);
        palette51.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette51.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette51.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette51.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette51.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette51.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette51.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette51.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette51.setBrush(QPalette::Disabled, QPalette::Button, brush24);
        palette51.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette51.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette51.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette51.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette51.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette51.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette51.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette51.setBrush(QPalette::Disabled, QPalette::Base, brush24);
        palette51.setBrush(QPalette::Disabled, QPalette::Window, brush24);
        palette51.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette51.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette51.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette51.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette51.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette51.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette51.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        pushButton_32->setPalette(palette51);
        pushButton_32->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        pushButton_32->setIcon(icon2);
        pushButton_statistique_10 = new QPushButton(page_5);
        pushButton_statistique_10->setObjectName("pushButton_statistique_10");
        pushButton_statistique_10->setGeometry(QRect(1220, 40, 211, 29));
        pushButton_statistique_10->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 198, 215);\n"
"font: 600 11pt \"Segoe UI\";\n"
""));
        pushButton_statistique_10->setIcon(icon3);
        recherche_5 = new QLineEdit(page_5);
        recherche_5->setObjectName("recherche_5");
        recherche_5->setGeometry(QRect(300, 30, 211, 41));
        QPalette palette52;
        palette52.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette52.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette52.setBrush(QPalette::Active, QPalette::Light, brush18);
        palette52.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        palette52.setBrush(QPalette::Active, QPalette::Dark, brush20);
        palette52.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette52.setBrush(QPalette::Active, QPalette::Text, brush);
        palette52.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette52.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette52.setBrush(QPalette::Active, QPalette::Base, brush17);
        palette52.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette52.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette52.setBrush(QPalette::Active, QPalette::AlternateBase, brush20);
        palette52.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette52.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette52.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette52.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette52.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette52.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette52.setBrush(QPalette::Inactive, QPalette::Light, brush18);
        palette52.setBrush(QPalette::Inactive, QPalette::Midlight, brush19);
        palette52.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette52.setBrush(QPalette::Inactive, QPalette::Mid, brush21);
        palette52.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette52.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette52.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette52.setBrush(QPalette::Inactive, QPalette::Base, brush17);
        palette52.setBrush(QPalette::Inactive, QPalette::Window, brush17);
        palette52.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette52.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush20);
        palette52.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette52.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette52.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette52.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette52.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette52.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette52.setBrush(QPalette::Disabled, QPalette::Light, brush18);
        palette52.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette52.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette52.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette52.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette52.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette52.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette52.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette52.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette52.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette52.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush22);
        palette52.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette52.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette52.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        palette52.setBrush(QPalette::Disabled, QPalette::Accent, brush23);
        recherche_5->setPalette(palette52);
        recherche_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"font: 600 11pt \"Segoe UI\";\n"
"background-color: rgb(0, 170, 255);"));
        stackedWidget->addWidget(page_5);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1401, 26));
        menummm = new QMenu(menuBar);
        menummm->setObjectName("menummm");
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menummm->menuAction());

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gestion des Clients", nullptr));
        Apprenant_6->setText(QCoreApplication::translate("MainWindow", "Apprenant", nullptr));
        Vehicule_6->setText(QCoreApplication::translate("MainWindow", "Vehicule", nullptr));
        Seance_6->setText(QCoreApplication::translate("MainWindow", "S\303\251ance ", nullptr));
        Examen_6->setText(QCoreApplication::translate("MainWindow", "Examen", nullptr));
        deconnecter_6->setText(QCoreApplication::translate("MainWindow", "Se d\303\251connecter", nullptr));
        Employe_5->setText(QCoreApplication::translate("MainWindow", "Employ\303\251", nullptr));
        recherche_8->setText(QCoreApplication::translate("MainWindow", "Ajouter une vehicule", nullptr));
        Immatriculation_2->setText(QCoreApplication::translate("MainWindow", "Immatriculation", nullptr));
        Modele_2->setText(QCoreApplication::translate("MainWindow", "Mod\303\250le du vehicle", nullptr));
        date_2->setText(QCoreApplication::translate("MainWindow", "Date assurance", nullptr));
        etat_2->setText(QCoreApplication::translate("MainWindow", "\303\211tat", nullptr));
        Kilometrage_2->setText(QCoreApplication::translate("MainWindow", "Kilom\303\251trage", nullptr));
        modifier_5->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        ajouter->setText(QCoreApplication::translate("MainWindow", "ajouter", nullptr));
        annuler_7->setText(QCoreApplication::translate("MainWindow", "annuler", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "Exportation PDF", nullptr));
        Supprimer_5->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Recherche des vehicules :", nullptr));
        valider->setText(QCoreApplication::translate("MainWindow", "valider", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">trie par</p></body></html>", nullptr));
        comboBox_5->setItemText(0, QCoreApplication::translate("MainWindow", "..............", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("MainWindow", "kilometrage", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("MainWindow", "etat", nullptr));
        comboBox_5->setItemText(3, QCoreApplication::translate("MainWindow", "date assurance", nullptr));

        pushButton_statistique_6->setText(QCoreApplication::translate("MainWindow", "statistique", nullptr));
        pushButton_19->setText(QString());
        pushButton_20->setText(QString());
        Apprenant_7->setText(QCoreApplication::translate("MainWindow", "Apprenant", nullptr));
        Vehicule_7->setText(QCoreApplication::translate("MainWindow", "Vehicule", nullptr));
        Seance_7->setText(QCoreApplication::translate("MainWindow", "S\303\251ance ", nullptr));
        Examen_7->setText(QCoreApplication::translate("MainWindow", "Examen", nullptr));
        deconnecter_7->setText(QCoreApplication::translate("MainWindow", "Se d\303\251connecter", nullptr));
        pushButton_statistique_7->setText(QCoreApplication::translate("MainWindow", "Employ\303\251", nullptr));
        recherche_4->setText(QCoreApplication::translate("MainWindow", "Ajouter un emplye", nullptr));
        Nom_4->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        nom_employe->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        prenom_4->setText(QCoreApplication::translate("MainWindow", "Pr\303\251nom", nullptr));
        disponibilite_4->setText(QCoreApplication::translate("MainWindow", "Disponibilit\303\251", nullptr));
        telephone_4->setText(QCoreApplication::translate("MainWindow", "T\303\251l\303\251phone", nullptr));
        cin_2->setText(QCoreApplication::translate("MainWindow", "CIN", nullptr));
        annuler_employe->setText(QCoreApplication::translate("MainWindow", "annuler", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Recherche des emplye:", nullptr));
        comboBox_6->setItemText(0, QCoreApplication::translate("MainWindow", "........", nullptr));
        comboBox_6->setItemText(1, QCoreApplication::translate("MainWindow", "telephone ", nullptr));
        comboBox_6->setItemText(2, QCoreApplication::translate("MainWindow", "Nom", nullptr));
        comboBox_6->setItemText(3, QCoreApplication::translate("MainWindow", "cin", nullptr));

        pushButton_21->setText(QCoreApplication::translate("MainWindow", "valider", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">trie par</p></body></html>", nullptr));
        pushButton_22->setText(QCoreApplication::translate("MainWindow", "Exportation PDF", nullptr));
        supprimer_employe->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        ajouter_employe->setText(QCoreApplication::translate("MainWindow", "ajouter", nullptr));
        modifier_employe->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        pushButton_statistique_8->setText(QCoreApplication::translate("MainWindow", "statistique", nullptr));
        pushButton_23->setText(QString());
        pushButton_24->setText(QString());
        pushButton_retour_3->setText(QCoreApplication::translate("MainWindow", "retoure", nullptr));
        label_16->setText(QString());
        pushButton_retour_4->setText(QCoreApplication::translate("MainWindow", "retoure", nullptr));
        Apprenant_8->setText(QCoreApplication::translate("MainWindow", "Apprenant", nullptr));
        Vehicule_8->setText(QCoreApplication::translate("MainWindow", "Vehicule", nullptr));
        Seance_8->setText(QCoreApplication::translate("MainWindow", "S\303\251ance ", nullptr));
        Examen_8->setText(QCoreApplication::translate("MainWindow", "Examen", nullptr));
        deconnecter_8->setText(QCoreApplication::translate("MainWindow", "Se d\303\251connecter", nullptr));
        Employe_6->setText(QCoreApplication::translate("MainWindow", "Employ\303\251", nullptr));
        Nom_5->setText(QCoreApplication::translate("MainWindow", "Id Exeman", nullptr));
        textnom_10->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        specialite_4->setText(QCoreApplication::translate("MainWindow", "Nom d\342\200\231examinateur", nullptr));
        disponibilite_5->setText(QCoreApplication::translate("MainWindow", "Type d\342\200\231examan", nullptr));
        telephone_5->setText(QCoreApplication::translate("MainWindow", "Date-de l\342\200\231examan", nullptr));
        disponibilite_11->setText(QCoreApplication::translate("MainWindow", "Heure-de l\342\200\231examan", nullptr));
        modifier_7->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        btnValider_10->setText(QCoreApplication::translate("MainWindow", "ajouter", nullptr));
        annuler_8->setText(QCoreApplication::translate("MainWindow", "annuler", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Recherche des Examen:", nullptr));
        pushButton_25->setText(QCoreApplication::translate("MainWindow", "valider", nullptr));
        comboBox_7->setItemText(0, QCoreApplication::translate("MainWindow", "id", nullptr));
        comboBox_7->setItemText(1, QCoreApplication::translate("MainWindow", "date ", nullptr));

        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">trie par</p></body></html>", nullptr));
        pushButton_26->setText(QString());
        pushButton_27->setText(QString());
        pushButton_statistique_9->setText(QCoreApplication::translate("MainWindow", "statistique", nullptr));
        Supprimer_7->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        pushButton_28->setText(QCoreApplication::translate("MainWindow", "Exportation PDF", nullptr));
        prenom_5->setText(QCoreApplication::translate("MainWindow", "Nom d\342\200\231apprenant", nullptr));
        recherche_9->setText(QCoreApplication::translate("MainWindow", "Ajouter un Exeman", nullptr));
        Apprenant_9->setText(QCoreApplication::translate("MainWindow", "Apprenant", nullptr));
        Vehicule_9->setText(QCoreApplication::translate("MainWindow", "Vehicule", nullptr));
        Seance_9->setText(QCoreApplication::translate("MainWindow", "S\303\251ance ", nullptr));
        Examen_9->setText(QCoreApplication::translate("MainWindow", "Examen", nullptr));
        deconnecter_9->setText(QCoreApplication::translate("MainWindow", "Se d\303\251connecter", nullptr));
        Employe_7->setText(QCoreApplication::translate("MainWindow", "Employ\303\251", nullptr));
        Nom_6->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        textnom_11->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        prenom_6->setText(QCoreApplication::translate("MainWindow", "Prenom", nullptr));
        specialite_5->setText(QCoreApplication::translate("MainWindow", "N tel", nullptr));
        disponibilite_6->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        telephone_6->setText(QCoreApplication::translate("MainWindow", "Mot de passe", nullptr));
        disponibilite_12->setText(QCoreApplication::translate("MainWindow", "CIN", nullptr));
        textnom_12->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textnom_13->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textnom_14->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textnom_15->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textnom_16->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        modifier_8->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        btnValider_11->setText(QCoreApplication::translate("MainWindow", "ajouter", nullptr));
        annuler_9->setText(QCoreApplication::translate("MainWindow", "annuler", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Recherche des Apprenant", nullptr));
        comboBox_8->setItemText(0, QCoreApplication::translate("MainWindow", ".........", nullptr));
        comboBox_8->setItemText(1, QCoreApplication::translate("MainWindow", "Nom", nullptr));
        comboBox_8->setItemText(2, QCoreApplication::translate("MainWindow", "N tel", nullptr));
        comboBox_8->setItemText(3, QCoreApplication::translate("MainWindow", "CIN", nullptr));

        label_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">trie par</p></body></html>", nullptr));
        pushButton_29->setText(QString());
        pushButton_30->setText(QString());
        pushButton_31->setText(QCoreApplication::translate("MainWindow", "valider", nullptr));
        Supprimer_8->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        pushButton_32->setText(QCoreApplication::translate("MainWindow", "Exportation PDF", nullptr));
        pushButton_statistique_10->setText(QCoreApplication::translate("MainWindow", "statistique", nullptr));
        recherche_5->setText(QCoreApplication::translate("MainWindow", "Ajouter un Apprenant", nullptr));
        menummm->setTitle(QCoreApplication::translate("MainWindow", "mmm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
