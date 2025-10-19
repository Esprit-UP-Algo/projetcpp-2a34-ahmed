#include "connection.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>

// تهيئة المؤشر الثابت
Connection* Connection::p_instance = nullptr;

// constructor الخاص
Connection::Connection()
{
    qDebug() << "تم إنشاء instance اتصال قاعدة البيانات";
}

// destructor الخاص
Connection::~Connection()
{
    QSqlDatabase db = QSqlDatabase::database();
    if (db.isOpen()) {
        db.close();
        qDebug() << "تم إغلاق اتصال قاعدة البيانات";
    }
    qDebug() << "تم تدمير instance اتصال قاعدة البيانات";
}

// طريقة للحصول على الinstance الفريدة
Connection* Connection::instance()
{
    if (p_instance == nullptr) {
        p_instance = new Connection();
    }
    return p_instance;
}

// طريقة لإنشاء الاتصال بقاعدة البيانات
bool Connection::connect()
{
    bool test = false;

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Source_Projet2A");    // اسم مصدر البيانات
    db.setUserName("ahmed");    // اسم المستخدم
    db.setPassword("esprit25");    // كلمة المرور

    if (db.open()) {
        test = true;
        qDebug() << "FÉLICITATIONS vous êtes connecté à la base de données !";
    } else {
        qDebug() << "Erreur de connexion:" << db.lastError().text();
    }

    return test;
}
