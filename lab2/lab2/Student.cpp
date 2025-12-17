#include "Student.h"

Student::Student()
    : Person(), faculty(""), course(0), group("") {
}

Student::Student(int id,
    const std::string& lastName,
    const std::string& firstName,
    const std::string& middleName,
    const std::string& phone,
    const std::string& faculty,
    int course,
    const std::string& group)
    : Person(id, lastName, firstName, middleName, phone),
    faculty(faculty),
    course(course),
    group(group) {
}

std::istream& operator>>(std::istream& in, Student& s) {
    in >> s.id
        >> s.lastName
        >> s.firstName
        >> s.middleName
        >> s.phone
        >> s.faculty
        >> s.course
        >> s.group;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Student& s) {
    out << s.id << " "
        << s.lastName << " "
        << s.firstName << " "
        << s.middleName << " "
        << s.phone << " "
        << s.faculty << " "
        << s.course << " "
        << s.group;
    return out;
}

bool Student::operator==(const Student& other) const {
    return id == other.id &&
        lastName == other.lastName &&
        firstName == other.firstName &&
        middleName == other.middleName &&
        phone == other.phone &&
        faculty == other.faculty &&
        course == other.course &&
        group == other.group;
}