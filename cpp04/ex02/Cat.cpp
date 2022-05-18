#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << "Default Cat constructor called" << std::endl;
    _type = "Cat";
	_brain = new Brain();
}

Cat::Cat(Cat const &obj){
    std::cout << "Copy Cat constructor called" << std::endl;
    *this = obj;
    _brain = new Brain(*obj._brain);
}

Cat::~Cat(void){
    std::cout << "Default Cat destructor called" << std::endl;
    delete _brain;
}

Cat	&Cat::operator=(Cat const &obj) {
    std::cout << "Assignment Cat operator called" << std::endl;
	if (this != &obj) {
		delete _brain;
		_type = obj._type;
		_brain = new Brain(*obj._brain);
	}
    return *this;
}

void Cat::makeSound(void) const{
    std::cout << "Meow" << std::endl;
}
