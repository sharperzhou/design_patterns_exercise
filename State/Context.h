#pragma once
#include <memory>

class IState;
class Context
{
public:
    Context();

    void changeState(const std::shared_ptr<IState>& state);
    void request();

protected:
    std::shared_ptr<IState> state_;
};
