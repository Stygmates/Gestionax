#include "mainwindow.h"
#include "recherchebien.h"
#include "ajouterbien.h"
#include <QApplication>
#include "io.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *w = new MainWindow();
    w->show();
    write(w);

    return a.exec();
}
