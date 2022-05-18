#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    _name = "Jumba";
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap Jumba has been created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " <<  _name <<" destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
    std::cout << "ScavTrap " << name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &copy): ClapTrap(copy)
{
	*this = copy;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
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


void ScavTrap::attack(std::string const &target)
{
	if ((_energyPoints > 0) && (_hitpoints > 0)) {
		std::cout << "ScavTrap " <<_name << " attack! " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else {
		std::cout << "ScavTrap " << _name << " doesn't have enough energyPoints or hitpoints." << std::endl;
 	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode." << std::endl;
}


