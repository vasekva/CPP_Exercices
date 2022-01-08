#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float &x_val, const float &y_val) : x(x_val), y(y_val) {}

Point::Point(const Point &copyObject)
{
	*this = copyObject;
}

Point::~Point()
{
	//	cout << BOLD << RED << "Destructor " << NORM
//		<< "of the object "
//		<< URED << this << NORM
//		<< " called"
//		<< endl;
}

const Fixed Point::getX() const
{
	return (this->x);
}

const Fixed Point::getY() const
{
	return (this->y);
}

Point	&Point::operator=(const Point &copyObject)
{
	this->x = copyObject.getX();
	this->y = copyObject.getY();
	return (*this);
}

std::ostream 	&operator<<(std::ostream &outs, const Point &anotherPoint)
{
	outs << "X(" << anotherPoint.getX() << ")" << " Y(" << anotherPoint.getY() << ") ";
	return (outs);
}
