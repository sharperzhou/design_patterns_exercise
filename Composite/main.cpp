#include "Composite.h"
#include "Leaf.h"

int main(int argc, char* argv[])
{
    Composite root("root");
    Composite node1("node1");
    Composite node2("node2");
    Composite node3("node3");
    Composite node4("node4");

    Leaf leaf1("leaf1");
    Leaf leaf2("leaf2");
    Leaf leaf3("leaf3");
    Leaf leaf4("leaf4");
    Leaf leaf5("leaf5");

    root.add(&node1);
    root.add(&node2);
    root.add(&leaf1);

    node2.add(&node3);
    node2.add(&leaf2);

    node3.add(&leaf3);
    node3.add(&leaf4);

    node3.add(&node4);
    node4.add(&leaf5);

    root.operation();

    return 0;
}
