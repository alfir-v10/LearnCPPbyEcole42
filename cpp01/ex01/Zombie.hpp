#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie{
private:
    std::string m_name;
public:
    void announce();
    void setName(std::string name);
    ~Zombie();
};

#endif
