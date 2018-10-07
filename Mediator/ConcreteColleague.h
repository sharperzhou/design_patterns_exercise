#pragma once
#include <string>
#include "Colleague.h"
class ConcreteColleagueA :
    public Colleague
{
public:
    void receiveMsg(const std::string& str) override;
    void sendMsg(int toWho, const std::string& str) override;
};

class ConcreteColleagueB :
    public Colleague
{
public:
    void receiveMsg(const std::string& str) override;
    void sendMsg(int toWho, const std::string& str) override;
};


