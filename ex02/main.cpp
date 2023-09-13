#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "a is: " << a << std::endl;
	a = a + 1;
	std::cout << "a is: " << a << std::endl;

	++a;
	std::cout << "a is: " << a << std::endl;

	std::cout << "a is: " << a++ << std::endl;
	std::cout << "a is: " << a << std::endl;
	std::cout << "b is: " << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	if (a < b)
		std::cout << "a: " << a.toFloat() << " is smaller than b: " << b.toFloat() << std::endl;
	else
		std::cout << "b: " << b.toFloat() << " is smaller than a: " << a.toFloat() << std::endl;
	return (0);
}
