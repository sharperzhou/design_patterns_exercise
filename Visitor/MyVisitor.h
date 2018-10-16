#pragma once
#include "Visitor.h"

class MyVisitor : public IVisitor
{
public:
    void visit(ConcreteElementA* value) override;
    void visit(ConcreteElementB* value) override;
};
