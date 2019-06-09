QT += core gui network widgets

TEMPLATE = app
TARGET = client

INCLUDEPATH += D:/Study/ProgrammingLanguages/QT_181_352_Gerasimenko/OpenSSL-Win32/include
LIBS += -LD:/Study/ProgrammingLanguages/QT_181_352_Gerasimenko/OpenSSL-Win32/
LIBS += -LD:/Study/ProgrammingLanguages/QT_181_352_Gerasimenko/OpenSSL-Win32/lib -llibssl
LIBS += -LD:/Study/ProgrammingLanguages/QT_181_352_Gerasimenko/OpenSSL-Win32/lib -llibcrypto


MOC_DIR     += generated/mocs
UI_DIR      += generated/uis
RCC_DIR     += generated/rccs
OBJECTS_DIR += generated/objs

SOURCES += main.cpp\
        mainwindow.cpp \
    clientStuff.cpp

HEADERS  += mainwindow.h \
    clientStuff.h

FORMS    += mainwindow.ui

