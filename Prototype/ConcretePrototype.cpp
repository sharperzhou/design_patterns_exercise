#include "ConcretePrototype.h"
#include <iostream>
using namespace std;

unique_ptr<IPrototype> ConcretePrototypeA::clone()
{
    return make_unique<ConcretePrototypeA>();
}

void ConcretePrototypeA::operation()
{
    cout << "ConcretePrototypeA::operation()" << endl;
}

unique_ptr<IPrototype> ConcretePrototypeB::clone()
{
    return make_unique<ConcretePrototypeB>();
}

void ConcretePrototypeB::operation()
{
    cout << "ConcretePrototypeB::operation()" << endl;
}
