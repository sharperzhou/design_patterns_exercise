#pragma once

class __declspec(novtable) IImplementor
{
public:
    virtual void operationImp() = 0;
    virtual ~IImplementor() = default;
};