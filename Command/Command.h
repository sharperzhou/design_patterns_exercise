#pragma once

class __declspec(novtable) ICommand
{
public:
    virtual void execute() = 0;
    virtual ~ICommand() = default;
};