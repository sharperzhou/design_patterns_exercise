#pragma once
#include "Target.h"
#include "Adaptee.h"

class Adapter :
    public ITarget, public Adaptee
{
public:
    void request() override;
};

