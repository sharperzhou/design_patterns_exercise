#pragma once
#include <memory>
class __declspec(novtable) IPrototype
{
public:
    virtual std::unique_ptr<IPrototype> clone() = 0;
    virtual void operation() = 0;
    virtual ~IPrototype() = default;
};