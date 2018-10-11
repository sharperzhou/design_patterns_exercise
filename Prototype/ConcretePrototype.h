#pragma once
#include "Prototype.h"

class ConcretePrototypeA : public IPrototype
{
public:
    std::unique_ptr<IPrototype> clone() override;
    void operation() override;
};

class ConcretePrototypeB : public IPrototype
{
public:
    std::unique_ptr<IPrototype> clone() override;
    void operation() override;
};
