#include <memory>
#include "ConcreteCommand.h"
#include "Receiver.h"
#include "Invoker.h"
using namespace std;

int main() {

    auto receiver = make_unique<Receiver>();
    auto cmd = make_unique<ConcreteCommand>(receiver.get());
    auto invoker = make_unique<Invoker>(cmd.get());

    invoker->call();

    return 0;
}