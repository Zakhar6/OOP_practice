#pragma once
#include "Person.h"

class Student : public Person {
private:
    std::string faculty;
    int course;
    std::string group;

public:
    Student(int id, std::string ln, std::string fn, std::string mn,
        std::string addr, std::string phone,
        std::string faculty, int course, std::string group);

    void print() const;
};