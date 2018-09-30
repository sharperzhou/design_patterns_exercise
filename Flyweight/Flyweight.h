#pragma once

class __declspec(novtable) IFlyweight
{
public:
    virtual void operation() const = 0;
    virtual ~IFlyweight() = default;
};