#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB{
private:
    std::string m_name;
    Weapon *m_weapon;

public:
    void setWeapon(Weapon &weapon);
    void attack();
    HumanB(std::string name);
    ~HumanB();
};
#endif
