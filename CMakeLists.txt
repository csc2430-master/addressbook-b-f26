cmake_minimum_required(VERSION 3.28)
project(addressbook_b_f26)

set(CMAKE_CXX_STANDARD 20)

add_executable(addressbook_b_f26 main.cpp
        person.cpp
        person.h
        address_book.cpp
        address_book.h)
