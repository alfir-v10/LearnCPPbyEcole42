#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	ct("Jumba");

    std::cout << "Name: " << ct.getName() << ". Hitpoints: " << ct.getHitpoints() << ". EneryPoints: " << ct.getEnergyPoints() << ". Attack damage: " << ct.getAttackDamage() << std::endl;
    ct.attack("Karen");
    std::cout << "Name: " << ct.getName() << ". Hitpoints: " << ct.getHitpoints() << ". EneryPoints: " << ct.getEnergyPoints() << ". Attack damage: " << ct.getAttackDamage() << std::endl;
    ct.takeDamage(5);
    std::cout << "Name: " << ct.getName() << ". Hitpoints: " << ct.getHitpoints() << ". EneryPoints: " << ct.getEnergyPoints() << ". Attack damage: " << ct.getAttackDamage() << std::endl;
    ct.beRepaired(10);
    std::cout << "Name: " << ct.getName() << ". Hitpoints: " << ct.getHitpoints() << ". EneryPoints: " << ct.getEnergyPoints() << ". Attack damage: " << ct.getAttackDamage() << std::endl;

    ct.takeDamage(15);
    std::cout << "Name: " << ct.getName() << ". Hitpoints: " << ct.getHitpoints() << ". EneryPoints: " << ct.getEnergyPoints() << ". Attack damage: " << ct.getAttackDamage() << std::endl;
    ct.beRepaired(10);
    std::cout << "Name: " << ct.getName() << ". Hitpoints: " << ct.getHitpoints() << ". EneryPoints: " << ct.getEnergyPoints() << ". Attack damage: " << ct.getAttackDamage() << std::endl;

//    for (int i = 0; i < 8;i++)
//    {
//    	ct.beRepaired(10);
//    	std::cout << "Name: " << ct.getName() << ". Hitpoints: " << ct.getHitpoints() << ". EneryPoints: " << ct.getEnergyPoints() << ". Attack damage: " << ct.getAttackDamage() << std::endl;
//    }

	return (0);
}
