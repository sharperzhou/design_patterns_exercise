#include "ConcreteState.h"
#include <iostream>
#include "Context.h"
using namespace std;

shared_ptr<IState> ConcreteStateA::state_ = nullptr;
shared_ptr<IState> ConcreteStateA::instance()
{
    if (state_ == nullptr) {
        state_.reset(new ConcreteStateA);
    }
    return state_;
}

void ConcreteStateA::handle(Context* context)
{
    cout << "doing something in State A.\n done,change state to B" << endl;
    context->changeState(ConcreteStateB::instance());
}

shared_ptr<IState> ConcreteStateB::state_ = nullptr;
shared_ptr<IState> ConcreteStateB::instance()
{
    if (state_ == nullptr) {
        state_.reset(new ConcreteStateB);
    }
    return state_;
}

void ConcreteStateB::handle(Context* context)
{
    cout << "doing something in State B.\n done,change state to A" << endl;
    context->changeState(ConcreteStateA::instance());
}
