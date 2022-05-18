#include "CastEverything.hpp"

CastEverything::CastEverything(std::string argv) : _argv(argv){
    for (int i = 0; i < 4; ++i)
        _convertible[i] = 1;

    func_ptr[0] = &CastEverything::cCast;
    func_ptr[1] = &CastEverything::fCast;
    func_ptr[2] = &CastEverything::dCast;
    func_ptr[3] = &CastEverything::iCast;
    argv_parse();
    if (_type < 4)
        (this->*(func_ptr[_type]))();
    printResult();
}

CastEverything::~CastEverything(){

}

CastEverything::CastEverything(const CastEverything &obj){
    operator=(obj);
}

CastEverything &CastEverything::operator=(const CastEverything &obj){
    if (this != &obj) {
        _argv = obj._argv;
        _type = obj._type;
        for (int i = 0; i < 4; ++i)
            _convertible[i] = obj._convertible[i];
        _char = obj._char;
        _int = obj._int;
        _float = obj._float;
        _double = obj._double;
    }
    return *this;
}

void CastEverything::argv_parse(){
    if (1 == _argv.length() && !std::isdigit(_argv[0]))
        _type = 0;
    else if (!_argv.compare("-inff") || !_argv.compare("+inff") || !_argv.compare("nanf"))
        _type = 4;
    else if (!_argv.compare("-inf") || !_argv.compare("+inf") || !_argv.compare("nan"))
        _type = 5;
    else if (_argv[_argv.length() - 1] == 'f')
        _type = 1;
    else {
        int j, i = 0;
        for (j = 0; _argv[i] && !j; ++i)
            if (_argv[i] == '.') {
                _type = 2;
                return ;
            }
        _type = 3;
    }
}

int CastEverything::printFloatExtra(){
    if (_type == 4) {
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << _argv << std::endl;
        std::string av_copy = _argv;
        av_copy[_argv.length() - 1] = '\0';
        std::cout << "double: " << av_copy << std::endl;
        return (1);
    }
    return (0);
}

int CastEverything::printDoubleExtra(){
    if (_type == 5) {
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: "  << _argv << "f" << std::endl;
        std::cout << "double: " <<  _argv << std::endl;
        return (1);
    }
    return (0);
}

void CastEverything::printResult(){
    if (printFloatExtra() || printDoubleExtra())
        return ;
    if (_convertible[0] && _char > 32)
        std::cout << "char: " << _char << std::endl;
    else if (_convertible[0] && _char <= 32)
        std::cout << "char: " << "Non displayable" << std::endl;
    else
        std::cout << "char: " << "impossible" << std::endl;
    if (_convertible[3])
        std::cout << "int: " << _int << std::endl;
    else
        std::cout << "int: " << "impossible" << std::endl;
    if (_convertible[1])
        std::cout << "float: " << std::fixed << std::setprecision(1) << _float << "f" << std::endl;
    else
        std::cout << "float: " << "impossible" << std::endl;
    if (_convertible[2])
        std::cout << "double: " << std::fixed << std::setprecision(1) << _double << std::endl;
    else
        std::cout << "double: " << "impossible" << std::endl;
}

int CastEverything::overflowCheck(){
    if ((_argv[0] != '-' && _argv.length() > 10) || (_argv[0] == '-' && _argv.length() > 11))
        _convertible[3] = 0;
    if ((_argv[0] != '-' && _argv.length() == 10) || (_argv[0] == '-' && _argv.length() == 11)) {
        unsigned int int_to_cmp;
        if (_argv[0] == '-') {
            std::istringstream myString(&_argv[1]);
            myString >> int_to_cmp;
        } else {
            std::istringstream myString(_argv);
            myString >> int_to_cmp;
        }
        if ((_argv[0] == '-' && int_to_cmp > 2147483648u) || (_argv[0] != '-' && int_to_cmp > 2147483647u))
        {
            for (int i = 0; i < 4; ++i)
                _convertible[i] = 0;
        }
    }
    return (_convertible[3]);
}

void CastEverything::iCast(){
    if (!overflowCheck()){
		_convertible[1] = 0;
		_convertible[2] = 0;
		return ;
	}
    std::istringstream myString(_argv);
    myString >> _int;
    toChar(_int);
    _float = static_cast<float>(_int);
    _double = static_cast<double>(_int);
}

void CastEverything::cCast(){
    _char = _argv[0];
    _float = static_cast<float>(_char);
    _double = static_cast<double>(_char);
    _int = static_cast<int>(_char);
}

void CastEverything::fCast(){
    _float = std::strtof(_argv.c_str(), NULL);
    toChar(_float);
    _double = static_cast<double>(_float);
    toInt(_float);
}

void CastEverything::dCast(){
    _double = std::strtod(_argv.c_str(), NULL);
    toChar(_double);
    _float = static_cast<float>(_double);
    toInt(_double);
}
