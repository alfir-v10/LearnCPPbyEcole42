#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Lilo"), _hitpoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap Lilo has been created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap " << name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &copy){
	*this = copy;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj){
	if (this == &obj) {
		return *this;
	}
	_name = obj.getName();
	_hitpoints = obj.getHitpoints();
	_energyPoints = obj.getEnergyPoints();
	_attackDamage = obj.getAttackDamage();
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
}

std::string ClapTrap::getName() const{
	return _name;
}

int ClapTrap::getHitpoints() const{
	return _hitpoints;
}

int ClapTrap::getEnergyPoints() const{
	return _energyPoints;
}

int ClapTrap::getAttackDamage() const{
	return _attackDamage;
}

void ClapTrap::attack(std::string const &target){
	if ((_energyPoints > 0) && (_hitpoints > 0)) {
		std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage
				  << " points of damage!" << std::endl;
		_energyPoints--;
	} else {
		std::cout << "ClapTrap " << _name << " doesn't have enough energyPoints or hitpoints." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << _name << " has taken " << amount << " points of damage!" << std::endl;
	_hitpoints -= amount;
	if (_hitpoints < 0)
		_hitpoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount){
	if ((_energyPoints > 0) && (_hitpoints > 0)) {
		std::cout << _name << " is being repaired. " << "It heals " << amount << " hitpoints." << std::endl;
		_hitpoints += amount;
		_energyPoints--;
	} else {
		std::cout << _name << " doesn't have enough energyPoints or hitpoints." << std::endl;
	}
}


