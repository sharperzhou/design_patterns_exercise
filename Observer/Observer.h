#pragma once
class Subject;
class __declspec(novtable) IObserver
{
public:
    virtual void update(Subject* subject) = 0;
    virtual ~IObserver() = default;
};