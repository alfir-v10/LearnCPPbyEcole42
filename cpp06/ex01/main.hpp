#ifndef MAIN_HPP
# define MAIN_HPP

#include <iostream>
#include <stdint.h>

struct Data
{
    std::string one;
    std::string two;
};

uintptr_t   serialize(Data* ptr);
Data*       deserialize(uintptr_t raw);

#endif