#include <string>
#include <iostream>

#ifndef COLOR

#define COLOR
# define BACK_GRAY		"\033[47m"
# define NORM			"\033[0m"
# define BOLD			"\033[1m"
# define RED			"\033[31m"
# define GREEN			"\033[32m"
# define YELLOW			"\033[33m"
# define BLUE			"\033[34m"
# define PURPLE			"\033[35m"
# define BRIGHT_BLUE	"\033[36m"
# define NONE			"\033[37m"

#endif

using	std::string;
using	std::endl;
using	std::cerr;
using	std::cout;
using	std::cin;

int replaceStrInFiles(string fileName, string str1, string str2);

int	main(int argc, char **argv)
{
	if (argc != 4 || !argv[1] || !argv[2] || !argv[3])
	{
		cerr << BOLD << RED
			<< "Error!" << NORM
			<< " You must use 3 arguments!\n"
			<< BRIGHT_BLUE
			<< "[1] - filename\n"
			<< "[2] - string\n"
			<< "[3] - string\n"
			<< NORM
			<< "and all of them must be"
			<< BOLD << RED << " NOT " << NORM << "empty!" << endl;
	}
	else
	{
		if (replaceStrInFiles(argv[1], argv[2], argv[3]) == -1)
		{
			cout << BOLD << RED
				<< "Error in the process of replacing strings!" << NORM << endl;
		}
		else
		{
			cout << BOLD << GREEN
				<< "Replacement has been ended successfully!" << NORM << endl;
		}
	}
	return (0);
}