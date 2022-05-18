#include "FragTrap.hpp"

int main(void)
{
	FragTrap	ft("Nani");

	std::cout << "Name: " << ft.getName() << ". Hitpoints: " << ft.getHitpoints() << ". EneryPoints: " << ft.getEnergyPoints() << ". Attack damage: " << ft.getAttackDamage() << std::endl;
    ft.takeDamage(10);
    ft.attack("Kawena");
    ft.beRepaired(10);
    ft.highFivesGuys();
    ft.takeDamage(20);
    std::cout << "Name: " << ft.getName() << ". Hitpoints: " << ft.getHitpoints() << ". EneryPoints: " << ft.getEnergyPoints() << ". Attack damage: " << ft.getAttackDamage() << std::endl;
	return (0);
}
