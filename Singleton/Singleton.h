#pragma once
#include <memory>

class Singleton
{
public:
    ~Singleton() = default;

    static Singleton* getInstance();
    void operation() const;
private:
    static void deleter(Singleton* ptr);
    static std::unique_ptr<Singleton, decltype(&Singleton::deleter)> instance_;
    Singleton() = default;
};

