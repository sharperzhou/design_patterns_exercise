#pragma once

class __declspec(novtable) IProductA
{
public:
    virtual void use() = 0;
    virtual  ~IProductA() = default;
};

class __declspec(novtable) IProductB
{
public:
    virtual void eat() = 0;
    virtual  ~IProductB() = default;
};