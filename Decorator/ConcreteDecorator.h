#pragma once
#include "Decorator.h"
class ConcreteDecoratorA :
    public Decorator
{
public:
    ConcreteDecoratorA(IComponent* comp);

    void addBehavior();
    void operation() override;
};

class ConcreteDecoratorB :
    public Decorator
{
public:
    ConcreteDecoratorB(IComponent* comp);

    void addBehavior();
    void operation() override;
};

