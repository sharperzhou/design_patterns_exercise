#include "ConcreteColleague.h"
#include "Mediator.h"
#include <iostream>
using namespace std;

void ConcreteColleagueA::receiveMsg(const std::string & str)
{
    cout << "concreteColleagueA receive msg: " << str << endl;
}

void ConcreteColleagueA::sendMsg(int toWho, const std::string& str)
{
    cout << "send msg from colleagueA, to " << toWho << endl;
    mediator_->operation(toWho, str);
}

void ConcreteColleagueB::receiveMsg(const std::string& str)
{
    cout << "concreteColleagueB receive msg: " << str << endl;
}

void ConcreteColleagueB::sendMsg(int toWho, const std::string& str)
{
    cout << "send msg from colleagueB, to " << toWho << endl;
    mediator_->operation(toWho, str);
}
