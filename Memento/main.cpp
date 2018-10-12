#include <stack>
#include "Originator.h"
#include <iostream>
#include <thread>

using namespace std;

class Caretaker
{
public:
    void addMemento(const Memento& m)
    {
        mementos_.emplace(m);
    }

    Memento getMemento()
    {
        Memento m;
        if (!mementos_.empty()) {
            m = mementos_.top();
            mementos_.pop();
        }

        return m;
    }

private:
    stack<Memento> mementos_;
};

int main(int argc, char* argv[])
{
    Originator originator;
    originator.setState(State{1, chrono::system_clock::to_time_t(chrono::system_clock::now())});

    // save the memento
    Caretaker ctk;
    ctk.addMemento(originator.createMemento());

    this_thread::sleep_for(chrono::milliseconds(3000));

    originator.setState(State{2, chrono::system_clock::to_time_t(chrono::system_clock::now())});
    cout << "Id: " << originator.getState().id
        << " timestamp: " << originator.getState().time_stamp << endl;

    // restore the memento
    originator.setMemento(ctk.getMemento());
    cout << "Id: " << originator.getState().id
        << " timestamp: " << originator.getState().time_stamp << endl;

    return 0;
}
