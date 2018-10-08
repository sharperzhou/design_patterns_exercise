#include "ConcreteSubject.h"

ConcreteSubject::ConcreteSubject()
    : state_(0)
{
}

int ConcreteSubject::getState() const
{
    return state_;
}

void ConcreteSubject::setState(int s)
{
    state_ = s;
}
