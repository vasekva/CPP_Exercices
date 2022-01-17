#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
//	sp.addNumber(9);
	sp.addNumber(11);

	cout << sp;
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;


	Span mirror(sp);
	cout << mirror << endl;
	sp.addNumber(3);

	cout << mirror << endl;
	cout << sp << endl;

	return (0);
}