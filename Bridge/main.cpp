#include <memory>
#include "ConcreteAbstraction.h"
#include "ConcreteImplementor.h"
#include "ConcreteAbstraction2.h"
using namespace std;

int main(int argc, char* argv[])
{
    unique_ptr<IImplementor> impl1 = make_unique<ConcreteImplementorA>();
    unique_ptr<IImplementor> impl2 = make_unique<ConcreteImplementorB>();

    unique_ptr<Abstraction> abstraction1 = make_unique<ConcreteAbstraction>(impl2.get());
    unique_ptr<Abstraction> abstraction2 = make_unique<ConcreteAbstraction2>(impl1.get());

    abstraction1->operation();
    abstraction2->operation();

    return 0;
}
