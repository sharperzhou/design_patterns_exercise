#include "ConcreteAbstraction2.h"

#include <iostream>
#include "Implementor.h"
using namespace std;

ConcreteAbstraction2::ConcreteAbstraction2(IImplementor* impl)
    : Abstraction(impl)
{
}

void ConcreteAbstraction2::operation()
{
    //impl_->operationImp();
    Abstraction::operation();
    cout << "operation in ConcreteAbstraction2" << endl;
}


