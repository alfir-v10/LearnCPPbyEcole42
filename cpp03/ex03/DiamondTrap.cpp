#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	_name = "DiamondTrap";
	ClapTrap::_name = _name + "_clap_name";
	_hitpoints = FragTrap::_hitpoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap has been Created" << std::endl;

}

DiamondTrap::DiamondTrap(std::string name)
{
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hitpoints = FragTrap::_hitpoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap " << name << " has been created!" << std::endl;

}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &obj)
{
    if (this == &obj)
    {
        return *this;
    }
	_name = obj.getName();
	_hitpoints = obj.getHitpoints();
	_energyPoints = obj.getEnergyPoints();
	_attackDamage = obj.getAttackDamage();
	return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << _name << " destructor called" << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << _name << " " << ClapTrap::_name << std::endl;
}


