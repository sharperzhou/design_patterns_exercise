#include "ConcreteCommand.h"
#include <iostream>
#include "Receiver.h"
using namespace std;

ConcreteCommand::ConcreteCommand(Receiver* receiver)
    : receiver_(receiver)
{
}

void ConcreteCommand::execute()
{
    cout << "execute() in ConcreteCommand" << endl;
    receiver_->action();
}

