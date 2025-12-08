#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

#include <QMainWindow>
#include <QTableWidget>
#include <QDate>
#include <QMap>
#include <QSettings>
#include <QDebug>
#include <QMessageBox>

// Forward declarations
namespace Ui {
class MainWindow;
}
class Employee;
class Examen;
class Apprenant;
class QCalendarWidget;
class QPushButton;
class QLabel;
class QComboBox;
class QWidget;
class QTableWidget;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // ==================== EMPLOYEE SLOTS ====================
    void on_btnajouter_clicked();
    void on_btnModifier_clicked();
    void on_Supprimer_clicked();
    void on_annuler_4_clicked();
    void on_tableWidget_cellClicked(int row, int column);
    void on_pushButton_clicked();
    void on_triup_clicked();
    void on_tridown_clicked();
    void on_comboBox_currentIndexChanged(int index);

    // ==================== EXAM SLOTS ====================
    void on_btnajouter_2_clicked();
    void on_modifier_2_clicked();
    void on_Supprimer_2_clicked();
    void on_tableWidget_2_cellClicked(int row, int column);
    void on_pushButton_2_clicked();
    void on_triup_2_clicked();
    void on_tridown_2_clicked();

    // ==================== ADVANCED FEATURES SLOTS ====================
    void on_lire_clicked();
    void on_statistique_clicked();
    void on_exportPdf_clicked();
    void on_btnstat_clicked();
    void on_btnpdf_clicked();
    void on_btnsms_clicked();
    void on_calendrierButton_clicked();

    // ==================== NAVIGATION SLOTS ====================
    void on_btnmodifier_clicked();
    void on_btnsupprimer_clicked();
    void on_employe_btn_clicked();
    void on_examen_btn_clicked();
    void on_Employes_2_clicked();
    void on_Examens_2_clicked();
    void on_Apprenant_3_clicked();
    void on_Apprenant_4_clicked();
    void on_apprenant_btn_clicked();
    void on_vehicule_btn_clicked();
    void on_pushButton_ajouter_2_clicked();
    void on_annuler_3_clicked();
    void on_pushButton_modifier_2_clicked();
    void on_Supprimer_4_clicked();
    void on_pushButton_supprimer_2_clicked();
    void on_pushButton_15_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_11_clicked();
    void on_tableWidget_4_cellClicked(int row, int column);
    void on_pushButton_3_clicked();
    void on_pushButton_rechercher_by_id_2_clicked();
    void on_ajouter_clicked();
    void on_modifier_5_clicked();
    void on_annuler_7_clicked();
    void on_tab_cellClicked(int row, int column);
    void on_valider_clicked();
    void on_pushButton_alertes_clicked();
    void on_pushButton_statistique_6_clicked();
    void on_pushButton_19_clicked();
    void on_pushButton_20_clicked();
    void on_Supprimer_5_clicked();
    void on_pushButton_4_clicked();

    // ==================== CALENDAR SLOTS ====================
    void onCalendarDateClicked(const QDate &date);
    void onEmployeeFilterChanged(int index);
    void onAddAvailabilityClicked();
    void onPrevWeekClicked();
    void onNextWeekClicked();

private:
    Ui::MainWindow *ui;
    QSerialPort *arduino; // Ajouter ici
    QString serialBuffer;  // Buffer for storing incoming serial data
    void setupArduino();  // Fonction pour configurer le port série
    QString checkAvailability(const QString &cin);
    void readArduinoData();
    // Member variables
    int ligneSelectionnee;
    QString critereTriActuel;
    QDate currentWeekStart;

    // Calendar widgets
    QWidget *calendarWidget;
    QPushButton *prevWeekBtn;
    QPushButton *nextWeekBtn;
    QLabel *currentWeekLabel;
    QComboBox *employeeFilter;
    QPushButton *addAvailabilityBtn;
    QCalendarWidget *calendar;
    QTableWidget *timeSlotsTable;

    QString selectedNom;
    int selectedCin;

    // ==================== COMMON METHODS ====================
    void viderChampsEmployes();
    void viderChampsExamens();
    void viderChampsApprenants();

    // ==================== EMPLOYEE METHODS ====================
    bool validerDisponibiliter(const QString& disponibiliter);
    bool validerNomPrenom(const QString& texte);
    bool validerTelephone(const QString& telephone);
    void mettreAJourTableauEmployes();
    void afficherEmployees(const QList<Employee>& employees);
    void supprimerLigneTableau(const QString& cin);
    void lireEmployesDuTableau();
    void afficherResumeLecture(int total, int disponibles, int occupes, int conges, int absents);
    void refreshTableApprenants();
    void trierTableauApprenants(int ordre);
    void on_tableWidget_5_cellClicked(int row, int column);
    void genererPdfStatistiquesEmployes(const QString &fileName, const QList<Employee> &employees);
    void genererPdfStatistiquesApprenants(const QString &fileName, const QList<Apprenant> &apprenants);
    void refreshTableVehicules();
    void trierTableauVehicules(int ordre);
    void genererPdfStatistiquesVehicules(const QString &fileName);

    // ==================== EXAM METHODS ====================
    bool validerTypeExamen(const QString& typeExamen);
    bool validerNumero(const QString& num);
    bool validerDate(const QDate& date);
    void refreshTableExamens();
    void trierTableauExamens(int ordre);
    void afficherClientUnique(const Examen& client);
    void afficherStatistiquesModernes();
    void exporterStatistiquesPDF();
    void afficherInfoExamenProche(const Examen& examenProche);
    QString formaterMessageRappelExamen(const QString& nomClient, const QString& typeExamen, const QDate& dateExamen);
    void ouvrirWhatsApp(const QString& numero, const QString& message);
    QString trouverNomClientParNumero(const QString& numero);

    // ==================== CALENDAR METHODS ====================
    void setupCalendarUI();
    void showCalendar(bool show);
    void loadEmployeeData();
    void updateTimeSlotsTable(const QDate &date);
    void updateStatusDisplay(int row, bool available);
    void saveAvailability(const QDate &date, const QString &timeSlot, const QString &employeeId, bool available);
    QMap<QString, QString> loadAvailabilitiesForDate(const QDate &date);
    void updateCalendarView();
    void handleRFIDScan(const QString &rfidUid);
    void onArduinoReadyRead();


};

#endif // MAINWINDOW_H
