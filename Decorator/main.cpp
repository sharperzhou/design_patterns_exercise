#include <memory>
#include "ConcreteComponent.h"
#include "ConcreteDecorator.h"
using namespace std;

int main(int argc, char* argv[])
{
    unique_ptr<IComponent> comp = make_unique<ConcreteComponent>();
    comp->operation();

    auto decoratored1 = make_unique<ConcreteDecoratorA>(comp.get());
    decoratored1->addBehavior();

    auto decoratored2 = make_unique<ConcreteDecoratorB>(decoratored1.get());
    decoratored2->addBehavior();

    return 0;
}
