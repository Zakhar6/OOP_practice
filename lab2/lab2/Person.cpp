#include "Person.h"

Person::Person()
    : id(0), lastName(""), firstName(""), middleName(""), phone("") {
}

Person::Person(int id,
    const std::string& lastName,
    const std::string& firstName,
    const std::string& middleName,
    const std::string& phone)
    : id(id),
    lastName(lastName),
    firstName(firstName),
    middleName(middleName),
    phone(phone) {
}

Person::~Person() {
}