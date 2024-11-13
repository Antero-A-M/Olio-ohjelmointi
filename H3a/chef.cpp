#include "chef.h"

string Chef::getName() const
{
    return name;
}

void Chef::setName(const string &newName)
{
    name = newName;
}

Chef::~Chef()
{
    cout << "Chef " << name << " destruktori" << endl;
}

Chef::Chef(string n) {

    name=n;
    cout <<"Chef " << name << " konstruktori " << endl;

}

void Chef::makeSalad()
{
    cout << "Chef " << name << " makes salad" << endl;
}

void Chef::makeSoup()
{
    cout << "Chef " << name << " makes soup" << endl;
}
