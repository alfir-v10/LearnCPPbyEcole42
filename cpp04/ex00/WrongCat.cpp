#include "WrongCat.hpp"

WrongCat::WrongCat(void){
    std::cout << "Default WrongCat constructor called" << std::endl;
    _type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &obj) : WrongAnimal(obj) {
    std::cout << "Copy WrongCat constructor called" << std::endl;
	*this = obj;
}

WrongCat::~WrongCat(void){
	std::cout << "Default WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &obj){
    std::cout << "Assignment WrongCat operator called" << std::endl;
    if (this == &obj)
		return *this;
	_type = obj._type;
	return *this;
}

void WrongCat::makeSound(void) const{
	std::cout << "Woem" << std::endl;
}
