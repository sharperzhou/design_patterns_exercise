#include <memory>
#include "ConcreteMediator.h"
#include "ConcreteColleague.h"
using namespace std;

int main() {

    auto colleague1 = make_unique<ConcreteColleagueA>();
    auto colleague2 = make_unique<ConcreteColleagueB>();
    auto mediator = make_unique<ConcreteMediator>();

    mediator->registor(1, colleague1.get());
    mediator->registor(2, colleague2.get());

    colleague1->sendMsg(2, "Hi, I'm colleague1");
    colleague2->sendMsg(1, "Hello, it's colleague2");

    return 0;
}