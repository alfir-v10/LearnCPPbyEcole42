#include "Zombie.h"

Zombie::Zombie(std::string name): m_name(name){
    announce();
}

void Zombie::announce() {
    std::cout << m_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << m_name << " Press F" << std::endl;
}
