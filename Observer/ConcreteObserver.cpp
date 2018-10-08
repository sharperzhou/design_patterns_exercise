#include "ConcreteObserver.h"
#include "Subject.h"
#include <iostream>
using namespace std;

ConcreteObserver::ConcreteObserver(const std::string& name)
    : name_(name)
{
}

void ConcreteObserver::update(Subject* subject)
{
    cout << "update observer[" << name_ << "], state: "
        << subject->getState() << endl;
}
