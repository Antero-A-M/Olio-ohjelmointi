#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect(ui->btnCount, SIGNAL(clicked()), this, SLOT(handleBtnCountClick()));
    connect(ui->btnReset, SIGNAL(clicked()), this, SLOT(handleBtnResetClick()));
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleBtnCountClick()
{

    counter++;
    QString s = QString::number(counter);
    ui->labelInfo->setText("Painiketta painettu " + s + " kertaa");
    ui->txtResult->setText(s);

}


void MainWindow::handleBtnResetClick()
{
    counter = 0;
    QString s = QString::number(counter);
    ui->labelInfo->setText("Painiketta painettu " + s + " kertaa");
    ui->txtResult->setText(s);

}



