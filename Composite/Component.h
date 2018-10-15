#pragma once

class __declspec(novtable) IComponent
{
public:
    virtual void operation() = 0;
    virtual ~IComponent() = default;
};