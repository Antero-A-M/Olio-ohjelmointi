#include <iostream>
#include <vector>
#include "car.h"


using namespace std;

int main()
{

    vector<Car> carlist;
    Car objCar_1=Car("MB","E",1990);
    Car objCar_2=Car("WW","Golf",2010);
    Car objCar_3=Car("Volvo","V90",2020);

    carlist.push_back(objCar_1);
    carlist.push_back(objCar_2);
    carlist.push_back(objCar_3);

    cout << "Toisen auton tiedot: "<<endl;
    carlist[1].printData();


    cout << "\nKaikkien autojen tiedot: "<< endl;
    for (int i=0;i<3;i++) {
        carlist[i].printData();

}



    return 0;
};
