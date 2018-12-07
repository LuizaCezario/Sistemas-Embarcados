#ifndef COMANDA_H
#define COMANDA_H

#include <QDialog>

namespace Ui {
class comanda;
}

class comanda : public QDialog
{
    Q_OBJECT

public:
    explicit comanda(QWidget *parent = nullptr);
    ~comanda();

    void escrevertela(QString label);
private:
    Ui::comanda *ui;
};

#endif // COMANDA_H
