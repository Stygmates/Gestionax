#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "recherchebien.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_rechercherPushButton_clicked()
{
    RechercheBien recherchebien;
    recherchebien.exec();
}
