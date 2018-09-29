#include "Singleton.h"
#include <iostream>
using namespace std;

unique_ptr<Singleton, decltype(&Singleton::deleter)> Singleton::instance_
= unique_ptr<Singleton, decltype(&Singleton::deleter)>(nullptr, &Singleton::deleter);

void Singleton::deleter(Singleton* ptr)
{
    cout << "Singleton was deleted" << endl;
    delete ptr;
}

Singleton* Singleton::getInstance()
{
    if (instance_ == nullptr) {
        instance_.reset(new Singleton);
    }
    return instance_.get();
}

void Singleton::operation() const
{
    cout << "singleton do something" << endl;
}
