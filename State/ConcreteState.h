#pragma once
#include <memory>
#include "State.h"

class ConcreteStateA : public IState
{
public:
    static std::shared_ptr<IState> instance();
    void handle(Context* context) override;

private:
    ConcreteStateA() = default;
    static std::shared_ptr<IState> state_;
};

class ConcreteStateB : public IState
{
public:
    static std::shared_ptr<IState> instance();
    void handle(Context* context) override;

private:
    ConcreteStateB() = default;
    static std::shared_ptr<IState> state_;
};
