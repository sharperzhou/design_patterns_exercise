#include "FlyweightFactory.h"
#include "ConcreteFlyweight.h"

int main(int argc, char* argv[])
{
    FlyweightFactory factory;
    auto f = factory.getFlyweight("one");
    return 0;
}
