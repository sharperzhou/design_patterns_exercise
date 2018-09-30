#include "FlyweightFactory.h"
#include "ConcreteFlyweight.h"
using namespace std;

shared_ptr<IFlyweight> FlyweightFactory::getFlyweight(const string & name)
{
    auto it = cache_.find(name);
    if (it != cache_.end()) {
        return it->second;
    } else {
        auto item = make_shared<ConcreteFlyweight>();
        cache_.emplace(make_pair(name, item));
        return item;
    }
}
