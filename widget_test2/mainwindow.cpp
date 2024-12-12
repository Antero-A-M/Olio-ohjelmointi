#include "mainwindow.h"
#include "form1.h"
#include "mysingleton.h"
#include "ui_mainwindow.h"
#include "form2.h"
#include "persondata.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //0. Määritelty konstruktorissa, toimii vaikka olisi metodissa,
    //0. koska esitely mainwindow.h
    objLogin=new Login(this);


    //3. Nappi on piiloitettu:
    ui->btnForm3->setHidden(true);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnLogin_clicked()
{
    //0. UUSI IKKUNA AVAUTUU
    //0. määritellään jo konstruktorissa: objLogin=new Login(this);
    //0. Signal to slot
    connect(objLogin, SIGNAL(nameSetted()), this, SLOT(getUsernameSlot()));
    objLogin->show();

}

void MainWindow::getUsernameSlot()
{
    //0. tallennetaan muuttujaan nimi login.cpp getName
    username=objLogin->getName();
    //0. kirjoitetaan...
    ui->labelUsername->setText(username);
}


void MainWindow::on_btnForm1_clicked()
{
    //3. nappi tulee näykyviin
    ui->btnForm3->setHidden(false);
    //1. olio luodaan Form1
    Form1 *objForm1=new Form1(this);
    //1.Avaa ikkunan
    objForm1->show();


}


void MainWindow::on_btnForm2_clicked()
{
    //3. nappi tulee näykyviin
    ui->btnForm3->setHidden(false);
    //2. olio luodaan Form1
    Form2 *objForm2=new Form2(this);
    //2. Avaa ikkunan
    objForm2->show();


}


void MainWindow::on_btnForm3_clicked()
{
    // 1 ja 2 singleton olio
    MySingleton *objectSingleton = MySingleton::getInstance();
    //1 ja 2. Saa nimen.
    ui->labelName->setText(objectSingleton->getName());
}


void MainWindow::on_btnPersonData_clicked()
{
    //4. Jos ei nimeä vielä annettu niin:
    if (username.length()==0){
        username="Vieras";
    }
    //4. Luodaan olio
    PersonData *objPersonData=new PersonData(username, this);
    //4. avaa ikkunan
    objPersonData->show();



}

