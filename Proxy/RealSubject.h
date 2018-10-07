#pragma once
#include "Subject.h"
class RealSubject :
    public ISubject
{
public:
    void request() const override;
};

