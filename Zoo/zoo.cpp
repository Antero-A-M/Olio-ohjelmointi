#include "zoo.h"




Zoo::Zoo() {}

void Zoo::addAnimal(Animal *animal)
{
    animals.push_back(animal);
}

double Zoo::calculateAvarangeAge() const
{
    if (animals.empty()) {
        return 0;
    }

    double totalAge = 0;
    for (size_t i = 0; i < animals.size(); ++i) {
        Animal* animal = animals[i];
        totalAge += animal->getAge();
    }

    return totalAge / animals.size();
}

double Zoo::calculateAvarangeWeight() const
{
    if(animals.empty()){
        return 0;
    }
    double totalWeight = 0;
    for (size_t i = 0; i < animals.size(); ++i) {
        Animal* animal = animals[i];
        totalWeight += animal->getWeight();
    }

    return totalWeight / animals.size();
}


