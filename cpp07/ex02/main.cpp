#include <iostream>
#include "Array.hpp"
#include <stdlib.h>
#include <ctime>

#define MAX_VAL10 10
#define MAX_VAL20 20

int main(void)
{
    Array<int> numbers10(MAX_VAL10);
    Array<int> numbers20(MAX_VAL20);
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL10; i++)
    {
        const int value = rand();
        numbers10[i] = value;
    }
    for (int i = 0; i < MAX_VAL20; i++)
    {
        const int value = rand();
        numbers20[i] = value;
    }
    std::cout << "**************** numbers20 *************" << std::endl;
    std::cout << numbers20 << std::endl;
    std::cout << "**************** numbers10 *************" << std::endl;
    std::cout << numbers10 << std::endl;
    {
        Array<int> tmp = numbers10;
        std::cout << "**************** tmp *************" << std::endl;
        std::cout << tmp << std::endl;
        Array<int> test(tmp);
        std::cout << "**************** test *************" << std::endl;
        std::cout << test << std::endl;
    }

    std::cout << "**************** Check indexation *************" << std::endl;
    numbers10[0] += 100;
    std::cout << numbers10 << std::endl;

    std::cout << "**************** Check out of range exception *************" << std::endl;
    try
    {
        numbers10[-1] = 0;
    }
    catch(std::exception &e)
    {
        std::cerr << "Reason: " <<  e.what() << std::endl;
    }

    std::cout << "**************** Check array of string *************" << std::endl;

    Array<std::string> strings = Array<std::string>(3);
    strings[0] = "Batman";
    strings[1] = "hates";
    strings[2] = "the Joker";

    std::cout << strings << std::endl;

    std::cout << "**************** Copy numbers20 to numbers10 *************" << std::endl;
    try
    {
        numbers10 = numbers20;
        std::cout << numbers10 << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << "Reason: " <<  e.what() << std::endl;
    }
    return 0;
}
