#pragma once
#include "Observer.h"
#include <string>

class ConcreteObserver : public IObserver
{
public:
    ConcreteObserver(const std::string& name);

    void update(Subject* subject) override;

protected:
    std::string name_;
};
