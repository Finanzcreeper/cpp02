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

	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& out, const Fixed& source);

#endif
