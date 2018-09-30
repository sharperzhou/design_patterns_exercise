#include "ConcreteFlyweight.h"
#include <iostream>
using namespace std;

void ConcreteFlyweight::operation() const
{
    cout << "operation() in ConcreteFlyweight" << endl;
}
