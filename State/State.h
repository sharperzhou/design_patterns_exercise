#pragma once
class Context;
class __declspec(novtable) IState
{
public:
    virtual void handle(Context* context) = 0;

    virtual ~IState() = default;
};