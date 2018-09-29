#pragma once

class __declspec(novtable) IProduct
{
public:
    virtual void use() = 0;

    virtual ~IProduct() = default;
};