#include "Fixed.hpp"

Fixed::Fixed(int const num)
{
    _value = num << _point;
}

Fixed::Fixed(const float num)
{
    _value = (int)roundf(num * (1 << _point));
}

Fixed::Fixed(void) : _value(0)
{

}

Fixed::~Fixed(void)
{

}

int	Fixed::getRawBits(void) const
{
    return _value;
}

void Fixed::setRawBits(int const raw)
{
    _value = raw;
}

Fixed::Fixed(const Fixed &obj)
{
    setRawBits(obj.getRawBits());
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	if (this == &obj)
	{
		return *this;
	}
    setRawBits(obj.getRawBits());
    return *this;
}

int	Fixed::toInt(void) const
{
    return _value >> _point;
}

float Fixed::toFloat(void) const
{
    return _value / (float)(1 << _point);
}

std::ostream &operator<<(std::ostream &o, const Fixed &obj)
{
    o << obj.toFloat();
    return o;
}

bool Fixed::operator>(const Fixed &obj) const
{
    return toFloat() > obj.toFloat();
}

bool Fixed::operator>=(const Fixed &obj) const
{
    return toFloat() >= obj.toFloat();
}

bool Fixed::operator<(const Fixed &obj) const
{
    return toFloat() < obj.toFloat();
}

bool Fixed::operator<=(const Fixed &obj) const
{
    return toFloat() <= obj.toFloat();
}

bool Fixed::operator==(const Fixed &obj) const
{
    return toFloat() == obj.toFloat();
}

bool Fixed::operator!=(const Fixed &obj) const
{
    return toFloat() != obj.toFloat();
}

Fixed Fixed::operator+(const Fixed &obj) const
{
    Fixed	sum;
    sum.setRawBits(getRawBits() + obj.getRawBits());
    return sum;
}

Fixed Fixed::operator-(const Fixed &obj) const
{
    Fixed	diff;

    diff.setRawBits(getRawBits() - obj.getRawBits());
    return diff;
}

Fixed Fixed::operator*(const Fixed &obj) const
{
    Fixed	product;

    product.setRawBits((getRawBits() * obj.getRawBits()) >> _point);
    return product;
}

Fixed Fixed::operator/(const Fixed &obj) const
{
    return Fixed(toFloat() / obj.toFloat());
}

Fixed &Fixed::operator++(void)
{
    setRawBits(getRawBits() + 1);
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed	copy(*this);
    setRawBits(getRawBits() + 1);
    return copy;
}

Fixed &Fixed::operator--(void)
{
    setRawBits(getRawBits() - 1);
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed	copy(*this);
    setRawBits(getRawBits() - 1);
    return copy;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (b < a)
        return b;
    return a;
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
    if (b < a)
        return b;
    return a;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (b > a)
        return b;
    return a;
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
    if (b > a)
        return b;
    return a;
}

