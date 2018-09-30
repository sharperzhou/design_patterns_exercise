#pragma once
class __declspec(novtable) ITarget
{
public:
    virtual  void request() = 0;
    virtual ~ITarget() = default;
};