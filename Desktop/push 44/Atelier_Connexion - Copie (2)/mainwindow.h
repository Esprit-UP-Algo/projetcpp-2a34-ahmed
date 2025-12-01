#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSystemTrayIcon>
#include <QMenu>
#include <QMap>
#include <QVector>
#include <QTimer>

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

protected:
    bool eventFilter(QObject *obj, QEvent *event) override;

private slots:
    // === SYSTÈME DE NOTIFICATION ===
    void setupTrayIcon();
    void updateTrayIcon();
    void showTrayNotification(const QString &title, const QString &message, int alertLevel);
    void on_trayIcon_activated(QSystemTrayIcon::ActivationReason reason);
    void on_show_notification();
    void on_hide_window();
    void on_restore_window();
    void on_quit_application();

    // === GESTION VÉHICULES ===
    void chargerTousLesVehicules();
    void on_ajouter_clicked();
    void on_annuler_7_clicked();
    void on_modifier_5_clicked();
    void on_valider_clicked();
    void on_Supprimer_5_clicked();
    void on_comboBox_5_currentTextChanged(const QString &arg1);
    void on_pushButton_19_clicked(); // Tri ascendant
    void on_pushButton_20_clicked(); // Tri descendant
    void trierTableau(const QString& orderBy);

    // === STATISTIQUES ===
    void on_pushButton_statistique_6_clicked();
    void afficherStatistiquesKilometrage();

    // === NAVIGATION ===
    void on_pushButton_retour_3_clicked();
    void on_Employe_5_clicked();

    // === ALERTES ASSURANCE ===
    void analyserTableauPourAlertes();
    void verifierAlertesAssurance();
    void afficherAlerteAssurance(int urgentCount, int attentionCount, const QMap<QString, QVector<QString>>& vehiculesParCategorie);

    // === ALERTES INTELLIGENTES ===
    void on_pushButton_alertes_clicked();
    void verifierAssurances30Jours();
    void mettreAJourBoutonAlertes(int vehiculesAlerte, int vehiculesUrgents, int vehiculesExpires);

    // === BOUTON VÉHICULE ===
    void on_Vehicule_6_clicked();
    void on_Vehicule_6_doubleClicked(); // Nouvelle fonction pour le double-clic

private:
    Ui::MainWindow *ui;

    // Système de notification
    QSystemTrayIcon *trayIcon;
    QMenu *trayMenu;
    int alertCount;

    // Timer pour détection du double-clic
    QTimer *doubleClickTimer;
    bool clickCount;

    // Méthodes privées
    void setupDoubleClick();
};

#endif // MAINWINDOW_H
