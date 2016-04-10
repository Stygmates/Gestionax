#include "recherchebien.h"
#include "ui_recherchebien.h"

RechercheBien::RechercheBien(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RechercheBien)
{
    ui->setupUi(this);
}

RechercheBien::~RechercheBien()
{
    delete ui;
}
