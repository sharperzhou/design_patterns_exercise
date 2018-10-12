#pragma once
#include "AbstractClass.h"

class ConcreteClass1 : public AbstractClass
{
protected:
    void operation1() override;
    void operation2() override;
};

class ConcreteClass2 : public AbstractClass
{
protected:
    void operation1() override;
    void operation2() override;
};
