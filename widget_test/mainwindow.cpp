#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnSave_clicked()
{

    // NIMI
    fname = ui->textName->text();
    qDebug()<<fname;
    ui->labelResult->setText("Terve "+fname);
}


void MainWindow::on_btnOpenCalculator_clicked()
{
    //AVATAAN UUSI IKKUNA
    objCalculator=new Calculator(this);
    objCalculator->setUsername(fname);
    objCalculator->show();
    //objCalculator->open();
}

