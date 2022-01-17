#ifndef CPP_EASYFIND_HPP
#define CPP_EASYFIND_HPP

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
# define URED			"\033[4;31m"
# define UGREEN			"\033[4;32m"

#endif

#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using std::endl;
using std::cout;
using std::string;

template<typename T>
typename T::iterator easyfind(T &t, int n)
{
	typename T::iterator iter;

	if ((iter = std::find(t.begin(), t.end(), n)) == t.end())
	{
		throw std::invalid_argument("Error, it doesn't have this value!");
	}
	return (iter);
}

#endif