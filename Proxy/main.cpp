#include <iostream>
#include "Proxy.h"
#include "RealSubject.h"

int main()
{
    // RealSubject
    RealSubject realSubject;
    realSubject.request();

    std::cout << std::endl;
    // Proxy for RealSubject
    Proxy proxy;
    proxy.request();

    return 0;
}