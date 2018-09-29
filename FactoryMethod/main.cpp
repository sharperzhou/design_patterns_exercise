#include "ConcreteFactory.h"
#include "ConcreteProduct.h"
using namespace std;

int main()
{
    unique_ptr<IFactory> factory = make_unique<ConcreteFactory>();
    unique_ptr<IProduct> prod = factory->factoryMethod();
    prod->use();
    return 0;
}