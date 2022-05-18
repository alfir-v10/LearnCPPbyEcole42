#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
public:
    FragTrap();
    virtual ~FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap &copy);
    FragTrap &operator=(FragTrap const &obj);
    void attack(std::string const &target);
    void highFivesGuys(void);
};

#endif
