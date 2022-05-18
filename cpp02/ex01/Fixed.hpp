#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class	Fixed
{
private:
    int _value;
    const static int _point = 8;

public:
    Fixed(int const num);
    Fixed(float const num);
    Fixed(void);
    ~Fixed(void);
    Fixed(const Fixed &num);
    Fixed	&operator=(const Fixed &obj);
    int	getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int	toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, const Fixed &f);

#endif