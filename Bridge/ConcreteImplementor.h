#pragma once
#include "Implementor.h"
class ConcreteImplementorA :
    public IImplementor
{
public:
    void operationImp() override;
};

class ConcreteImplementorB :
    public IImplementor
{
public:
    void operationImp() override;
};

