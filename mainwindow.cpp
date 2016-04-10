#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "recherchebien.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->rechercherPushButton, SIGNAL(clicked(true), ui->MainWindow,SLOT(OnRechercheBien())));
}

MainWindow::~MainWindow()
{
    delete ui;
}

MainWindow::OnRechercheBien()
{
    RechercheBien rb = new RechercheBien(this);
    rb->show();
}
