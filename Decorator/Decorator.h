#pragma once
#include "Component.h"
class Decorator :
    public IComponent
{
public:
    Decorator(IComponent* comp);
    virtual ~Decorator() = default;

    void operation() override;

protected:
    IComponent* comp_;
};

