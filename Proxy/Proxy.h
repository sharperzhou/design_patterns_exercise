#pragma once
#include "Subject.h"
class Proxy :
    public ISubject
{
public:
    Proxy();
    ~Proxy();

    Proxy(const Proxy&) = delete;
    Proxy& operator=(const Proxy&) = delete;

    void request() const override;

private:
    ISubject* subject_;

    void preRequest() const;
    void afterRequest() const;
};

