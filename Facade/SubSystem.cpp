#include "SubSystem.h"
#include <iostream>
using namespace std;

void SubSystemA::operationA() const
{
    cout << "operationA from SubSystemA" << endl;
}

void SubSystemB::operationB() const
{
    cout << "operationB from SubSystemB" << endl;
}

void SubSystemC::operationC() const
{
    cout << "operationC from SubSystemC" << endl;
}
