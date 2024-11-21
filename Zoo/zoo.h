#ifndef ZOO_H
#define ZOO_H

#include "animal.h"
#include<vector>


class Zoo : public Animal
{
private:
    vector<Animal*> animals;

public:
    Zoo();
    void addAnimal(Animal* animal);
    double calculateAvarangeAge() const;
    double calculateAvarangeWeight() const;

};

#endif // ZOO_H
