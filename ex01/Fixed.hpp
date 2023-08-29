#ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>
#include <cmath>
class Fixed
{
private:
	int	fixed;
	static const int	fractional_bits = 8;
public:
	Fixed();
	Fixed(const int input);
	Fixed(const float input);
	Fixed(Fixed const &source);
	Fixed& operator=(const Fixed& source);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
