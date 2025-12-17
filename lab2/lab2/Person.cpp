#include "Person.h"

Person::Person() {}

Person::Person(int id, std::string ln, std::string fn, std::string mn,
    std::string addr, std::string phone)
    : id(id), lastName(ln), firstName(fn), middleName(mn),
    address(addr), phone(phone) {
}

void Person::print() const {
    std::cout << id << " "
        << lastName << " "
        << firstName << " "
        << middleName << " "
        << address << " "
        << phone;
}