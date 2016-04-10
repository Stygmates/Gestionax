#ifndef RECHERCHEBIEN_H
#define RECHERCHEBIEN_H

#include <QDialog>

namespace Ui {
class RechercheBien;
}

class RechercheBien : public QDialog
{
    Q_OBJECT

public:
    explicit RechercheBien(QWidget *parent = 0);
    ~RechercheBien();

private:
    Ui::RechercheBien *ui;
};

#endif // RECHERCHEBIEN_H
