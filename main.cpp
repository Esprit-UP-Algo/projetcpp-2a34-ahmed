#include "connection.h"
#include "mainwindow.h" // تأكد من وجود هذا الملف
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // الاتصال بقاعدة البيانات أولاً
    Connection* conn = Connection::instance();

    if (conn->connect()) {
        qDebug() << "تم الاتصال بنجاح بقاعدة البيانات!";

        // إنشاء وعرض الواجهة الرئيسية
        MainWindow window;
        window.show();

        return app.exec();
    } else {
        qDebug() << "فشل في الاتصال بقاعدة البيانات!";
        return -1;
    }
}
