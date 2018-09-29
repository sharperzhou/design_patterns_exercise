#include "ConcreteBuilder.h"

void ConcreteBuilder::buildPartA()
{
    prod_->setA("A style");
}

void ConcreteBuilder::buildPartB()
{
    prod_->setB("B size");
}

void ConcreteBuilder::buildPartC()
{
    prod_->setC("C color");
}
