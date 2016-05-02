#-------------------------------------------------
#
# Project created by QtCreator 2016-04-08T10:30:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Gestionax
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    recherchebien.cpp \
<<<<<<< HEAD
    ajouterbien.cpp \
    io.cpp \
    resultatsrecherche.cpp

HEADERS  += mainwindow.h \
    recherchebien.h \
    ajouterbien.h \
    io.h \
    resultatsrecherche.h
=======
    ajouterbien.cpp

HEADERS  += mainwindow.h \
    recherchebien.h \
    ajouterbien.h
>>>>>>> parent of af20da8... Ajout de la fonction de sauvegarde des données

FORMS    += mainwindow.ui \
    recherchebien.ui \
    ajouterbien.ui \
    resultatsrecherche.ui
