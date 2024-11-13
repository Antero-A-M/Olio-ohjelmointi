#include "animal.h"
#include "dog.h"
#include <iostream>
#include <memory>


using namespace std;

int main()
{

    unique_ptr<Animal> animal_1 = make_unique<Animal>() ;
    animal_1->callOut();

    Dog objDog;
    objDog.callOut();



    return 0;
}
