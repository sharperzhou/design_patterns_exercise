#pragma once
#include <list>
#include <string>
#include "Component.h"

class Composite : public IComponent
{
public:
    Composite() = default;
    Composite(const std::string& name);

    void operation() override;
    void add(IComponent* component);
    void remove(IComponent* component);

protected:
    std::list<IComponent*> components_;
    std::string name_;
};
