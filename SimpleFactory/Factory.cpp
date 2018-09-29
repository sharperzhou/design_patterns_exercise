#include "Factory.h"
#include "ConcreteProduct.h"
using namespace std;

unique_ptr<IProduct> Factory::createProduct(const string& prodName)
{
    if (prodName == "ProdA") {
        return make_unique<ConcreteProductA>();
    }
    else if (prodName == "ProdB") {
        return make_unique<ConcreteProductB>();
    }
    else {
        return nullptr;
    }
}
