#include "CastEverything.hpp"

int    argv_check(std::string argv)
{
    if (!argv.length())
        return (1);
    if (!argv.compare("-inf")  || !argv.compare("+inf")  || !argv.compare("nan") || !argv.compare("-inff") || !argv.compare("+inff") || !argv.compare("nanf"))
        return (0);
    if (1 == argv.length())
        return (0);
    int i = 0;
    if (argv[0] == '-')
        ++i;
    if (!std::isdigit(argv[i]))
        return (1);
    int j;
    for (j = 0; argv[i] && j < 2; ++i)
    {
        if (!std::isdigit(argv[i]))
        {
            if (argv[i] == '.')
                j += 1;
            else
                break ;
        }
        if (j > 1)
            return (1);
    }
    if ((argv[i] == 'f' && 1 == j && !argv[i + 1]) || !argv[i])
        return (0);
    return (1);
}

int main(int argc, char **argv)
{
    if (argc == 2 && !argv_check(argv[1]))
    {
        CastEverything    castAnything(argv[1]);
    }
    else
        std::cerr << "Error: not valid argument." << std::endl;
    return (0);
}