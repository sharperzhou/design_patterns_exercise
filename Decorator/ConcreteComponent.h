#pragma once
#include "Component.h"
class ConcreteComponent :
    public IComponent
{
public:
    void operation() override;
};

