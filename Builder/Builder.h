#pragma once
#include "Product.h"
#include <memory>

class __declspec(novtable) Builder
{
public:

    Builder();
    virtual ~Builder() = default;
    Builder(const Builder&) = delete;
    Builder& operator=(const Builder&) = delete;

    virtual void buildPartA();
    virtual void buildPartB();
    virtual void buildPartC();

    std::shared_ptr<Product> getResult();

protected:
    std::shared_ptr<Product> prod_;
};
