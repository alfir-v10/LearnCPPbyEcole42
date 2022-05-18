#include "HumanB.hpp"

HumanB::HumanB(std::string name) : m_name(name), m_weapon(0) {

}

HumanB::~HumanB(){

}

void HumanB::setWeapon(Weapon &weapon) {
    m_weapon = &weapon;
}

void HumanB::attack(){
    if (m_weapon){
        std::cout << m_name << " attacks with his " << m_weapon->getType() << std::endl;
    }
    else{
        std::cout << m_name << " attacks with his hands and legs" << std::endl;
    }
}