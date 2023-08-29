#include "Fixed.hpp"

Fixed::Fixed() : fixed (0)
{}

Fixed::Fixed(Fixed &source)
{
	std::cout << "A Fixed number got spawned." << std::endl;
	*this = source;
	fixed = source.fixed;
}

Fixed& Fixed::operator=(const Fixed& source)
{
	std::cout << "Mitosis complete." << std::endl;
	fixed = source.fixed;
	return (*this);
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
