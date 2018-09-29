#include "Builder.h"
#include "Product.h"
using namespace std;

Builder::Builder() : prod_(make_shared<Product>())
{
}


void Builder::buildPartA()
{
}

void Builder::buildPartB()
{
}

void Builder::buildPartC()
{
}

shared_ptr<Product> Builder::getResult()
{
    return prod_;
}
