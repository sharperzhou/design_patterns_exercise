#include <memory>
#include <iostream>
#include <iomanip>
#include "ConcreteObserver.h"
#include "ConcreteSubject.h"

using namespace std;

int main(int argc, char* argv[])
{
    auto subject = make_unique<ConcreteSubject>();
    auto observerA = make_shared<ConcreteObserver>("A");
    auto observerB = make_shared<ConcreteObserver>("B");

    subject->attach(observerA);
    subject->attach(observerB);

    subject->setState(1);
    subject->notify();

    cout << "-----detach A, notify again------" << endl;

    subject->detach(observerA);
    subject->setState(2);
    subject->notify();


    return 0;
}
