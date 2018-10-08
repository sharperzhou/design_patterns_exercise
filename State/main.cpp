#include "Context.h"
#include "ConcreteState.h"

int main(int argc, char* argv[])
{
    Context context;
    context.request();
    context.request();
    context.request();

    return 0;
}
