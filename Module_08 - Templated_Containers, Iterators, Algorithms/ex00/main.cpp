#include "easyfind.hpp"



int	main(void)
{
	std::vector<int> objVector;

// "================================ FIRST  TEST ====================================";
// "=================================================================================";

	for (int i = 0; i < 50; i++)
		objVector.push_back(rand() % 50);

	std::vector<int>::iterator it = objVector.begin();
	std::vector<int>::iterator ite = objVector.end();

	for (;it != ite; it++)
		cout << *it << " ";
	cout << endl << endl;

// "================================ SECOND TEST ====================================";
// "=================================================================================";

	it = objVector.begin();
	cout << YELLOW << "[Trying to find value 8]" << NORM << endl;
	try
	{
		std::vector<int>::iterator methodIter = easyfind(objVector, 8);
		for (;it != ite; it++)
		{
			if (it == methodIter)
			{
				cout << UGREEN << *it << " " << NORM;
			}
			else
				cout << URED << *it << " " << NORM;
		}
		cout << endl;
	}
	catch (std::exception &e)
	{
		cout << URED << e.what() << NORM << endl;
	}

	return (0);
}