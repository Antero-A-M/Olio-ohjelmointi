#include "car.h"
#include <iostream>

using namespace std;

int main()
{
    Car carobj("Corolla","Toyota");

    carobj.setEngine();
    carobj.setWheels();
    carobj.printDetails();


    return 0;
}
