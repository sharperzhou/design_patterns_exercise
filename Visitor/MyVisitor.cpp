#include "MyVisitor.h"
#include <iostream>
#include "ConcreteElement.h"
using namespace std;

void MyVisitor::visit(ConcreteElementA* value)
{
    cout << ">> MyVisitor will visit ConcreteElementA" << endl;
    value->operationA();
}

void MyVisitor::visit(ConcreteElementB* value)
{
    cout << ">> MyVisitor will visit ConcreteElementB" << endl;
    value->operationB();
}
