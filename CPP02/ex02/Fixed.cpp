#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixedPointValue = 0;
}

Fixed::Fixed(const int value)
{
	this->fixedPointValue = (value << this->bits);
}

Fixed::Fixed(const float value)
{
	this->fixedPointValue = roundf(value * (1 << bits));
}

Fixed::Fixed(const Fixed &copyObject)
{
	*this = copyObject;
}

Fixed::~Fixed()
{
//	cout << BOLD << RED << "Destructor " << NORM
//		<< "of the object "
//		<< URED << this << NORM
//		<< " called"
//		<< endl;
}

int	Fixed::getRawBits() const
{
	return (this->fixedPointValue);
}

void	Fixed::setRawBits(const int raw)
{
	this->fixedPointValue = raw;
}



float	Fixed::toFloat() const
{
	return ((float)(getRawBits() / (float)(1 << bits)));
}

int	Fixed::toInt() const
{
	return ((int)(getRawBits() / (1 << bits)));
}

Fixed	&Fixed::operator=(const Fixed &object)
{
	this->fixedPointValue = object.getRawBits();
	return (*this);
}

/*
=========================================================
=						BOOL							=
=========================================================
*/

bool	Fixed::operator>(const Fixed &object) const
{
	return (this->getRawBits() > object.getRawBits());
}

bool	Fixed::operator<(const Fixed &object) const
{
	return (this->getRawBits() < object.getRawBits());
}

bool	Fixed::operator>=(const Fixed &object) const
{
	return (this->getRawBits() >= object.getRawBits());
}

bool	Fixed::operator<=(const Fixed &object) const
{
	return (this->getRawBits() <= object.getRawBits());
}

bool	Fixed::operator==(const Fixed &object) const
{
	return (this->getRawBits() == object.getRawBits());
}

bool	Fixed::operator!=(const Fixed &object) const
{
	return (this->getRawBits() != object.getRawBits());
}

/*
=========================================================
=						ARITHMETIC						=
=========================================================
*/

Fixed	Fixed::operator+(const Fixed &object) const
{
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() + object.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed &object) const
{
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() - object.getRawBits());
	return (tmp);}

Fixed	Fixed::operator*(const Fixed &object) const
{
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() * object.getRawBits() / (1 << bits));
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed &object) const
{
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() * (1 << bits) / object.getRawBits());
	return (tmp);
}

/*
=========================================================
=				INCREMENT		DECREMENT				=
=========================================================
*/

// PREFIX
Fixed	&Fixed::operator--()
{
	int	num = this->getRawBits();
	this->setRawBits(--num);
	return (*this);
}

Fixed	&Fixed::operator++()
{
	int	num = this->getRawBits();
	this->setRawBits(++num);
	return (*this);
}

// POSTFIX
Fixed	Fixed::operator--(int)
{
	Fixed prev = *this;
	++*this;
	return (prev);
}

Fixed	Fixed::operator++(int)
{
	Fixed prev = *this;
	--*this;
	return (prev);
}

/*
=========================================================
=					MAX		MIN							=
=========================================================
*/
Fixed &Fixed::min(Fixed &fst, Fixed &scd)
{
	return (fst < scd ? fst : scd);
}

const Fixed &Fixed::min(const Fixed &fst, const Fixed &scd)
{
	return (fst < scd ? fst : scd);
}

Fixed &Fixed::max(Fixed &fst, Fixed &scd)
{
	return (fst > scd ? fst : scd);
}

const Fixed &Fixed::max(const Fixed &fst, const Fixed &scd)
{
	return (fst > scd ? fst : scd);
}

std::ostream 	&operator<<(std::ostream &outs, const Fixed &fPValue)
{
	outs << fPValue.toFloat();
	return (outs);
}
