#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class	Animal {
protected:
    std::string	_type;
public:
    Animal(void);
	virtual ~Animal(void);
	Animal(Animal const &obj);
    Animal	&operator=(Animal const &obj);
    std::string	getType(void) const;
	virtual void makeSound(void) const = 0;
};

#endif
