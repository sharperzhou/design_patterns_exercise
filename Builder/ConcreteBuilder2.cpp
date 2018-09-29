#include "ConcreteBuilder2.h"



void ConcreteBuilder2::buildPartA()
{
    prod_->setA("Another A style");
}

void ConcreteBuilder2::buildPartB()
{
    prod_->setB("Another B size");
}

void ConcreteBuilder2::buildPartC()
{
    prod_->setC("Anoter C color");
}
