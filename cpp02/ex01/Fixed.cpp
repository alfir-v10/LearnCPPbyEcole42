#include "Fixed.hpp"

Fixed::Fixed(int const num)
{
	std::cout << "Int constructor called" << std::endl;
	_value = num << _point;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(float const num)
{
	std::cout << "Float constructor called" << std::endl;
	_value = (int)roundf(num * (1 << _point));
}

Fixed::Fixed(void): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &num)
{
    std::cout << "Copy constructor called" << std::endl;
    setRawBits(num.getRawBits());
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

int	Fixed::getRawBits(void) const
{
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

int	Fixed::toInt(void) const
{
	return _value >> _point;
}

float	Fixed::toFloat(void) const
{
	return _value / (float)(1 << _point);
}

std::ostream	&operator<<(std::ostream &o, const Fixed &f)
{
	o << f.toFloat();
	return o;
}