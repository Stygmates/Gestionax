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

void AjouterBien::on_enregisterButton_clicked()
{
    Bien bien;
    bien.estAchat = ui->achatButton->isChecked();
    bien.estLocation = ui->locationButton->isChecked();
    bien.estMaison = ui->maisonRadioButton->isChecked();
    bien.estAppartement = ui->appartementRadioButton->isChecked();
    bien.estChateau = ui->chateauRadioButton->isChecked();
    bien.estFerme = ui->fermeRadioButton->isChecked();
    bien.estBureau = ui->bureauRadioButton->isChecked();
    bien.estCommerce = ui->commerceRadioButton->isChecked();
}
