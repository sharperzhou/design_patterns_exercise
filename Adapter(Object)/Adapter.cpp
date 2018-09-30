#include "Adapter.h"
#include "Adaptee.h"

Adapter::Adapter(Adaptee* adaptee) : adaptee_(adaptee)
{
}

void Adapter::request()
{
    adaptee_->specificRequest();
}
