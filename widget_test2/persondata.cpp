#include "persondata.h"
#include "ui_persondata.h"

PersonData::PersonData(QString value,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PersonData)
{
    //4. Listään labeliin näkymään nimi formiin.
    username=value;
    ui->setupUi(this);
    ui->labelUsername->setText(username);
}





PersonData::~PersonData()
{
    delete ui;
}
