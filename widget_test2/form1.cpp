#include "form1.h"
#include "mysingleton.h"
#include "ui_form1.h"

Form1::Form1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Form1)
{
    ui->setupUi(this);
    //Uusi 1, Säilyttää kirjoitetun nimen joka kirjoitettu formissa.
    MySingleton *objectSingleton = MySingleton::getInstance();
    ui->textName->setText(objectSingleton->getName());
}

Form1::~Form1()
{
    delete ui;
}

void Form1::on_btnSave_clicked()
{
//1. singleton olio luotu
MySingleton *objectSingleton = MySingleton::getInstance();
//1. Luetaan teksti
objectSingleton->setName(ui->textName->text());
//1. Suljetaan form.
// this -> close();
}

