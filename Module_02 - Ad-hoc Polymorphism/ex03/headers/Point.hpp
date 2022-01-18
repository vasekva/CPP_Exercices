#ifndef CPP_POINT_HPP
#define CPP_POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(const float &x, const float &y);
		Point(const Point &obj);
		~Point();
		const Fixed	getX() const;
		const Fixed	getY() const;
		Point	&operator=(const Point &copyObject);
	private:
		Fixed x;
		Fixed y;
};

std::ostream    &operator<<(std::ostream &out, const Point &anotherPoint);
bool	bsp(const Point a, const Point b, const Point c, const Point point);
#endif //CPP_POINT_HPP
