#pragma once
#include <iostream>
#include <string>

class Student {
private:
    int id;
    std::string firstName;
    std::string lastName;
    std::string middleName;
    std::string birthDate;
    std::string phoneNumber;

public:
    Student() : id(0), firstName(""), lastName(""), middleName(""), birthDate(""), phoneNumber("") {}
    Student(int id, const std::string& firstName, const std::string& lastName, const std::string& middleName, const std::string& birthDate, const std::string& phoneNumber)
        : id(id), firstName(firstName), lastName(lastName), middleName(middleName), birthDate(birthDate), phoneNumber(phoneNumber) {
    }

    friend std::istream& operator>>(std::istream& in, Student& s);
    friend std::ostream& operator<<(std::ostream& out, const Student& s);
};