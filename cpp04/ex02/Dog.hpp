#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal{
private:
    Brain *_brain;
public:
    Dog(void);
	virtual ~Dog(void);
	Dog(Dog const &obj);
    Dog	&operator=(Dog const &obj);
	virtual void makeSound(void) const;
};

#endif
