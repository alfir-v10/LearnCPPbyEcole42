#include "Karen.hpp"

int main()
{
    Karen k;

    std::cout << "[DEBUG]" << std::endl;
    k.complain("DEBUG");

    std::cout << "[INFO]" << std::endl;
    k.complain("INFO");

    std::cout << "[WARNING]" << std::endl;
    k.complain("WARNING");

    std::cout << "[ERROR]" << std::endl;
    k.complain("ERROR");

    return 0;
}