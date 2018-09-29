#include "ConcreteProduct.h"
#include <iostream>
using namespace std;

void ConcreteProductA1::use()
{
    cout << "ConcreteProductA1 was used" << endl;
}

void ConcreteProductA2::use()
{
    cout << "ConcreteProductA2 was used" << endl;
}

void ConcreteProductB1::eat()
{
    cout << "ConcreteProductB1 was eating" << endl;
}

void ConcreteProductB2::eat()
{
    cout << "ConcreteProductB2 was eating" << endl;
}
