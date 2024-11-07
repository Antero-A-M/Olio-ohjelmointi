#include "car.h"
#include <iostream>
using namespace std;





Car::Car() {}

void Car::setBrand(string b)
{
    brand = b;
}

void Car::setModel(string m)
{
    model = m;
}

void Car::setYearModel(int y)
{
    yearModel = y;
}

void Car::printData(){
    cout << "Vaihe 1."<<endl;
    cout << "Auton merkki on:"<< brand<<endl;
    cout << "Malli: "<<model<<endl;
    cout << "Vuosimalli: "<<yearModel<<endl;
}
