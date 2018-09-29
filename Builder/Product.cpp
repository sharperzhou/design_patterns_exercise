#include "Product.h"
#include <string>
#include <iostream>
using namespace std;

void Product::setA(const std::string& A)
{
    a_ = A;
}

void Product::setB(const std::string& B)
{
    b_ = B;
}

void Product::setC(const std::string& C)
{
    c_ = C;
}

void Product::show() const
{
    cout << "Product has: " << a_ << ", "
        << b_ << ", " << c_ << endl;
}
