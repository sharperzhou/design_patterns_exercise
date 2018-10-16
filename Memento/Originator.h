#pragma once
#include "Memento.h"


class Originator
{
public:
    Originator();

    void setMemento(const Memento& memento);
    Memento createMemento();
    State getState() const;
    void  setState(const State& state);
protected:
    State state_;
};
