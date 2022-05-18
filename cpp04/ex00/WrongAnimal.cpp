#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void){
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj){
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	*this = obj;
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "Default WrongAnimal destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &obj){
	std::cout << "Assignment WrongAnimal operator called" << std::endl;
	if (this == &obj)
		return *this;
	_type = obj._type;
	return *this;
}

std::string	WrongAnimal::getType(void) const{
	return _type;
}

void WrongAnimal::makeSound(void) const{
	std::cout << "Some WrongAnimal sound, perhaps..." << std::endl;
}
