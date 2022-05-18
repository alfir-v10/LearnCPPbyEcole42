#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
	WrongCat(void);
    ~WrongCat(void);
    WrongCat(WrongCat const &obj);
	WrongCat &operator=(WrongCat const &obj);
	void makeSound(void) const;
};

#endif
