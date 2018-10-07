#include "ConcreteMediator.h"
#include "Colleague.h"
#include <iostream>
using namespace std;

void ConcreteMediator::operation(int nWho, const std::string & str)
{
    auto it = colleagues_.find(nWho);
    if (colleagues_.end() == it) {
        cout << "not found this colleague!" << endl;
        return;
    }
    else {
        it->second->receiveMsg(str);
    }
}

void ConcreteMediator::registor(int nWho, Colleague * colleague)
{
    auto it = colleagues_.find(nWho);
    if (colleagues_.end() == it) {
        colleagues_.emplace(make_pair(nWho, colleague));
        colleague->setMediator(this);
    }
}
