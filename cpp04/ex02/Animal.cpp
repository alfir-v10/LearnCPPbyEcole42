#include "Animal.hpp"

Animal::Animal(void){
    std::cout << "Default Animal constructor called" << std::endl;
    _type = "Animal";
}

Animal::Animal(Animal const &obj){
    std::cout << "Copy Animal constructor called" << std::endl;
    *this = obj;
}

Animal::~Animal(void){
    std::cout << "Default Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(Animal const &obj){
    std::cout << "Assignment Animal operator called" << std::endl;
    if (this == &obj)
        return *this;
    _type = obj._type;
    return *this;
}

std::string	Animal::getType(void) const{
    return _type;
}
