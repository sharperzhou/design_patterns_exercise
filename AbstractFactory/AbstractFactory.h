#pragma once
#include <memory>
#include "AbstractProduct.h"

class __declspec(novtable) IFactory
{
public:
    virtual std::unique_ptr<IProductA> createProductA() = 0;
    virtual std::unique_ptr<IProductB> createProductB() = 0;
    virtual ~IFactory() = default;
};
