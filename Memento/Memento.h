#pragma once
#include <ctime>

struct State
{
    int       id;
    time_t    time_stamp;
};

class Memento
{
public:
    State getState() const;
    void  setState(const State& state);


    explicit Memento(const State& state)
        : state_(state)
    {
    }

    Memento()
        : state_{0,0}
    {
    }

protected:
    State state_;
};
