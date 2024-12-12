#include "form2.h"
#include "mysingleton.h"
#include "ui_form2.h"

Form2::Form2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Form2)
{
    ui->setupUi(this);
    //Uusi 2, Säilyttää kirjoitetun nimen joka kirjoitettu formissa.
    MySingleton *objectSingleton = MySingleton::getInstance();
    ui->textName->setText(objectSingleton->getName());
}

Form2::~Form2()
{
    delete ui;
}

void Form2::on_btnSave_clicked()
{
    //2. singleton olio luotu
    MySingleton *objectSingleton = MySingleton::getInstance();
    //2. Luetaan teksti
    objectSingleton->setName(ui->textName->text());
    //2. Suljetaan form.
    // this -> close();
}

