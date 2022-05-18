#include "FragTrap.hpp"

FragTrap::FragTrap(){
	_name = "Stitch";
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap Stitch has been created" << std::endl;
}

FragTrap::FragTrap(std::string name){
	_name = name;
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << name << " has been created!" << std::endl;
}

FragTrap::FragTrap(FragTrap &copy) : ClapTrap(copy){
	*this = copy;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << _name << " destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &obj){
	if (this == &obj) {
		return *this;
	}
	_name = obj.getName();
	_hitpoints = obj.getHitpoints();
	_energyPoints = obj.getEnergyPoints();
	_attackDamage = obj.getAttackDamage();
	return *this;
}

void FragTrap::attack(std::string const &target){
	if ((_energyPoints > 0) && (_hitpoints > 0)) {
		std::cout << "FragTrap " << _name << " attack! " << target << " causing " << _attackDamage
				  << " points of damage!" << std::endl;
		_energyPoints--;
	} else {
		std::cout << "FragTrap " << _name << " doesn't have enough energyPoints or hitpoints." << std::endl;
	}
}

void FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << _name << " High fives request!" << std::endl;
}
