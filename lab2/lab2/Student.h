#pragma once
#include "Person.h"
#include <string>
#include <iostream>

class Student : public Person {
private:
    std::string faculty;
    int course;
    std::string group;

public:
    Student();
    Student(int id,
        const std::string& lastName,
        const std::string& firstName,
        const std::string& middleName,
        const std::string& phone,
        const std::string& faculty,
        int course,
        const std::string& group);

    friend std::istream& operator>>(std::istream& in, Student& s);
    friend std::ostream& operator<<(std::ostream& out, const Student& s);

    bool operator==(const Student& other) const;
};