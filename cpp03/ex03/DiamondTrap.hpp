#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
private:
    std::string	_name;
public:
    DiamondTrap();
    virtual ~DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap	&operator=(DiamondTrap const &obj);
    void attack(std::string const &target);
    void whoAmI(void);
};

#endif
