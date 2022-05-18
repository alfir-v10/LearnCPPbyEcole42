#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap
{
private:
    std::string	_name;
    int	_hitpoints;
    int	_energyPoints;
    int	_attackDamage;

public:
    ClapTrap();
    ~ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap &copy);
    ClapTrap &operator=(ClapTrap const &obj);
    int	getHitpoints() const;
    int	getEnergyPoints() const;
    int	getAttackDamage() const;
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string	getName() const;

};

#endif
