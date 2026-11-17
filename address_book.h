//
// Created by Arias Arevalo, Carlos on 11/17/26.
//

#ifndef ADDRESSBOOK_B_F26_ADDRESS_BOOK_H
#define ADDRESSBOOK_B_F26_ADDRESS_BOOK_H

#include "person.h"
#include <iostream>
#include <string>

class AddressBook {
private:
    Person* _data[5];
    size_t peopleCount;
public:
    AddressBook();
    ~AddressBook();
    AddressBook(const AddressBook& ab) = delete;
    AddressBook& operator=(const AddressBook& ab) = delete;
    bool AddPerson(const char* name, unsigned int age, const char* phone, unsigned int level);
    Person Find(const char* name)const;
    std::string ToString()const;
    std::ostream& Write(std::ostream& output)const;

};


#endif //ADDRESSBOOK_B_F26_ADDRESS_BOOK_H