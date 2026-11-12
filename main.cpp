#include "person.h"

#include <iostream>
void WriteFriendType(Person p);

int main() {
    Person p;
    std::cout << p.ToString() << std::endl;
    p.Birthday();
    std::cout << p.ToString() << std::endl;
    WriteFriendType(p);

    Person q("John", 23, "2065551234", 4);
    std::cout << q.ToString() << std::endl;
    q.Birthday();
    std::cout << q.ToString() << std::endl;
    WriteFriendType(q);

    q = p;
    std::cout << q.ToString() << std::endl;
    q.Birthday();
    std::cout << q.ToString() << std::endl;
    WriteFriendType(q);


    return 0;
}

void WriteFriendType(Person p) {
    if (p.GetLevel() < 3)
        std::cout << "Acquaintance\n";
    else if (p.GetLevel() < 5)
        std::cout << "Mate\n";
    else if (p.GetLevel() < 8)
        std::cout << "Friend\n";
    else
        std::cout << "Good friend\n";
}
