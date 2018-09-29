#pragma once

class __declspec(novtable) IProduct
{
public:
    void virtual use() = 0;
    virtual ~IProduct() = default;
};
