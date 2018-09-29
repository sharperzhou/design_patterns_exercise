#pragma once
#include "Product.h"
class ConcreteProductA :
    public IProduct
{
public:
    ConcreteProductA() = default;
    ~ConcreteProductA() = default;

    void use() override;
};

class ConcreteProductB :
    public IProduct
{
public:
    ConcreteProductB() = default;
    ~ConcreteProductB() = default;

    void use() override;
};
