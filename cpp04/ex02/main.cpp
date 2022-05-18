#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void){
	Animal const *dog = new Dog();
	Animal const *cat = new Cat();
	dog->makeSound();
	std::cout << dog->getType() << " is a type of animal" << std::endl;
	cat->makeSound();
	std::cout << cat->getType() << " is a type of animal" << std::endl;
	delete dog;
	delete cat;
	return 0;
}
