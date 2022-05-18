#include "Fixed.hpp"

Fixed::Fixed(void)
{
    _value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &num)
{
    std::cout << "Copy constructor called" << std::endl;
    setRawBits(num.getRawBits());
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void	Fixed::setRawBits(int const raw)
{
    _value = raw;
}

Fixed	&Fixed::operator=(const Fixed &obj)
{
	if (this == &obj)
	{
		return *this;
	}
    std::cout << "Assignation operator called" << std::endl;
    setRawBits(obj.getRawBits());
    return *this;
}