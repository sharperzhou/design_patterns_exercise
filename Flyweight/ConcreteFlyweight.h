#pragma once
#include "Flyweight.h"
class ConcreteFlyweight :
    public IFlyweight
{
public:
    void operation() const override;
};

