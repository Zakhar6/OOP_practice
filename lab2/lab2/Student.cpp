#include "Student.h"

Student::Student(int id, std::string ln, std::string fn, std::string mn,
    std::string addr, std::string phone,
    std::string faculty, int course, std::string group)
    : Person(id, ln, fn, mn, addr, phone),
    faculty(faculty), course(course), group(group) {
}

void Student::print() const {
    Person::print();
    std::cout << " " << faculty << " "
        << course << " "
        << group << std::endl;
}