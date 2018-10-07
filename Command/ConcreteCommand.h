#pragma once
#include "Command.h"
class Receiver;
class ConcreteCommand :
    public ICommand
{
public:
    ConcreteCommand(Receiver* receiver);

    void execute() override;

private:
    Receiver* receiver_;
};

