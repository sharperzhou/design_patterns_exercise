#include "ConcreteAbstraction.h"

#include <iostream>
#include "Implementor.h"
using namespace std;

ConcreteAbstraction::ConcreteAbstraction(IImplementor* impl)
    : Abstraction(impl)
{
}

void ConcreteAbstraction::operation()
{
    //impl_->operationImp();
    Abstraction::operation();
    cout << "operation in ConcreteAbstraction" << endl;
}


