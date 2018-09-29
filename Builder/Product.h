#pragma once
#include <string>
#ifdef _DEBUG
#include <iostream>
#endif
class Product
{
public:
    void setA(const std::string& A);
    void setB(const std::string& B);
    void setC(const std::string& C);
    void show() const;

#ifdef _DEBUG
#include <iostream>
    Product() { std::cout << "Proudct constructor" << std::endl; }
    ~Product() { std::cout << "Proudct destructor" << std::endl; }
#endif

private:
    std::string a_;
    std::string b_;
    std::string c_;
};
