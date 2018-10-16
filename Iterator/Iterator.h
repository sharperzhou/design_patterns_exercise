#pragma once

template <typename T>
class __declspec(novtable) IIterator
{
public:
    virtual T& start() = 0;
    virtual void next() = 0;
    virtual bool done() const = 0;
    virtual T& current() = 0;

    virtual ~IIterator() = default;
};
