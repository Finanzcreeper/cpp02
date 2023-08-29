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
	fixed = source.fixed;
}

Fixed::~Fixed()
{
	std::cout << "the deconstructor Wrecked a class." << std::endl;
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
