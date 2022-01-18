#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	cout << "a: " << &a << endl;
	cout << "b: " << &b << endl;
	cout << "c: " << &c << endl;

	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return (0);
}