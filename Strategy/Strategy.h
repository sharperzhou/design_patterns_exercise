#pragma once
class __declspec(novtable) IStrategy
{
public:
    virtual void algorithm() = 0;
    virtual ~IStrategy() = default;
};