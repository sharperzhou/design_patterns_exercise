#include "Leaf.h"
#include <iostream>
using namespace std;

Leaf::Leaf(const std::string& name)
    : name_(name)
{
}

void Leaf::operation()
{
    cout << "operation() from Leaf " << name_ << endl;
}
