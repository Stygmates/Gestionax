#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "recherchebien.h"
#include "ajouterbien.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_rechercherPushButton_clicked();

    void on_quitterPushButton_clicked();

    void on_ajouterPushButton_clicked();

private:
    Ui::MainWindow *ui;
    RechercheBien *recherchebien;
    AjouterBien *ajouterbien;
};

#endif // MAINWINDOW_H
