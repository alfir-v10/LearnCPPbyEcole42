#include "Zombie.h"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main() {
    Zombie  *new_zmb = newZombie("Lilo");
    delete new_zmb;

    Zombie *new_zmb2 = newZombie("Jumba");
    delete new_zmb2;

    randomChump("Stitch");

    return 0;
}