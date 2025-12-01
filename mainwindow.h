#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QByteArray>
#include <QMap>
#include <QVector>
#include <QSystemTrayIcon>
#include <QMenu>
#include <QAction>
#include <QPainter>
#include <QApplication>
#include <QStyle>
#include <QPushButton>

// Avant la déclaration de la classe MainWindow
class Arduino;  // Déclaration anticipée

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
    void on_Employe_5_clicked();

    // SLOTS ARDUINO
    void update_label();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

    // SLOT ALERTES INTELLIGENTES
    void on_pushButton_alertes_clicked();

    // SLOTS NOTIFICATION ICON
    void on_trayIcon_activated(QSystemTrayIcon::ActivationReason reason);
    void on_show_notification();
    void on_hide_window();
    void on_restore_window();
    void on_quit_application();

    // SLOT BOUTON Vehicule_6
    void on_Vehicule_6_clicked();

private:
    Ui::MainWindow *ui;
    Arduino *A;
    QByteArray data;
    QString originalImmatriculation;

    // NOTIFICATION ICON
    QSystemTrayIcon *trayIcon;
    QMenu *trayMenu;
    int alertCount;

    // FONCTIONS PRIVÉES
    void chargerTousLesVehicules();
    void mettreAJourTemperature(int temperature);
    void mettreAJourEtatVehicule(const QString& immatriculation, int temperature);
    void trierTableau(const QString& orderBy);
    void afficherStatistiquesKilometrage();
    void analyserTableauPourAlertes();
    void verifierAlertesAssurance();
    void afficherAlerteAssurance(int urgentCount, int attentionCount, const QMap<QString, QVector<QString>>& vehiculesParCategorie);
    void verifierAssurances30Jours();
    void mettreAJourBoutonAlertes(int vehiculesAlerte, int vehiculesUrgents, int vehiculesExpires);

    // FONCTIONS NOTIFICATION
    void setupTrayIcon();
    void showTrayNotification(const QString &title, const QString &message, int alertLevel);
    void updateTrayIcon();
};

#endif // MAINWINDOW_H
