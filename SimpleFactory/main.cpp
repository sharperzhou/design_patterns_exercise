#include "ConcreteProduct.h"
#include "Factory.h"

int main()
{
    auto prodA = Factory::createProduct("ProdA");
    auto prodB = Factory::createProduct("ProdB");

    prodA->use();
    prodB->use();
    return 0;
}