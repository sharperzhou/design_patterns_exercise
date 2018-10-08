#include "Context.h"
#include "Strategy.h"

Context::Context()
    : strategy_(nullptr)
{
}

void Context::algorithm()
{
    if (strategy_ != nullptr)
        strategy_->algorithm();
}

void Context::setStrategy(IStrategy* strategy)
{
    strategy_ = strategy;
}
