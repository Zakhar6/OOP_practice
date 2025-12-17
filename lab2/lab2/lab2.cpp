#include <iostream>
#include "Student.h"

int main() {
    Student s1, s2;

    std::cin >> s1;
    std::cin >> s2;

    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;

    if (s1 == s2)
        std::cout << "Students are equal" << std::endl;
    else
        std::cout << "Students are not equal" << std::endl;

    return 0;
}