#pragma once
#include <memory>
class Product;
class Builder;

class Director
{
public:
    explicit  Director(Builder* builder);

    std::shared_ptr<Product> constuct() const;

    void setBuilder(Builder* builder);

private:
    Builder* builder_;
};

