#pragma once
#include "AbstractProduct.h"

class ConcreteProductA1 :
    public IProductA
{
public:
    void use() override;
};

class ConcreteProductA2 :
    public IProductA
{
public:
    void use() override;
};

class ConcreteProductB1 :
    public IProductB
{
public:
    void eat() override;
};

class ConcreteProductB2 :
    public IProductB
{
public:
    void eat() override;
};
