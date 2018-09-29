#include "ConcreteFactory.h"
#include "ConcreteProduct.h"
using namespace std;

std::unique_ptr<IProductA> ConcreteFactory1::createProductA()
{
    return make_unique<ConcreteProductA1>();
}

std::unique_ptr<IProductB> ConcreteFactory1::createProductB()
{
    return make_unique<ConcreteProductB1>();
}

std::unique_ptr<IProductA> ConcreteFactory2::createProductA()
{
    return make_unique<ConcreteProductA2>();
}

std::unique_ptr<IProductB> ConcreteFactory2::createProductB()
{
    return make_unique<ConcreteProductB2>();
}
