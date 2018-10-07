#include "Invoker.h"
#include <iostream>
#include "Command.h"
using namespace std;


Invoker::Invoker(ICommand* command)
    :command_(command)
{
}

void Invoker::call() const
{
    cout << "call() in Invoker" << endl;
    command_->execute();
}

