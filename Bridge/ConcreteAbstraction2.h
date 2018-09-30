#pragma once
#include "Abstraction.h"
class IImplementor;
class ConcreteAbstraction2 :
    public Abstraction
{
public:
    ConcreteAbstraction2(IImplementor* impl);
    ~ConcreteAbstraction2() = default;

    void operation() override;
};

