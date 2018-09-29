#include "Singleton.h"

int main()
{
    Singleton* case1 = Singleton::getInstance();
    {
        auto case2 = Singleton::getInstance();

        case1->operation();
        case2->operation();
    }


    return 0;
}