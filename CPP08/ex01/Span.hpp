#ifndef CPP_MODULES_SPAN_HPP
#define CPP_MODULES_SPAN_HPP

#include <algorithm>
#include <iostream>
#include <vector>

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

using std::string;
using std::cout;
using std::endl;

typedef std::vector<int>::iterator vIter;

class Span
{
	public:
		Span(const unsigned int n);
		Span(const Span &copyObject);
		~Span();
		Span	&operator=(const Span &object);
		int		&operator[](unsigned int i);
		int					getCapacity() const;
		std::vector<int>    getData() const;
		void	printData() const;
		void    addNumber(const int n);
		int 	shortestSpan();
		int		longestSpan();
		class CustomSpanException : public std::exception
		{
			private:
				string errorMsg;
			public:
				CustomSpanException(const string &error);
				~CustomSpanException() throw();
				const char *what() const throw();
		};
		private:
			Span();
			std::vector<int>    data;
			unsigned int		capacity;
};

std::ostream	&operator<<(std::ostream &out, const Span &object);

#endif //CPP_MODULES_SPAN_HPP
