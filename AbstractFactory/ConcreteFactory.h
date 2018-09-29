#pragma once
#include "AbstractFactory.h"

class ConcreteFactory1 :
    public IFactory
{
public:
    std::unique_ptr<IProductA> createProductA() override;
    std::unique_ptr<IProductB> createProductB() override;
};

class ConcreteFactory2 :
    public IFactory
{
public:
    std::unique_ptr<IProductA> createProductA() override;
    std::unique_ptr<IProductB> createProductB() override;
};
