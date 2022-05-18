#include "Karen.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Invalid arguments" << std::endl;
        return -1;
    }

    Karen madKaren;
    std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int	code;
    for (code = 0; code < 4; code++)
    {
        if (argv[1] == levels[code])
            break;
    }
    switch(code)
    {
        case 0:
            std::cout << "[DEBUG]" << std::endl;
            madKaren.complain("DEBUG");
            break;
        case 1:
            std::cout << "[INFO]" << std::endl;
            madKaren.complain("INFO");
            break;
        case 2:
            std::cout << "[WARNING]" << std::endl;
            madKaren.complain("WARNING");
            break;
        case 3:
            std::cout << "[ERROR]" << std::endl;
            madKaren.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return 0;
}
