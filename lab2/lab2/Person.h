#pragma once
#include <QString>

class Person {
protected:
    int id;
    QString lastName;
    QString firstName;
    QString middleName;
    QString phone;

public:
    Person();
    Person(int id, const QString& lastName, const QString& firstName, const QString& middleName, const QString& phone);

    QString toString() const;

    virtual ~Person();
};
