#include "ConcretePrototype.h"

int main(int argc, char* argv[])
{
    ConcretePrototypeA prototype_a;
    auto clone1 = prototype_a.clone();
    clone1->operation();

    ConcretePrototypeB prototype_b;
    for (int i = 0; i < 5; ++i) {
        auto clone2 = prototype_b.clone();
        clone2->operation();
    }

    return 0;
}
