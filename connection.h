#ifndef CONNECTION_H
#define CONNECTION_H

#include <QtSql/QSqlDatabase>

class Connection
{
public:
    static Connection* instance(); // الوصول إلى الinstance الفريدة
    bool connect(); // طريقة لإنشاء الاتصال

private:
    Connection(); // constructor خاص لمنع الإنشاء الخارجي
    ~Connection(); // destructor خاص للتحكم في التدمير
    Connection(const Connection&) = delete; // حذف copy constructor
    Connection& operator=(const Connection&) = delete; // حذف assignment operator

    static Connection* p_instance; // مؤشر إلى الinstance الفريدة
};

#endif // CONNECTION_H
