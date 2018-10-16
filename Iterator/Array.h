#pragma once
#include <array>
#include "Collection.h"

template <typename T>
class ArrayIterator;

template <typename T, size_t N = 1>
class Array : public ICollection<T>
{
public:
    Array(std::initializer_list<T> il);
    Array() = default;

    std::unique_ptr<IIterator<T>> newIterator() override;

    T& front() override;
    T& at(size_t i) override;
    size_t size() const override;

private:
    std::array<T, N> array_;
};

template <typename T, size_t N>
Array<T, N>::Array(std::initializer_list<T> il)
{
    std::copy(il.begin(), il.end(), array_.begin());
}

template <typename T, size_t N>
std::unique_ptr<IIterator<T>> Array<T, N>::newIterator()
{
    return std::make_unique<ArrayIterator<T>>(this);
}

template <typename T, size_t N>
T& Array<T, N>::front()
{
    return array_.front();
}

template <typename T, size_t N>
T& Array<T, N>::at(size_t i)
{
    return array_.at(i);
}

template <typename T, size_t N>
size_t Array<T, N>::size() const
{
    return N;
}
