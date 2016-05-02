#include "resultatsrecherche.h"
#include "ui_resultatsrecherche.h"

ResultatsRecherche::ResultatsRecherche(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ResultatsRecherche)
{
    ui->setupUi(this);
}

ResultatsRecherche::~ResultatsRecherche()
{
    delete ui;
}
