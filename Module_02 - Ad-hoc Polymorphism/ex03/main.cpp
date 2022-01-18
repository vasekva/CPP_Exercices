#include "Point.hpp"

int	main(void)
{
	Point p1(10, 30);
	Point p2(0, 0);
	Point p3(20, 0);

	Point point(5,5);
	if (bsp(p1, p2, p3, point))
		cout << GREEN << "Yeah, your point is inside the triangle!!\n" << NORM;
	else
		cout << RED << "Oops, this point isn't inside the triangle(\n" << NORM;

	for (int i = 0; i < 20; i++)
	{
		point = Point(i, 15);
		if (bsp(p1, p2, p3, point))
			cout << point << GREEN<< "Yeah!\n" << NORM;
		else
			cout << point << RED << "Oops, nope(\n" << NORM;
	}

	return (0);
}
//https://stackoverflow.com/questions/13300904/determine-whether-point-lies-inside-triangle
