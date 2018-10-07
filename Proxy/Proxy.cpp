#include "Proxy.h"
#include <iostream>
#include "RealSubject.h"
using namespace std;

Proxy::Proxy()
    : subject_(new RealSubject)
{
}

Proxy::~Proxy()
{
    delete subject_;
}
void Proxy::request() const
{
    preRequest();
    subject_->request();
    afterRequest();
}
void Proxy::preRequest() const
{
    cout << "preRequest() in Proxy" << endl;
}

void Proxy::afterRequest() const
{
    cout << "afterRequest() in Proxy" << endl;
}
