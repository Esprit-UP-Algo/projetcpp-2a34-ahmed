#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSystemTrayIcon>
#include <QMenu>
#include "arduino.h"  // Inclure la classe Arduino

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // Slots Smart Maintenance Tag
    void on_btnQRCode_clicked();
    void on_btnSmartTag_clicked();

    // Slots Arduino
    void update_label();
    void on_pushButton_clicked(); // ON
    void on_pushButton_2_clicked(); // OFF
    void on_pushButton_3_clicked(); // +
    void on_pushButton_4_clicked(); // -

    // Slots système de notification
    void on_trayIcon_activated(QSystemTrayIcon::ActivationReason reason);
    void on_show_notification();
    void on_hide_window();
    void on_restore_window();
    void on_quit_application();

    // Slots gestion véhicules
    void on_ajouter_clicked();
    void on_annuler_7_clicked();
    void on_modifier_5_clicked();
    void on_valider_clicked();
    void on_Supprimer_5_clicked();
    void on_comboBox_5_currentTextChanged(const QString &arg1);
    void on_pushButton_19_clicked();
    void on_pushButton_20_clicked();

    // Slots statistiques et navigation
    void on_pushButton_statistique_6_clicked();
    void on_pushButton_retour_3_clicked();
    void on_Employe_5_clicked();

    // Slots alertes
    void on_pushButton_alertes_clicked();
    void on_Vehicule_6_clicked();

private:
    Ui::MainWindow *ui;
    Arduino A;  // Objet Arduino

    // Membres notification
    int alertCount;
    QSystemTrayIcon *trayIcon;
    QMenu *trayMenu;
    QByteArray data;  // Données Arduino

    // Fonctions Arduino
    void mettreAJourTemperature(int temperature);
    void mettreAJourEtatVehicule(const QString& immatriculation, int temperature);

    // Fonctions Smart Maintenance Tag
    QPixmap generateQRCode(const QString& text, int size = 250);
    QString genererSmartTagData(const QString& immatriculation);
    QString getCouleurStatutVehicule(const QString& immatriculation);
    void afficherSmartTagDialog(const QString& immatriculation);
    void preparerImpressionSmartTag(const QString& immatriculation);
    void sauvegarderSmartTag(const QString& immatriculation);
    void simulerScanSmartTag(const QString& immatriculation);
    void genererQRCode();

    // Fonctions système de notification
    void setupTrayIcon();
    void updateTrayIcon();
    void showTrayNotification(const QString &title, const QString &message, int alertLevel = 0);

    // Fonctions gestion véhicules
    void chargerTousLesVehicules();
    void trierTableau(const QString& orderBy);

    // Fonctions statistiques
    void afficherStatistiquesKilometrage();

    // Fonctions alertes
    void analyserTableauPourAlertes();
    void verifierAlertesAssurance();
    void afficherAlerteAssurance(int urgentCount, int attentionCount, const QMap<QString, QVector<QString>>& vehiculesParCategorie);
    void verifierAssurances30Jours();
    void mettreAJourBoutonAlertes(int vehiculesAlerte, int vehiculesUrgents, int vehiculesExpires);
};

#endif // MAINWINDOW_H
