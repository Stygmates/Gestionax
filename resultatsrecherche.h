#ifndef RESULTATSRECHERCHE_H
#define RESULTATSRECHERCHE_H

#include <QMainWindow>

namespace Ui {
class ResultatsRecherche;
}

class ResultatsRecherche : public QMainWindow
{
    Q_OBJECT

public:
    explicit ResultatsRecherche(QWidget *parent = 0);
    ~ResultatsRecherche();

private:
    Ui::ResultatsRecherche *ui;
};

#endif // RESULTATSRECHERCHE_H
