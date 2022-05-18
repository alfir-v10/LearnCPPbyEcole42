#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat(void);
    virtual ~Cat(void);
	Cat(Cat const &obj);
	Cat	&operator=(Cat const &obj);
	virtual void makeSound(void) const;
};

#endif
