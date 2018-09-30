#pragma once
#include "Target.h"
class Adaptee;

class Adapter : public ITarget
{
public:

    explicit Adapter(Adaptee* adaptee);

    void request() override;

private:
    Adaptee* adaptee_;
};
