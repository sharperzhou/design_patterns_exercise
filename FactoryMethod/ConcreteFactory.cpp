#include "ConcreteFactory.h"
#include "ConcreteProduct.h"

std::unique_ptr<IProduct> ConcreteFactory::factoryMethod()
{
    return std::make_unique<ConcreteProduct>();
}
