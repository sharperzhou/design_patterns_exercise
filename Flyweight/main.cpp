#include "FlyweightFactory.h"
#include "ConcreteFlyweight.h"

int main(int argc, char* argv[])
{
    FlyweightFactory factory;
    auto fw1 = factory.getFlyweight("one");
    fw1->operation();

    auto fw2 = factory.getFlyweight("two");
    fw2->operation();

    auto fw3 = factory.getFlyweight("one");
    fw3->operation();

    return 0;
}
