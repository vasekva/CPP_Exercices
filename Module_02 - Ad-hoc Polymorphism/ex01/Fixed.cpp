#include "Fixed.hpp"

Fixed::Fixed()
{
	cout << YELLOW << "Default "
		<< BOLD << GREEN << "constructor " << NORM
		<< "of an object "
		<< URED << this << NORM
		<< " called"
		<< endl;
	this->fixedPointValue = 0;
}

Fixed::Fixed(const int value)
{
	cout << YELLOW << "INT "
		 << BOLD << GREEN << "constructor " << NORM
		 << "of an object "
		 << URED << this << NORM
		 << " called"
		 << endl;
	this->fixedPointValue = (value << this->bits);
}

Fixed::Fixed(const float value)
{
	cout << YELLOW << "FLOAT "
		 << BOLD << GREEN << "constructor " << NORM
		 << "of an object "
		 << URED << this << NORM
		 << " called"
		 << endl;
	this->fixedPointValue = roundf(value * (1 << bits));
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

int	Fixed::getRawBits() const
{
	return (this->fixedPointValue);
}

void	Fixed::setRawBits(const int raw)
{
	this->fixedPointValue = raw;
}

Fixed	&Fixed::operator=(const Fixed &object)
{
	cout << BLUE << "Assignation operator " << NORM
		 << "for objects "
		 << URED << this << NORM
		 << " and "
		 << URED << &object << NORM
		 << " called"
		 << endl;
	this->fixedPointValue = object.getRawBits();
	return (*this);
}


float	Fixed::toFloat() const
{
	return ((float)(getRawBits() / (float)(1 << bits)));
}

int	Fixed::toInt() const
{
	return ((int)(getRawBits() / (1 << bits)));
}

std::ostream 	&operator<<(std::ostream &outs, const Fixed &fPValue)
{
	outs << fPValue.toFloat();
	return (outs);
}
