#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "invalid number of arguments" << std::endl;
        return 1;
    }

    std::ifstream readFile(argv[1], std::ios_base::in);
    if (!readFile.is_open())
    {
        std::cerr << "file can't be opened" << std::endl;
        return 0;
    }

    if (!argv[1][0] || !argv[2][0] || !argv[3][0])
    {
        std::cerr << "empty file or strings" << std::endl;
        readFile.close();
        return 0;
    }

    std::ofstream  writeFile("FILENAME.replace", std::ios_base::out);
    if (!writeFile.is_open())
    {
        std::cerr << "FILENAME.replace can't be opened or created" << std::endl;
        return 0;
    }

    std::string  buff;
    while (!readFile.eof())
    {
        getline(readFile, buff);
        size_t len2 = std::strlen(argv[2]);
        for (size_t pos = buff.find(argv[2], 0); pos != std::string::npos; pos = buff.find(argv[2], pos))
        {
            buff.erase(pos, len2);
            buff.insert(pos, argv[3]);
            pos += len2;
        }
        writeFile << buff;
        if (!readFile.eof())
            writeFile << std::endl;
    }
    writeFile.close();
    readFile.close();
    return 0;
}