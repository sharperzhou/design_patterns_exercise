#include "Adaptee.h"
#include "Adapter.h"
#include <memory>
using namespace std;

int main(int argc, char* argv[])
{
    unique_ptr<Adaptee> adaptee = make_unique<Adaptee>();
    unique_ptr<ITarget> target = make_unique<Adapter>(adaptee.get());

    target->request();

    return 0;
}
