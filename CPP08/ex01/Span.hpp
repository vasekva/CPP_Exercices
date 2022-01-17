#ifndef CPP_MODULES_SPAN_HPP
#define CPP_MODULES_SPAN_HPP

#include <algorithm>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Span
{
	public:
		Span(const unsigned int n);
		Span(const Span &copyObject);
		~Span();
		Span	&operator=(const Span &object);
		void			addNumber(const int n);
		int				getSize() const;
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;

		class objectSizeException : public std::exception
		{
			private:
				string errorMsg;
			public:
				SpanException(const string &error);
				~SpanException() throw();
				const char *what() const throw();
		};
	private:
		Span();
		unsigned int 		size;
		std::vector<int> 	data;
};

std::ostream	&operator<<(std::ostream &out, const Span &object);

#endif //CPP_MODULES_SPAN_HPP
