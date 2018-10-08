#pragma once
#include <memory>
#include <vector>

class IObserver;
class __declspec(novtable) Subject 
{
public:
    void attach(const std::shared_ptr<IObserver>& observer);
    void detach(const std::shared_ptr<IObserver>& observer);
    void notify();

    virtual int getState() const = 0;
    virtual void setState(int s) = 0;

    virtual ~Subject() = default;

protected:
    std::vector<std::shared_ptr<IObserver>> observers_;
};
