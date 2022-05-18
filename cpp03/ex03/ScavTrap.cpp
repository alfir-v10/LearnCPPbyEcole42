#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    _name = "Jumba";
    _hitpoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap Jumba has been created" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    _name = name;
    _hitpoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << name << " has been created!" << std::endl;
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

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name <<" destructor called" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
    std::cout << _name << " attack! " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void ScavTrap::guardGate()
{
    std::cout << _name << " has entered in Gate keeper mode." << std::endl;
}