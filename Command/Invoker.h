#pragma once
class ICommand;
class Invoker
{
public:
    Invoker(ICommand* command);
    void call() const;
private:
    ICommand* command_;
};

