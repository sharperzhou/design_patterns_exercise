#pragma once
#include "Subject.h"

class ConcreteSubject : public Subject
{
public:
    ConcreteSubject();

    int getState() const override;
    void setState(int s) override;

protected:
    int state_;
};
