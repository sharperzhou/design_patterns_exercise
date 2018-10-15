#include "ConcreteElement.h"
#include <iostream>
#include "Visitor.h"

using namespace std;

void ConcreteElementA::accept(IVisitor* visitor)
{
    visitor->visit(this);
}

void ConcreteElementA::operationA() const
{
    cout << "ConcreteElementA::operationA()" << endl;
}

void ConcreteElementB::accept(IVisitor* visitor)
{
    visitor->visit(this);
}

void ConcreteElementB::operationB() const
{
    cout << "ConcreteElementB::operationB()" << endl;
}


