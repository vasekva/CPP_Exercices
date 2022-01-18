#include "Fixed.hpp"

Fixed::Fixed()
{
	cout << YELLOW << "Default "
		<< BOLD << GREEN << "constructor " << NORM
		<< "of an object "
		<< URED << this << NORM
		<< " called"
		<< endl;
	this->fixedPoint = 0;
}

Fixed::Fixed(const Fixed &copyObject)
{
	cout << BRIGHT_BLUE << "Copy "
		<< BOLD << GREEN << "constructor " << NORM
		<< "for src object "
		<< URED << &copyObject << NORM
		<< " and dst object "
		<< URED << this << NORM
		<< " called"
		<< endl;
	*this = copyObject;
}

Fixed::~Fixed()
{
	cout << BOLD << RED << "Destructor " << NORM
		<< "of the object "
		<< URED << this << NORM
		<< " called"
		<< endl;
}

Fixed &Fixed::operator=(const Fixed &object)
{
	cout << BLUE << "Assignation operator " << NORM
		 << "for objects "
		 << URED << this << NORM
		 << " and "
		 << URED << &object << NORM
		 << " called"
		 << endl;
	this->fixedPoint = object.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const
{
	cout << PURPLE << "getRawBits member function " << NORM
		<< "of an object "
		<< URED << this << NORM
		<< " called"
		<< endl;
	return (this->fixedPoint);
}

void Fixed::setRawBits(const int raw)
{
	this->fixedPoint = raw;
}