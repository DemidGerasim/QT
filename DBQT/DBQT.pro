#-------------------------------------------------
#
# Project created by QtCreator 2019-03-17T22:17:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DBQT
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    add.cpp \
        main.cpp \
        mainwindow.cpp \
    adminwindow.cpp \
    userwindow.cpp \
    database.cpp \
    checkin.cpp \
    changedata.cpp \
    changeprogress.cpp \
    addbook.cpp

HEADERS += \
    add.h \
        mainwindow.h \
    database.h \
    adminwindow.h \
    userwindow.h \
    checkin.h \
    changedata.h \
    changeprogress.h \
    addbook.h

FORMS += \
    add.ui \
        mainwindow.ui \
    adminwindow.ui \
    userwindow.ui \
    checkin.ui \
    changedata.ui \
    changeprogress.ui \
    addbook.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
