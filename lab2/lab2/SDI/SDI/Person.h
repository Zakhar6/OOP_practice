#pragma once
#include <string>

class Person {
protected:
    int id;
    std::string lastName;
    std::string firstName;
    std::string middleName;
    std::string phone;

public:
    Person();
    Person(int id,
        const std::string& lastName,
        const std::string& firstName,
        const std::string& middleName,
        const std::string& phone);

    virtual ~Person();
};