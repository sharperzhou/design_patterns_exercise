#pragma once

class ConcreteElementA;
class ConcreteElementB;

class __declspec(novtable) IVisitor
{
public:
    virtual void visit(ConcreteElementA* value) = 0;
    virtual void visit(ConcreteElementB* value) = 0;

    virtual ~IVisitor() = default;
};