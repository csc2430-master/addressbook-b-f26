//
// Created by Arias Arevalo, Carlos on 11/17/26.
//

#include "address_book.h"
#include <cstring>
#include <sstream>

AddressBook::AddressBook(): _peopleCount(0) {

}

AddressBook::~AddressBook() {
}

bool AddressBook::AddPerson(const char *name, unsigned int age, const char *phone, unsigned int level) {
    if (_peopleCount == 5)
        return false;
    _data[_peopleCount] = new Person(name, age, phone, level);
    _peopleCount++;
    return true;
}

Person AddressBook::Find(const char *name) const {
    for (size_t i=0; i<_peopleCount; i++) {
        if (strcmp(name, _data[i]->GetName()) == 0)
            return *_data[i];
    }
    return Person();
}

std::string AddressBook::ToString() const {
    std::stringstream ss;
    ss << "[";
    for (size_t i=0; i<peopleCount; i++) {
        if (i != peopleCount - 1) {
            ss << _data[i]->ToString() << ",";
        }else {
            ss << _data[i]->ToString();
        }
    }
    ss << "]";
    return ss.str();
}

std::ostream & AddressBook::Write(std::ostream &output) const {
    for (size_t i=0; i<peopleCount; i++)
        output << _data[i]->GetName() << " "
                << _data[i]->GetAge() << " "
                << _data[i]->GetPhone() << " "
                << _data[i]->GetLevel() << '\n';
    return output;
}
