#pragma once
#include <memory>
#include <unordered_map>
#include <string>
#include "Flyweight.h"

class FlyweightFactory
{
public:

    using Cache = std::unordered_map<std::string,
                                     std::shared_ptr<IFlyweight>>;


    std::shared_ptr<IFlyweight> getFlyweight(const std::string& name);

private:
    Cache cache_;
};
