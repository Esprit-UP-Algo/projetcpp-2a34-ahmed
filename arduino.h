#ifndef ARDUINO_H
#define ARDUINO_H

#include <QSerialPort>
#include <QSerialPortInfo>
#include <QByteArray>

class Arduino
{
public:
    Arduino();
    ~Arduino();
    int connect_arduino();
    int close_arduino();
    QByteArray read_from_arduino();
    int write_to_arduino(const QByteArray &data);
    QSerialPort* getserial();
    QString getarduino_port_name();

private:
    QSerialPort *serial;
    static const quint16 arduino_uno_vendor_id = 9025;
    static const quint16 arduino_uno_product_id = 67;
    QString arduino_port_name;
    bool arduino_is_available;
};

#endif // ARDUINO_H
