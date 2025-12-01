QT += core gui sql serialport charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Atelier_Connexion
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++11

SOURCES += \
    apprenant.cpp \
    arduino.cpp \
    emplye.cpp \
        main.cpp \
        mainwindow.cpp \
    connection.cpp \
    vehicule.cpp

HEADERS += \
    apprenant.h \
    arduino.h \
    emplye.h \
        mainwindow.h \
    connection.h \
    vehicule.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
