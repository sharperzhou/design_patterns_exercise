#include "Facade.h"

Facade::Facade()
    : sub_system_a_(new SubSystemA),
      sub_system_b_(new SubSystemB),
      sub_system_c_(new SubSystemC)
{
}

void Facade::wrapOperation() const
{
    sub_system_a_->operationA();
    sub_system_b_->operationB();
    sub_system_c_->operationC();
}
