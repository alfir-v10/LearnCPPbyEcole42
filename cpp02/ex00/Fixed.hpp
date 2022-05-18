#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class	Fixed
{
private:
    int	_value;
    const static int _point = 8;
public:
    Fixed(void);
    ~Fixed(void);
    Fixed(const Fixed &num);
    Fixed &operator=(const Fixed &obj);
    int	getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif