#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap
{
protected:
    std::string	_name;
    int	_hitpoints;
    int	_energyPoints;
    int	_attackDamage;

public:
    ClapTrap();
    virtual ~ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap &copy);
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap &operator=(ClapTrap const &obj);
    std::string	getName() const;
    int	getHitpoints() const;
    int	getEnergyPoints() const;
    int	getAttackDamage() const;

};

#endif
