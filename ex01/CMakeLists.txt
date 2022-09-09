cmake_minimum_required(VERSION 3.22)
project(cpp_clion)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp_clion main.cpp Contact.cpp Contact.hpp Phonebook.cpp Phonebook.hpp)
