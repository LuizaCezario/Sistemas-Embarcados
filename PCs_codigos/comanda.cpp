#include "comanda.h"
#include "ui_comanda.h"

comanda::comanda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::comanda)
{
    ui->setupUi(this);
}

comanda::~comanda()
{
    delete ui;
}

void comanda:: escrevertela(QString label)
{
  ui->plainTextEdit->setPlainText(label);
}
