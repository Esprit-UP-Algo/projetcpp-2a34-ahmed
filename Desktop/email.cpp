#include "email.h"
#include <QtNetwork>
#include <QDebug>
#include <QFileInfo>
#include <QByteArray>
#include <QTextStream>
#include <QtGui>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QPrintPreviewDialog>
#include <QtWidgets>
#include <QtNetwork>
#include <QFileDialog>
#include <QDateTime>
#include <QSslSocket>
#include <QDesktopServices>
#include <QUrl>

int Email::sendEmail(QString dist, QString obj, QString bdy)
{
    QString smtpServer = qEnvironmentVariable("SMTP_SERVER", "smtp.gmail.com");
    QByteArray portEnv = qgetenv("SMTP_PORT");
    int smtpPort = portEnv.isEmpty() ? 465 : QString::fromUtf8(portEnv).toInt();
    QString username = qEnvironmentVariable("SMTP_USERNAME");
    QString password = qEnvironmentVariable("SMTP_PASSWORD");
    QString from = qEnvironmentVariable("SMTP_FROM", username);

    if (username.isEmpty() || password.isEmpty() || from.isEmpty()) {
        qWarning() << "SMTP credentials missing. Set SMTP_USERNAME, SMTP_PASSWORD, SMTP_FROM.";
        return -1;
    }

    QString to = dist.trimmed();
    QString subject = obj.trimmed();
    QString body = bdy;

    if (!to.contains('@')) {
        qWarning() << "Invalid recipient address:" << to;
        return -1;
    }

    auto sendImplicitTls = [&](const QString &host, int port) -> int {
        QSslSocket s;
        s.connectToHostEncrypted(host, port);
        if (!s.waitForConnected(15000)) return -1;
        if (!s.waitForReadyRead(15000)) return -1;
        auto w = [&](const QByteArray &cmd){ s.write(cmd); if (!s.waitForBytesWritten(10000)) return false; return s.waitForReadyRead(15000); };
        if (!w("EHLO localhost\r\n")) return -1;
        if (!w("AUTH LOGIN\r\n")) return -1;
        if (!w(QByteArray(username.toUtf8()).toBase64() + "\r\n")) return -1;
        if (!w(QByteArray(password.toUtf8()).toBase64() + "\r\n")) return -1;
        if (!w("MAIL FROM:<" + from.toUtf8() + ">\r\n")) return -1;
        if (!w("RCPT TO:<" + to.toUtf8() + ">\r\n")) return -1;
        if (!w("DATA\r\n")) return -1;
        QByteArray p;
        p += "From: " + from.toUtf8() + "\r\n";
        p += "To: " + to.toUtf8() + "\r\n";
        p += "Subject: " + subject.toUtf8() + "\r\n";
        p += "Date: " + QDateTime::currentDateTimeUtc().toString("ddd, dd MMM yyyy HH:mm:ss +0000").toUtf8() + "\r\n";
        p += "MIME-Version: 1.0\r\n";
        p += "Content-Type: text/plain; charset=UTF-8\r\n";
        p += "Content-Transfer-Encoding: 8bit\r\n\r\n";
        p += body.toUtf8() + "\r\n.\r\n";
        if (!w(p)) return -1;
        if (!w("QUIT\r\n")) return -1;
        s.close();
        return 0;
    };

    auto sendStartTls587 = [&](const QString &host) -> int {
        QSslSocket s;
        s.connectToHost(host, 587);
        if (!s.waitForConnected(15000)) return -1;
        if (!s.waitForReadyRead(15000)) return -1;
        auto w = [&](const QByteArray &cmd){ s.write(cmd); if (!s.waitForBytesWritten(10000)) return false; return s.waitForReadyRead(15000); };
        if (!w("EHLO localhost\r\n")) return -1;
        if (!w("STARTTLS\r\n")) return -1;
        s.startClientEncryption();
        if (!s.waitForEncrypted(15000)) return -1;
        if (!w("EHLO localhost\r\n")) return -1;
        if (!w("AUTH LOGIN\r\n")) return -1;
        if (!w(QByteArray(username.toUtf8()).toBase64() + "\r\n")) return -1;
        if (!w(QByteArray(password.toUtf8()).toBase64() + "\r\n")) return -1;
        if (!w("MAIL FROM:<" + from.toUtf8() + ">\r\n")) return -1;
        if (!w("RCPT TO:<" + to.toUtf8() + ">\r\n")) return -1;
        if (!w("DATA\r\n")) return -1;
        QByteArray p;
        p += "From: " + from.toUtf8() + "\r\n";
        p += "To: " + to.toUtf8() + "\r\n";
        p += "Subject: " + subject.toUtf8() + "\r\n";
        p += "Date: " + QDateTime::currentDateTimeUtc().toString("ddd, dd MMM yyyy HH:mm:ss +0000").toUtf8() + "\r\n";
        p += "MIME-Version: 1.0\r\n";
        p += "Content-Type: text/plain; charset=UTF-8\r\n";
        p += "Content-Transfer-Encoding: 8bit\r\n\r\n";
        p += body.toUtf8() + "\r\n.\r\n";
        if (!w(p)) return -1;
        if (!w("QUIT\r\n")) return -1;
        s.close();
        return 0;
    };

    int r = sendImplicitTls(smtpServer, smtpPort);
    if (r != 0) r = sendStartTls587(smtpServer);
    if (r == 0) return 0;

    QUrl mailto(QString("mailto:%1?subject=%2&body=%3")
                    .arg(QUrl::toPercentEncoding(to),
                         QUrl::toPercentEncoding(subject),
                         QUrl::toPercentEncoding(body)));
    if (QDesktopServices::openUrl(mailto)) return 0;
    return -1;
}
