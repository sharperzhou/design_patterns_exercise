#include "Adapter.h"
#include <memory>
using namespace std;

int main(int argc, char* argv[])
{
    unique_ptr<ITarget> target = make_unique<Adapter>();

    target->request();

    return 0;
}
