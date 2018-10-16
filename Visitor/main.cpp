#include "MyVisitor.h"
#include "ConcreteElement.h"

int main(int argc, char* argv[])
{
    ConcreteElementA element_a;
    MyVisitor visitor;

    element_a.accept(&visitor);

    return 0;
}
