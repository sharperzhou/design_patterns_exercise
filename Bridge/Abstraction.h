#pragma once
class IImplementor;

class Abstraction
{
public:
    Abstraction(IImplementor* impl);
    virtual ~Abstraction() = default;

    virtual void operation();

protected:
    IImplementor* impl_;
};

