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
	~Fixed();


	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);

	Fixed& operator=(const Fixed& source);

	bool operator==(const Fixed& source);
	bool operator!=(const Fixed& source);
	bool operator<(const Fixed& source);
	bool operator<=(const Fixed& source);
	bool operator>(const Fixed& source);
	bool operator>=(const Fixed& source);

	Fixed operator+(const Fixed& source);
	Fixed operator-(const Fixed& source);
	Fixed operator*(const Fixed& source);
	Fixed operator/(const Fixed& source);

	Fixed operator++();
	Fixed operator--();
	Fixed operator++(int);
	Fixed operator--(int);
};

std::ostream& operator<<(std::ostream& out, const Fixed& source);

#endif
