#pragma once
#include "Abstraction.h"
class IImplementor;
class ConcreteAbstraction :
    public Abstraction
{
public:
    ConcreteAbstraction(IImplementor* impl);
    ~ConcreteAbstraction() = default;

    void operation() override;
};

