#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	st("Gomer");

    std::cout << "Name: " << st.getName() << ". Hitpoints: " << st.getHitpoints() << ". EneryPoints: " << st.getEnergyPoints() << ". Attack damage: " << st.getAttackDamage() << std::endl;
    st.guardGate();
    st.takeDamage(45);
    st.attack("Nani");
    st.beRepaired(35);
    st.takeDamage(40);
    std::cout << "Name: " << st.getName() << ". Hitpoints: " << st.getHitpoints() << ". EneryPoints: " << st.getEnergyPoints() << ". Attack damage: " << st.getAttackDamage() << std::endl;
	return (0);
}
