#pragma once
#include <string>
class Colleague;
class __declspec(novtable) Mediator
{
public:
    virtual ~Mediator() = default;

    virtual void operation(int nWho, const std::string& str);
    virtual void registor(int nWho, Colleague* colleague);
};

