#ifndef QRCODEGENERATOR_H
#define QRCODEGENERATOR_H

#include <QPixmap>
#include <QString>

class qrcodegenerator
{
public:
    static QPixmap generateQRCode(const QString& data, int size);

private:
    static void encodeQRData(QPainter& painter, const QByteArray& data, int size, int margin);
};

#endif // QRCODEGENERATOR_H
