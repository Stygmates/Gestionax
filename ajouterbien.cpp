#include "ajouterbien.h"
#include "ui_ajouterbien.h"

AjouterBien::AjouterBien(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AjouterBien)
{
    ui->setupUi(this);
}

AjouterBien::~AjouterBien()
{
    delete ui;
}
