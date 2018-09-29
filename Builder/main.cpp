#include "ConcreteBuilder.h"
#include "Director.h"
#include "ConcreteBuilder2.h"
using namespace std;

int main(int argc, char* argv[])
{
    unique_ptr<Builder> builder = make_unique<ConcreteBuilder>();
    Director director(builder.get());

    auto prod = director.constuct();

    prod->show();

    auto builder2 = make_unique<ConcreteBuilder2>();
    director.setBuilder(builder2.get());
    prod = director.constuct();
    prod->show();

    return 0;
}
