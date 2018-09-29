#include "Director.h"
#include "Builder.h"


Director::Director(Builder* builder)
    : builder_(builder)
{
}

std::shared_ptr<Product> Director::constuct() const
{
    builder_->buildPartA();
    builder_->buildPartB();
    builder_->buildPartC();
    
    return builder_->getResult();
}

void Director::setBuilder(Builder* builder)
{
    builder_ = builder;
}
