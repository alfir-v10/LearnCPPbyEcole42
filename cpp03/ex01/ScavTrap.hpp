#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    virtual ~ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap &copy);
    ScavTrap &operator=(ScavTrap const &obj);
    void attack(std::string const &target);
    void guardGate();
};

#endif
