#include "ConcreteStrategy.h"
#include <iostream>
using namespace std;

void ConcreteStrategyA::algorithm()
{
    cout << "ConcreteStrategyA::algorithm()" << endl;
}

void ConcreteStrategyB::algorithm()
{
    cout << "ConcreteStrategyB::algorithm()" << endl;
}
