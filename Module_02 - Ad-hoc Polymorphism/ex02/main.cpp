#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
//	cout << "a: " << &a << endl;
//	cout << "b: " << &b << endl;
//	cout << "a: ";
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
//	cout << "a: ";
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
//	cout << "a: ";
	std::cout << a << std::endl;
//	cout << "b: ";
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed c(20);
	Fixed d(10.2f);
	cout << "c(" << c << ")" << " - " <<"d(" << d << ")" << " = " << (c - d) << endl;
	cout << "c(" << c << ")" << " + " <<"d(" << d << ")" << " = " << (c + d) << endl;
	cout << "c(" << c << ")" << " * " <<"d(" << d << ")" << " = " << (c * d) << endl;
	cout << "c(" << c << ")" << " / " <<"d(" << d << ")" << " = " << (c / d) << endl;
	cout << "c(" << c << ")" << " > " <<"d(" << d << ")" << " = " << (c > d) << endl;
	cout << "c(" << c << ")" << " < " <<"d(" << d << ")" << " = " << (c < d) << endl;
	cout << "c(" << c << ")" << " <= " <<"(" << 20 << ")" << " = " << (c <= 20) << endl;
	cout << "c(" << c << ")" << " >= " <<"(" << 20 << ")" << " = " << (c >= 20) << endl;
	return (0);
}