#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal
{
public:
    Dog();
     virtual void makeSound() override;
};

#endif // DOG_H
