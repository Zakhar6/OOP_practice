#pragma once
#include <string>
#include <iostream>

class Person {
protected:
    int id;
    std::string lastName;
    std::string firstName;
    std::string middleName;
    std::string address;
    std::string phone;

public:
    Person();
    Person(int id, std::string ln, std::string fn, std::string mn,
        std::string addr, std::string phone);

    void print() const;
};