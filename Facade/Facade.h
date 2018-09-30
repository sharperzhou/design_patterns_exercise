#pragma once
#include <memory>
#include "SubSystem.h"

class Facade
{
public:
    Facade();

    void wrapOperation() const;

private:
    std::unique_ptr<SubSystemA> sub_system_a_;
    std::unique_ptr<SubSystemB> sub_system_b_;
    std::unique_ptr<SubSystemC> sub_system_c_;
};

