#pragma once
class IStrategy;

class Context
{
public:
    Context();

    void algorithm();
    void setStrategy(IStrategy* strategy);
protected:
    IStrategy* strategy_;
};
