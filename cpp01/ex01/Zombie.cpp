#include "Zombie.hpp"

void Zombie::announce() {
    std::cout << m_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << m_name << " Press F" << std::endl;
}

void Zombie::setName(std::string name)
{
    m_name = name;
}

