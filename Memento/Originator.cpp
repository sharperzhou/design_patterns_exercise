#include "Originator.h"

Originator::Originator()
    : state_{0, 0}
{
}

void Originator::setMemento(const Memento& memento)
{
    state_ = memento.getState();
}

Memento Originator::createMemento()
{
    return Memento(state_);
}

State Originator::getState() const
{
    return state_;
}

void Originator::setState(const State& state)
{
    state_ = state;
}
