#include "Context.h"
#include "State.h"
#include "ConcreteState.h"

Context::Context()
    : state_(ConcreteStateA::instance())
{
}

void Context::changeState(const std::shared_ptr<IState>& state)
{
    state_ = state;
}

void Context::request()
{
    state_->handle(this);
}
