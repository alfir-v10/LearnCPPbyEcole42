#include <iostream>
#include "Brain.hpp"

Brain::Brain(void){
    std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &obj){
    std::cout << "Copy Brain constructor called" << std::endl;
    *this = obj;
}

Brain::~Brain(void){
    std::cout << "Default Brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &obj){
    std::cout << "Assignment Brain operator called" << std::endl;
	if (this != &obj) {
		for (int i = 0; i < 100; i++) {
			_ideas[i] = obj._ideas[i];
		}
	}
    return *this;
}
