#include "Student.h"

std::istream& operator>>(std::istream& in, Student& s) {
    in >> s.id;
    in.ignore();
    std::getline(in, s.firstName);
    std::getline(in, s.lastName);
    std::getline(in, s.middleName);
    std::getline(in, s.birthDate);
    std::getline(in, s.phoneNumber);
    return in;
}

std::ostream& operator<<(std::ostream& out, const Student& s) {
    out << "ID: " << s.id << std::endl;
    out << "First Name: " << s.firstName << std::endl;
    out << "Last Name: " << s.lastName << std::endl;
    out << "Middle Name: " << s.middleName << std::endl;
    out << "Birth Date: " << s.birthDate << std::endl;
    out << "Phone Number: " << s.phoneNumber;
    return out;
}
