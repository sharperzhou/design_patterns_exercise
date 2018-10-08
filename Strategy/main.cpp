#include "Context.h"
#include "ConcreteStrategy.h"

int main(int argc, char* argv[])
{
    Context context;
    ConcreteStrategyA strategy_a;
    ConcreteStrategyB strategy_b;

    context.setStrategy(&strategy_a);
    context.algorithm();

    context.setStrategy(&strategy_b);
    context.algorithm();

    return 0;
}
