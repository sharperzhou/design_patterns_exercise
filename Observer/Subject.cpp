#include "Subject.h"
#include "Observer.h"

void Subject::attach(const std::shared_ptr<IObserver>& observer)
{
    observers_.emplace_back(observer);
}

void Subject::detach(const std::shared_ptr<IObserver>& observer)
{
    for (auto it = observers_.begin(); it != observers_.end(); ++it) {
        if (*it == observer) {
            observers_.erase(it);
            break;
        }
    }
}

void Subject::notify()
{
    for (auto& ob : observers_)
        ob->update(this);
}
