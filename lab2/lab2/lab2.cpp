#include "Student.h"
#include <iostream>

int main() {
    Student object1, object2, object3;
    std::cin >> object1 >> object2 >> object3;
    std::cout << object1 << std::endl << object2 << std::endl << object3 << std::endl;

    if (object1 == object2)
        std::cout << "object1 і object2 однакові" << std::endl;
    else
        std::cout << "object1 і object2 різні" << std::endl;

    return 0;
}