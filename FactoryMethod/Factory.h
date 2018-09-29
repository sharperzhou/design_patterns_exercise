#pragma once
#include <memory>
#include "Product.h"

class __declspec(novtable) IFactory
{
public:
    virtual std::unique_ptr<IProduct> factoryMethod() = 0;
    virtual ~IFactory() = default;
};
