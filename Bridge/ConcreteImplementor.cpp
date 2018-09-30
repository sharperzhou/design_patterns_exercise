#include "ConcreteImplementor.h"
#include <iostream>
using namespace std;

void ConcreteImplementorA::operationImp()
{
    cout << "operationImp in ConcreteImplementorA" << endl;
}

void ConcreteImplementorB::operationImp()
{
    cout << "operationImp in ConcreteImplementorB" << endl;
}
