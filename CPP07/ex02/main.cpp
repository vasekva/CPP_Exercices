#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));

	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);

		cout << "Address of tmp: " << GREEN << &tmp << NORM << endl;
		cout << "Address of test: " << GREEN << &test << NORM << endl;

		cout <<  endl;

		cout << YELLOW << "Values in arrays before changes:" << NORM << endl;
		cout << "tmp[2]: " << tmp[2] << endl;
		cout << "test[2]: " << test[2] << endl;
		tmp[2] = 123123;
		test[2] = 2;
		cout << YELLOW << "After changes:" << NORM << endl;
		cout << "tmp[2]: " << tmp[2] << endl;
		cout << "test[2]: " << test[2] << endl;

		cout << endl;
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}

	/*
	"========================================================";
	"==                    Exceptions                      ==";
	"========================================================";
	*/
	cout << PURPLE << "⚙️ Out of bounds tests: " << NORM << endl;
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		cout << "numbers[-2]: ";
		std::cerr << e.what() << '\n';
	}
	try
	{
		cout << "numbers[MAX_VAL]: ";
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;
}