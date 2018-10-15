#pragma once
#include <string>
#include "Composite.h"

class Leaf : public Composite
{
public:
    Leaf() = default;
    Leaf(const std::string& name);

    void operation() override;

protected:
    std::string name_;
};
