#pragma once
#include <unordered_map>
#include "Mediator.h"
class ConcreteMediator :
    public Mediator
{
public:
    void operation(int nWho, const std::string& str) override;
    void registor(int nWho, Colleague* colleague) override;

private:
    std::unordered_map<int, Colleague*> colleagues_;
};

