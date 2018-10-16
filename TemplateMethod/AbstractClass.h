#pragma once

class AbstractClass
{
public:
    void templateMethod();

protected:
    virtual void operation1() = 0;
    virtual void operation2() = 0;
};
