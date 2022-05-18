#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	dt("Morti");

    dt.guardGate();
    dt.takeDamage(20);
    dt.attack("Nani");
    dt.beRepaired(20);
    dt.highFivesGuys();
    dt.takeDamage(50);
    dt.whoAmI();

    std::cout << "********" << std::endl;

    DiamondTrap	dt_name;
    dt_name.guardGate();
    dt_name.takeDamage(20);
    dt_name.attack("Nani");
    dt_name.beRepaired(20);
    dt_name.highFivesGuys();
    dt_name.takeDamage(50);
    dt_name.whoAmI();
	return (0);
}
