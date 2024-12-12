#ifndef PERSONDATA_H
#define PERSONDATA_H

#include <QDialog>

namespace Ui {
class PersonData;
}

class PersonData : public QDialog
{
    Q_OBJECT

public:
    //4. Henkilötiedot// QString lisätty konstruktoriin
    explicit PersonData(QString,QWidget *parent = nullptr);
    ~PersonData();

private:
    Ui::PersonData *ui;
    //4.
    QString username;
};

#endif // PERSONDATA_H
