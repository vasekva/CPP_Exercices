//
// Created by Josephine Beregond on 12/5/21.
//
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (size_t j = 0; j < std::strlen(argv[i]); j++)
				std::cout << (char)std::toupper(argv[i][j]);
		}
		std::cout << "\n";
	}
}
