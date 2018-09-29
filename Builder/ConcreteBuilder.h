#pragma once
#include "Builder.h"

class ConcreteBuilder :
    public Builder
{
public:
    void buildPartA() override;
    void buildPartB() override;
    void buildPartC() override;
};

