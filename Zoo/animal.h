#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>
using namespace std;



class Animal
{
protected:
    string name;
    double age;
    double weight;


public:
    Animal();
    virtual void makeSound();

    string getName() const;
    void setName(const string &newName);
    double getAge() const;
    void setAge(double newAge);
    double getWeight() const;
    void setWeight(double newWeight);

    virtual ~Animal();


};

#endif // ANIMAL_H
