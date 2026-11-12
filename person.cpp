//
// Created by Arias Arevalo, Carlos on 11/12/26.
//

#include "person.h"

#include <cstring>
#include <sstream>
Person::Person(): _age(0), _level(0) {
    _name = new char[7];
    strcpy(_name, "NONAME");
    strcpy(_phone, "0000000000");
}

Person::Person(const char *name, unsigned int age, const char *phone, unsigned int level):
    _age(age), _level(level){
    _name = new char[strlen(name) + 1];
    strcpy(_name, name);
    strcpy(_phone, phone);
}

Person::Person(const Person &p): _age(p._age), _level(p._level) {
    _name = new char[strlen(p._name) + 1];
    strcpy(_name, p._name);
    strcpy(_phone, p._phone);
}

Person::~Person() {
    delete[] _name;
}

std::string Person::ToString() const {
    std::stringstream ss;
    ss << "Name: " << _name << " Age: " << _age << " Level: " << _level << " Phone: " << _phone;
    return ss.str();
}

void Person::SetName(const char *name) {
    delete[] _name;
    _name = new char[strlen(name) + 1];
    strcpy(_name, name);
}

const char * Person::GetName() const {
    return _name;
}

const char * Person::GetPhone() const {
    return _phone;
}

void Person::SetLevel(unsigned int level) {
    _level = level;
}

unsigned int Person::GetLevel() const {
    return _level;
}

unsigned int Person::GetAge() const {
    return _age;
}

void Person::Birthday() {
    _age++;
}
