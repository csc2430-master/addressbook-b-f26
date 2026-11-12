#include "person.h"

#include <iostream>

int main() {
    Person p;
    std::cout << p.ToString() << std::endl;
    p.Birthday();
    std::cout << p.ToString() << std::endl;

    Person q("John", 23, "2065551234", 2);
    std::cout << q.ToString() << std::endl;
    q.Birthday();
    std::cout << q.ToString() << std::endl;


    return 0;
}