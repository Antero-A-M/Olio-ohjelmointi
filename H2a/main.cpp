#include "car.h"
#include <iostream>
#include <memory>
#include "Rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    //Vaihe 1.
    Car obj_car;
    obj_car.setBrand("MB");
    obj_car.setModel("E");
    obj_car.setYearModel(87);

    obj_car.printData();


    //Vaihe 2.
    Rectangle *rect;
    rect = new Rectangle();

    rect->setWidth(8.1);
    rect->setHeight(2.4);

    cout << "\nVaihe 2."<<endl;
    cout << "Pinta-ala: " << rect->getArea() << endl;
    cout << "Ymparysmitta: " << rect->getCircum() << endl;

    delete rect;

    //Vaihe 3.

    shared_ptr<Student> student = make_shared<Student>();

    student->setName("Matti Moikkaus");
    student->setStudentNumber(12345);
    student->setAvarage(4.5);

    cout << "\nVaihe 3."<<endl;
    cout << "Opiskelijan nimi: " << student->getName() << endl;
    cout << "Opiskelijanumero: " << student->getStudentNumber() << endl;
    cout << "Keskiarvo: " << student->getAvarage() << endl;




    return 0;
}
