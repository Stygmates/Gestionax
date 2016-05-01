#include "ajouterbien.h"
#include "ui_ajouterbien.h"
#include "mainwindow.h"
#include <iostream>
#include <string>


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

    bien.titre = ui->titreLineEdit->text();

    bien.estAchat = ui->achatButton->isChecked();
    bien.estLocation = ui->locationButton->isChecked();

    bien.estMaison = ui->maisonRadioButton->isChecked();
    bien.estAppartement = ui->appartementRadioButton->isChecked();
    bien.estChateau = ui->chateauRadioButton->isChecked();
    bien.estFerme = ui->fermeRadioButton->isChecked();
    bien.estBureau = ui->bureauRadioButton->isChecked();
    bien.estCommerce = ui->commerceRadioButton->isChecked();
    bien.estAutre = ui->autreRadioButton->isChecked();

    bien.nbPieces = ui->nbPiecesSpinBox->value();
    bien.superficie = ui->superficieSpinBox->value();
    bien.habitable = ui->habitableSpinBox->value();

    bien.adresse = ui->adresseTextEdit->toPlainText();
    bien.description = ui->descriptionTextEdit->toPlainText();

    bien.prixVente = ui->prixVenteSpinBox->value();
    bien.prixLocation = ui->prixLocationSpinBox->value();
    int i = ((MainWindow*)this->parent())->nbBiens;
    ((MainWindow*)this->parent())->listeBiens[i] = bien;
    ((MainWindow*)this->parent())->nbBiens = i+1;

    this->close();
}

void AjouterBien::on_annulerButton_clicked()
{
    this->close();
}
