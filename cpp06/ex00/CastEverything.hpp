#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

#include <iostream>

#include <limits>
#include <sstream>
#include <string>
#include <iomanip>
#include <cstdlib>

int argv_check(std::string argv);

class CastEverything{
private:
    std::string _argv;
    int _type;
    char _char;
    int _int;
    float _float;
    double _double;
    int _convertible[4];
    void (CastEverything::*func_ptr[4])();
    void argv_parse();
    int overflowCheck();
    int printFloatExtra();
    int printDoubleExtra();

public:
    CastEverything(std::string argv = "");
    ~CastEverything();
    CastEverything(const CastEverything &obj);
    CastEverything &operator=(const CastEverything &obj);
    void iCast();
    void cCast();
    void fCast();
    void dCast();
    void printResult();

    template<typename C>
    void toChar(C c) {
        if (!(c >= 0 && c < 128))
            _convertible[0] = 0;
        _char = static_cast<char>(c);
    }

    template<typename I>
    void toInt(I i) {
        if (i < std::numeric_limits<int>::min() || i > std::numeric_limits<int>::max())
            _convertible[3] = 0;
        _int = static_cast<int>(i);
    }
};

#endif
