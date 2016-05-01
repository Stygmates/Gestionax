#include "mainwindow.h"
#include "recherchebien.h"
#include "ajouterbien.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
