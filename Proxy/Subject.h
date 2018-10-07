#pragma once

class __declspec(novtable) ISubject {
public:
    virtual void request() const = 0;
    virtual ~ISubject() = default;
};