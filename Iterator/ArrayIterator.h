#pragma once
#include "Iterator.h"
#include "Array.h"

template <typename T>
class ArrayIterator : public IIterator<T>
{
public:
    explicit ArrayIterator(ICollection<T>* collection);

    T& start() override;
    void next() override;
    bool done() const override;
    T& current() override;

private:
    ICollection<T>* collection_;
    size_t index_;
};

template <typename T>
ArrayIterator<T>::ArrayIterator(ICollection<T>* collection)
    : collection_(collection),
      index_(0)
{
}

template <typename T>
T& ArrayIterator<T>::start()
{
    return collection_->front();
}

template <typename T>
void ArrayIterator<T>::next()
{
    index_++;
}

template <typename T>
bool ArrayIterator<T>::done() const
{
    return index_ >= collection_->size();
}

template <typename T>
T& ArrayIterator<T>::current()
{
    return collection_->at(index_);
}
