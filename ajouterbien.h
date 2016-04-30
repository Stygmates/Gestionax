#ifndef AJOUTERBIEN_H
#define AJOUTERBIEN_H

#include <QDialog>

namespace Ui {
class AjouterBien;
}

class AjouterBien : public QDialog
{
    Q_OBJECT

public:
    explicit AjouterBien(QWidget *parent = 0);
    ~AjouterBien();

private:
    Ui::AjouterBien *ui;
};

#endif // AJOUTERBIEN_H
