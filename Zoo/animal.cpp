#include "animal.h"

string Animal::getName() const
{
    return name;
}

void Animal::setName(const string &newName)
{
    name = newName;
}

double Animal::getAge() const
{
    return age;
}

void Animal::setAge(double newAge)
{
    age = newAge;
}

double Animal::getWeight() const
{
    return weight;
}

void Animal::setWeight(double newWeight)
{
    weight = newWeight;
}

Animal::~Animal()
{

}

Animal::Animal() {}

void Animal::makeSound()
{
    cout << "Animal makes a sound."<<endl;
}
