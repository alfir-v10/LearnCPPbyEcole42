#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{

	std::cout << "_____________Good Animals____________" << std::endl;
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << "_____________Wrong Animals____________" << std::endl;
	const WrongAnimal	*wA = new WrongAnimal();
	const WrongAnimal	*wC = new WrongCat();

	std::cout << "_____________Good Animals types____________" << std::endl;
	std::cout << meta->getType() << " type is an animal" << std::endl;
	std::cout << j->getType() << " type is an animal" << std::endl;
	std::cout << i->getType() << " type is an animal" << std::endl;

	std::cout << "_____________Wrong Animals types____________" << std::endl;
	std::cout << wA->getType() << " type is an wrong animal" << std::endl;
	std::cout << wC->getType() << " type is an wrong animal" << std::endl;

	std::cout << "_____________Good Animals Sounds____________" << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();

	std::cout << "_____________Wrong Animals Sounds____________" << std::endl;
    wC->makeSound();
    wA->makeSound();

	std::cout << "___Clear Pointers and Call Destructors______" << std::endl;
	delete i;
	delete j;
	delete meta;
	delete wC;
	delete wA;
	return 0;
}
