#include <iostream>
#include <string>
#include "Person.h"
#include "Teacher.h"
#include "Seller.h"
#include "Doctor.h"
#include "Student.h"

int chooseClass() {
    int choice;
    std::cout << "Виберіть клас для створення об'єкта:\n";
    std::cout << "1. Teacher\n";
    std::cout << "2. Seller\n";
    std::cout << "3. Doctor\n";
    std::cout << "4. Student\n";
    std::cout << "Введіть номер: ";
    std::cin >> choice;
    return choice;
}

int main() {
    Person* arr[5];

    for (int i = 0; i < 5; ++i) {
        int choice = chooseClass();
        switch (choice) {
        case 1:
            arr[i] = new Teacher();
            break;
        case 2:
            arr[i] = new Seller();
            break;
        case 3:
            arr[i] = new Doctor();
            break;
        case 4:
            arr[i] = new Student();
            break;
        default:
            std::cout << "Невірний вибір, об'єкт Student створено за замовчуванням.\n";
            arr[i] = new Student();
            break;
        }
    }

    for (int i = 0; i < 5; ++i) {
        arr[i]->print();
    }

    for (int i = 0; i < 5; ++i) {
        arr[i]->virtualMethod();
    }
}