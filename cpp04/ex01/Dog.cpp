#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Default Dog constructor called" << std::endl;
    _type = "Dog";
	_brain = new Brain();
}

Dog::Dog(Dog const &obj){
    std::cout << "Copy Dog constructor called" << std::endl;
	*this = obj;
	_brain = new Brain(*obj._brain);
}

Dog::~Dog(void){
	std::cout << "Default Dog destructor called" << std::endl;
	delete _brain;
}

Dog	&Dog::operator=(Dog const &obj){
    std::cout << "Assignment Dog operator called" << std::endl;
	if (this != &obj) {
		delete _brain;
		_type = obj._type;
		_brain = new Brain(*obj._brain);
	}
	return *this;
}

void Dog::makeSound(void) const{
    std::cout << "Woof" << std::endl;
}
