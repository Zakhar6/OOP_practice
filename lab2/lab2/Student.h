#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

class Student {
private:
    int id;
    std::string firstName;
    std::string middleName;
    std::string lastName;
    std::string birthDate;
    std::string phoneNumber;
    std::string faculty;
    int course;
    std::string group;

public:
    Student() : id(0), course(0) {}
    friend std::istream& operator>>(std::istream& in, Student& s);
    friend std::ostream& operator<<(std::ostream& out, const Student& s);
    bool operator==(const Student& other) const {
        return id == other.id &&
            firstName == other.firstName &&
            middleName == other.middleName &&
            lastName == other.lastName &&
            birthDate == other.birthDate &&
            phoneNumber == other.phoneNumber &&
            faculty == other.faculty &&
            course == other.course &&
            group == other.group;
    }
};

#endif