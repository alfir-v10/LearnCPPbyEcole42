#include <string>
#include "iter.hpp"

template<typename T>
void display(T const &target){
    std::cout << target << std::endl;
}

class Awesome
{
public:
    Awesome(void): _n(42) {}
    int get(void) const {return this->_n;}
private:
    int _n;
};

std::ostream & operator<<(std::ostream &o, Awesome const  &rhs) {
    o << rhs.get();
    return o;
}


int	main( void ) {

	int iIter[5] = {1, 2, 3, 4, 5};
	std::string sIter[3] = {"Lilo", "and", "Stitch"};
	float fIter[4] = {0.1f, 1.1f, 1.2f, 0.123f};
    Awesome tab2[5];

    std::cout << "*iterate from Awesome*" << std::endl;
    iter(tab2, 5, display);

    std::cout << "*iterate from INT*" << std::endl;
	::iter<int>(iIter, 5, ::display<int>);

    std::cout << "*iterate from STRING*" << std::endl;
	::iter<std::string>(sIter, 3, ::display<std::string>);

    std::cout << "*iterate from FLOAT*" << std::endl;
	::iter<float>(fIter, 4, ::display<float>);

	return 0;
}
