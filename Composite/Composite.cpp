#include "Composite.h"
#include <iostream>
using namespace std;

Composite::Composite(const std::string& name)
    : name_(name)
{
}

void Composite::operation()
{
    cout << "operation() from Composite " << name_ << endl;

    for (auto& c : components_) {
        c->operation();
    }
}

void Composite::add(IComponent* component)
{
    components_.push_back(component);
}

void Composite::remove(IComponent* component)
{
    components_.remove(component);
}
