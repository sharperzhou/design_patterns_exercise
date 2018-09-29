#pragma once
#include "Product.h"

class ConcreteProduct : public IProduct
{
public:
    void use() override;
};
