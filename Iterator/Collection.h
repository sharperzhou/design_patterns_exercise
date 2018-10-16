#pragma once
#include <memory>

template <typename T>
class IIterator;

template <typename T>
class __declspec(novtable) ICollection
{
public:
    virtual ~ICollection() = default;

    virtual std::unique_ptr<IIterator<T>> newIterator();

    virtual T& front() = 0;
    virtual T& at(size_t i) = 0;
    virtual size_t size() const = 0;
};
