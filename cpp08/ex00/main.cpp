#include "easyfind.hpp"
#include <list>
#include <vector>
#include <iostream>

#define MAX_VALUE 100

int		main() {

    std::list<int>		myList;
    std::vector<int>	myVector;

    for (int i = 0; i < MAX_VALUE; i++) {
        myList.push_back(i);
        myVector.push_back(i);
    }

    std::cout << " *** Find 10 *** " << std::endl;
    try {
        std::cout << easyfind(myList, 10) << std::endl;
        std::cout << easyfind(myVector, 10) << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "*** Find 101 ***" << std::endl;
    try {
        std::cout << easyfind(myList, 101) << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}