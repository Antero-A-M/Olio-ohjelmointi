#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_btnSave_clicked()
{
    //0. Nimen kirjoitus LOGIN ja sulku
    name=ui->textName->text();
    //0. Emitoidaan singnal ennen sulkua.
    emit nameSetted();
    this->close();
}

QString Login::getName() const
{
    return name;
}

void Login::setName(const QString &newName)
{
    name = newName;
}

