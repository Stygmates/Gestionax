#-------------------------------------------------
#
# Project created by QtCreator 2016-04-08T10:30:28
#
#-------------------------------------------------

QT       += core gui
QT += xml


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Gestionax
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    recherchebien.cpp \
    ajouterbien.cpp \
    io.cpp \
    resultatsrecherche.cpp

HEADERS  += mainwindow.h \
    recherchebien.h \
    ajouterbien.h \
    io.h \
    resultatsrecherche.h

FORMS    += mainwindow.ui \
    recherchebien.ui \
    ajouterbien.ui \
    resultatsrecherche.ui
