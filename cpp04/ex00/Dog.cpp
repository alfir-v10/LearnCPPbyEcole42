#include "Dog.hpp"

Dog::Dog(void){
    std::cout << "Default Dog constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(Dog const &obj){
    std::cout << "Copy Dog constructor called" << std::endl;
    *this = obj;
}

Dog::~Dog(void){
	std::cout << "Default Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &obj){
    std::cout << "Assignment Dog operator called" << std::endl;
    if (this == &obj)
		return *this;
	_type = obj._type;
	return *this;
}

void Dog::makeSound(void) const{
	std::cout << "Woof" << std::endl;
}
