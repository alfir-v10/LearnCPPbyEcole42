
#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon{
private:
    std::string m_type;
public:
    std::string const &getType();
    void setType(std::string type);
    Weapon(std::string type);
    ~Weapon();
};

#endif
