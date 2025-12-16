#include "Student.h"

std::istream& operator>>(std::istream& in, Student& s) {
    std::cout << "Enter id: ";
    in >> s.id;
    std::cout << "Enter first name: ";
    in >> s.firstName;
    std::cout << "Enter middle name: ";
    in >> s.middleName;
    std::cout << "Enter last name: ";
    in >> s.lastName;
    std::cout << "Enter birth date: ";
    in >> s.birthDate;
    std::cout << "Enter phone number: ";
    in >> s.phoneNumber;
    std::cout << "Enter faculty: ";
    in >> s.faculty;
    std::cout << "Enter course: ";
    in >> s.course;
    std::cout << "Enter group: ";
    in >> s.group;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Student& s) {
    out << s.id << " " << s.firstName << " " << s.middleName << " " << s.lastName
        << " " << s.birthDate << " " << s.phoneNumber << " " << s.faculty
        << " " << s.course << " " << s.group;
    return out;
}