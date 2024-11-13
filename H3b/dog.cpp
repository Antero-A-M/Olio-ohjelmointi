#include "dog.h"

Dog::Dog() {}

void Dog::callOut()
{
    cout << "*****************"<<endl;
    cout << "Koira haukkuu"<< endl;
    cout << "*****************"<< endl;
}

Dog::~Dog()
{
    cout <<"Koira poistui verkosta"<<endl;
}
