#pragma once
#include "Strategy.h"

class ConcreteStrategyA : public IStrategy
{
public:
    void algorithm() override;
};

class ConcreteStrategyB : public IStrategy
{
public:
    void algorithm() override;
};
