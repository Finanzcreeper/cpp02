#ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>

class Fixed
{
private:
	int	fixed;
	static const int	fractional_bits = 8;
public:
	Fixed();
	Fixed(Fixed const &source);
	Fixed& operator=(const Fixed& source);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
