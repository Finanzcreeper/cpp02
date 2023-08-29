#include "Fixed.hpp"

Fixed::Fixed() : fixed (0)
{
	std::cout << "A Fixed number got spawned." << std::endl;
}

Fixed::Fixed(const int input) : fixed (input << fractional_bits)
{
	std::cout << "A Fixed number got spawned from an int" << std::endl;
}

Fixed::Fixed(const float input) : fixed (roundf (input * (1 << fractional_bits)))
{
	std::cout << "A Fixed number got spawned from an float" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& source)
{
	std::cout << "Mitosis complete." << std::endl;
	fixed = source.fixed;
	return (*this);
}

Fixed::Fixed(Fixed const &source)
{
	std::cout << "A Fixed number got spawned." << std::endl;
	*this = source;
}

Fixed::~Fixed()
{
	std::cout << "the deconstructor Wrecked a class." << std::endl;
}

float Fixed::toFloat(void) const
{
	return((float)fixed / (1 << fractional_bits));
}

int Fixed::toInt(void) const
{
	return(fixed >> fractional_bits);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits got a " << fixed << ", just for you." << std::endl;
	return(fixed);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "I put "<< raw << " into the class for you." << std::endl;
	fixed = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed& source)
{
	out << source.toFloat();
	return(out);
}

bool Fixed::operator==(const Fixed& source)
{
	return (this->fixed == source.fixed);
}

bool Fixed::operator!=(const Fixed& source)
{
	return (this->fixed != source.fixed);
}

bool Fixed::operator<(const Fixed& source)
{
	return (this->fixed < source.fixed);
}

bool Fixed::operator<=(const Fixed& source)
{
	return (this->fixed <= source.fixed);
}

bool Fixed::operator>(const Fixed& source)
{
	return (this->fixed > source.fixed);
}

bool Fixed::operator>=(const Fixed& source)
{
	return (this->fixed >= source.fixed);
}

Fixed Fixed::operator+(const Fixed& source)
{
	return (this->toFloat() + source.toFloat());
}

Fixed Fixed::operator-(const Fixed& source)
{
	return (this->toFloat() - source.toFloat());
}

Fixed Fixed::operator*(const Fixed& source)
{
	return (this->toFloat() * source.toFloat());
}

Fixed Fixed::operator/(const Fixed& source)
{
	return (Fixed(this->toFloat() / source.toFloat()));
}

Fixed Fixed::operator++()
{
	return (++fixed);
}

Fixed Fixed::operator--()
{
	return(--fixed);
}

Fixed Fixed::operator++(int)
{
	Fixed copy(*this);

	++fixed;
	return (copy);
}

Fixed Fixed::operator--(int)
{
	Fixed copy(*this);

	--fixed;
	return (copy);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.fixed < b.fixed)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.fixed < b.fixed)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a.fixed > b.fixed)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.fixed > b.fixed)
		return (a);
	return (b);
}
