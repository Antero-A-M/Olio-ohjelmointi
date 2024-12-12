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

    connect(ui->btnCount, SIGNAL(clicked()), this, SLOT(on_btnCount_clicked()));
    connect(ui->btnReset, SIGNAL(clicked()), this, SLOT(on_btnReset_clicked()));


}

void MainWindow::on_btnCount_clicked()
{

    counter++;
    QString s = QString::number(counter);
    ui->labelInfo->setText("Painiketta painettu " + s + " kertaa");
    ui->txtResult->setText(s);

}


void MainWindow::on_btnReset_clicked()
{
    counter = 0;
    QString s = QString::number(counter);
    ui->labelInfo->setText("Painiketta painettu " + s + " kertaa");
    ui->txtResult->setText(s);

}



