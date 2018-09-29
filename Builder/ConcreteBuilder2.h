#pragma once
#include "Builder.h"
class ConcreteBuilder2 :
    public Builder
{
public:
    void buildPartA() override;
    void buildPartB() override;
    void buildPartC() override;
};

