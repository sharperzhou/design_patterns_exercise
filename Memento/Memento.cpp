#include "Memento.h"

State Memento::getState() const
{
    return state_;
}

void Memento::setState(const ::State& state)
{
    state_ = state;
}
