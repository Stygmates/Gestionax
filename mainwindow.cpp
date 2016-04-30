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
    recherchebien = new RechercheBien(this);
    recherchebien->show();
}

void MainWindow::on_quitterPushButton_clicked()
{
    this->close();
}

void MainWindow::on_ajouterPushButton_clicked()
{
    ajouterbien = new AjouterBien(this);
    ajouterbien->show();
}
