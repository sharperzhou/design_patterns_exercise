#include "ConcreteDecorator.h"
#include <iostream>
using namespace std;

ConcreteDecoratorA::ConcreteDecoratorA(IComponent * comp)
    : Decorator(comp)
{
}

void ConcreteDecoratorA::addBehavior()
{
    cout << "add additional behavior for ConcreteDecoratorA" << endl;
}

void ConcreteDecoratorA::operation()
{
    Decorator::operation();
}

ConcreteDecoratorB::ConcreteDecoratorB(IComponent * comp)
    : Decorator(comp)
{
}

void ConcreteDecoratorB::addBehavior()
{
    cout << "add additional behavior for ConcreteDecoratorB" << endl;
}

void ConcreteDecoratorB::operation()
{
    Decorator::operation();
}
