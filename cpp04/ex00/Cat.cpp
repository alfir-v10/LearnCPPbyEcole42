#include "Cat.hpp"

Cat::Cat(void){
    std::cout << "Default Cat constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(Cat const &obj) : Animal(obj) {
    std::cout << "Copy Cat constructor called" << std::endl;
    *this = obj;
}

Cat::~Cat(void){
	std::cout << "Default Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &obj) {
    std::cout << "Assignment Cat operator called" << std::endl;
    if (this == &obj)
		return *this;
	_type = obj._type;
	return *this;
}

void Cat::makeSound(void) const{
	std::cout << "Meow" << std::endl;
}
