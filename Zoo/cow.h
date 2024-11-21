#ifndef COW_H
#define COW_H

#include "animal.h"

class Cow : public Animal
{
public:
    Cow();
     virtual void makeSound() override;
};

#endif // COW_H
