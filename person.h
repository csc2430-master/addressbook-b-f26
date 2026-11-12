//
// Created by Arias Arevalo, Carlos on 11/12/26.
//

#ifndef ADDRESSBOOK_B_F26_PERSON_H
#define ADDRESSBOOK_B_F26_PERSON_H

#include <string>

class Person {
private:
    char* _name;
    unsigned int _age;
    char _phone[11];
    unsigned int _level;
public:
    Person();
    Person(const char* name, unsigned int age, const char* phone, unsigned int level);
    Person(const Person& p);
    ~Person();
    Person& operator=(const Person& rhs);
    std::string ToString()const;
    void SetName(const char* name);
    const char* GetName()const;
    const char* GetPhone()const;
    void SetLevel(unsigned int level);
    unsigned int GetLevel()const;
    unsigned int GetAge()const;
    void Birthday();
};


#endif //ADDRESSBOOK_B_F26_PERSON_H