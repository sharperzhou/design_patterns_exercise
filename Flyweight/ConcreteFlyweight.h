#pragma once
#include <string>
#include "Flyweight.h"

class ConcreteFlyweight :
    public IFlyweight
{
public:
    explicit ConcreteFlyweight(const std::string& id);

    void operation() const override;
private:
    std::string id_;
};

