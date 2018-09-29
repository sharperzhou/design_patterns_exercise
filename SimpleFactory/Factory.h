#pragma once
#include <string>
#include <memory>

class IProduct;
class Factory
{
public:
    static std::unique_ptr<IProduct> createProduct(const std::string& prodName);
};
