#include "Person.h"

Person::Person()
    : id(0), lastName(""), firstName(""), middleName(""), phone("") {
}

Person::Person(int i, const QString& ln, const QString& fn, const QString& mn, const QString& ph)
    : id(i), lastName(ln), firstName(fn), middleName(mn), phone(ph) {
}

QString Person::toString() const {
    return "ID: " + QString::number(id) + ", Name: " + lastName + " " + firstName + " " + middleName + ", Phone: " + phone;
}

Person::~Person() {
}
