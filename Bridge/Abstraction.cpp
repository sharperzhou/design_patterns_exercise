#include "Abstraction.h"
#include "Implementor.h"


Abstraction::Abstraction(IImplementor* impl)
    : impl_(impl)
{
}

void Abstraction::operation()
{
    impl_->operationImp();
}


