#ifndef CPP_CONVERTER_HPP
#define CPP_CONVERTER_HPP

#include <string>
#include <iostream>

//#include <ios>
#include <climits>
#include <cfloat>
#include <cmath>
//#include <cctype>
//#include <cstring>
//#include <cstdlib>
//#include <exception>
//#include <cerrno>

using	std::string;
using	std::cout;
using	std::cin;
using	std::endl;
using	std::exception;


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

#include "Printer.hpp"

class Converter
{
	public:
		Converter(string convertValue);
		~Converter();
		Converter(const Converter &copyObject);
		Converter	&operator=(const Converter &object);
		const string	&getStr() const;
		int				getInt() const;
		char			getChar() const;
		float			getFloat() const;
		double			getDouble() const;
		void		startConverting();
		void		checkChar(void);
		void		checkDouble(void);
		void		checkFloat(void);
		void		checkInt(void);
	private:
			Converter();
			string	stats[4];
			string	convertStr;
			double	doubleVal; // 0
			string	dStat;
			float	floatVal; // 1
			string	fStat;
			char 	charVal; // 2
			string	cStat;
			long int	intVal; // 3
			string	iStat;
};

#endif //CPP_CONVERTER_HPP
