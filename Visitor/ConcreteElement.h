#pragma once
#include "Element.h"

class ConcreteElementA : public IElement
{
public:
    void accept(IVisitor* visitor) override;

    void operationA() const;
};

class ConcreteElementB : public IElement
{
public:
    void accept(IVisitor* visitor) override;

    void operationB() const;
};
