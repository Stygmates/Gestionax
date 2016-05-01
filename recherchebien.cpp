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

void RechercheBien::on_RetourButton_clicked()
{
    this->close();
}

void RechercheBien::on_RechercherButton_clicked()
{

}
