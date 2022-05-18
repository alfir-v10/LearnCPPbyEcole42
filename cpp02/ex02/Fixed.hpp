#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <exception>

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
    Fixed(const Fixed &obj);
    float toFloat(void) const;
    int toInt(void) const;
    int	getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed &operator=(const Fixed &obj);
    Fixed operator+(const Fixed &obj) const;
    Fixed operator-(const Fixed &obj) const;
    Fixed operator*(const Fixed &obj) const;
    Fixed operator/(const Fixed &obj) const;
    Fixed &operator++(void);
    Fixed operator++(int);
    Fixed &operator--(void);
    Fixed operator--(int);
    bool operator>(const Fixed &obj) const;
    bool operator<(const Fixed &obj) const;
    bool operator>=(const Fixed &obj) const;
    bool operator<=(const Fixed &obj) const;
    bool operator==(const Fixed &obj) const;
    bool operator!=(const Fixed &obj) const;

    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream	&operator<<(std::ostream &o, const Fixed &f);

#endif