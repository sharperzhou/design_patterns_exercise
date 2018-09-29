#pragma once
#include "Factory.h"

class ConcreteFactory : public IFactory
{
public:
    std::unique_ptr<IProduct> factoryMethod() override;
};
