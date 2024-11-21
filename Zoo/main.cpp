#include "animal.h"
#include "cat.h"
#include "cow.h"
#include "dog.h"
#include "zoo.h"
#include <iostream>

using namespace std;

int main()
{

    Zoo myZoo;

    Cat* cat2 = new Cat();
    cat2->setName("Syltti");
    cat2->setAge(12);
    cat2->setWeight(10);

    Dog* dog2 = new Dog();
    dog2->setName("Snoopy");
    dog2->setAge(5);
    dog2->setWeight(15);

    Cow* cow2 = new Cow();
    cow2->setName("Mankeli");
    cow2->setAge(9);
    cow2->setWeight(200);

    myZoo.addAnimal(cat2);
    myZoo.addAnimal(dog2);
    myZoo.addAnimal(cow2);

    cout<<"Keskipaino on: "<<myZoo.calculateAvarangeWeight()<<endl;
    cout<<"Keski ika on ; "<<myZoo.calculateAvarangeAge()<<endl;

    delete cat2;
    delete dog2;
    delete cow2;


    /*
    Animal objAnimal;
    Cat cat1;
    Dog dog1;
    Cow cow1;

    objAnimal.setName("Elukka");
    cat1.setName("Rolli");
    dog1.setName("Rekku");
    cow1.setName("Mansikki");



    cout<<"Nimi on: "<< objAnimal.getName()<<endl;
    objAnimal.makeSound();

    cout<<"Nimi on: "<<cat1.getName()<<endl;
    cat1.makeSound();

    cout<<"Nimi on: "<<dog1.getName()<<endl;
    dog1.makeSound();

    cout<<"Nimi on: "<<cow1.getName()<<endl;
    cow1.makeSound();
    */

    return 0;
}
