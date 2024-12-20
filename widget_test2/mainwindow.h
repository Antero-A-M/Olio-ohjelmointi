#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "login.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnLogin_clicked();

    //0.login.cpp emitoitu singnaalia varten:
    void getUsernameSlot();

    void on_btnForm1_clicked();

    void on_btnForm2_clicked();

    void on_btnForm3_clicked();

    void on_btnPersonData_clicked();

private:
    Ui::MainWindow *ui;
    //0.UUSI IKKUNA AVAUTUU
    Login *objLogin;
    QString username;
    // 4.


};
#endif // MAINWINDOW_H
