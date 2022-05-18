#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>


class Zombie{
private:
    std::string m_name;
public:
    Zombie(std::string name);
    ~Zombie();
    void announce();
};

#endif
