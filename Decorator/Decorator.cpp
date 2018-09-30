#include "Decorator.h"



Decorator::Decorator(IComponent* comp)
    : comp_(comp)
{
}

void Decorator::operation()
{
    comp_->operation();
}

