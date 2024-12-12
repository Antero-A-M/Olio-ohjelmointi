#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

    QString getName() const;
    void setName(const QString &newName);

private slots:
    void on_btnSave_clicked();

private:
    Ui::Login *ui;
    //0. NIMI Login, mukaan get ja set.
    QString name;

signals:
    //0. Singnal slot, jotta siirtyy teksi takaisin main.
    void nameSetted();

};

#endif // LOGIN_H
