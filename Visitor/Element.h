#pragma once

class IVisitor;

class __declspec(novtable) IElement
{
public:
    virtual void accept(IVisitor* visitor) = 0;

    virtual ~IElement() = default;
};