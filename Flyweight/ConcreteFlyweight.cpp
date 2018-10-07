#include "ConcreteFlyweight.h"
#include <iostream>
using namespace std;

ConcreteFlyweight::ConcreteFlyweight(const string& id)
    : id_(id)
{
}

void ConcreteFlyweight::operation() const
{
    cout << R"(ConcreteFlyweight[")" << id_ << R"("] call operation())" << endl;
}
