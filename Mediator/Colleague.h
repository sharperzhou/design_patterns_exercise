#pragma once
#include <string>
class Mediator;
class __declspec(novtable) Colleague
{
public:
    virtual ~Colleague() = default;

    virtual void receiveMsg(const std::string& str);
    virtual void sendMsg(int toWho, const std::string& str);

    void setMediator(Mediator* mediator);

protected:
    Mediator* mediator_;
};

