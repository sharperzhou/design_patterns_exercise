#include "ConcreteFactory.h"
#include "ConcreteProduct.h"
using namespace std;

int main()
{
    unique_ptr<IFactory> factory1 = make_unique<ConcreteFactory1>();
    unique_ptr<IFactory> factory2 = make_unique<ConcreteFactory2>();

    unique_ptr<IProductA> prodA1 = factory1->createProductA();
    unique_ptr<IProductA> prodA2 = factory2->createProductA();

    unique_ptr<IProductB> prodB1 = factory1->createProductB();
    unique_ptr<IProductB> prodB2 = factory2->createProductB();

    prodA1->use();
    prodA2->use();
    prodB1->eat();
    prodB2->eat();

    return 0;
}