#ifndef AJOUTERBIEN_H
#define AJOUTERBIEN_H

#include <QDialog>

typedef struct bien{
    QString titre;
    bool estAchat;
    bool estLocation;
    bool estMaison;
    bool estAppartement;
    bool estChateau;
    bool estFerme;
    bool estBureau;
    bool estCommerce;
    bool estAutre;
    int nbPieces;
    int superficie;
    int habitable;
    QString adresse;
    QString description;
    int prixVente;
    int prixLocation;
}Bien;

namespace Ui {
class AjouterBien;
}

class AjouterBien : public QDialog
{
    Q_OBJECT

public:
    explicit AjouterBien(QWidget *parent = 0);
    ~AjouterBien();

private slots:
    void on_enregisterButton_clicked();

    void on_annulerButton_clicked();

private:
    Ui::AjouterBien *ui;
};

#endif // AJOUTERBIEN_H
