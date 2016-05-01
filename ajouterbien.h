#ifndef AJOUTERBIEN_H
#define AJOUTERBIEN_H

#include <QDialog>

typedef struct bien{
    char *titre;
    bool estAchat;
    bool estLocation;
    bool estMaison;
    bool estAppartement;
    bool estChateau;
    bool estFerme;
    bool estBureau;
    bool estCommerce;
    bool estAutre;
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

private:
    Ui::AjouterBien *ui;
};

#endif // AJOUTERBIEN_H
