#include "Span.hpp"

void printTest(Span &sp)
{
	cout << BOLD << PURPLE << "[SPAN] Info: " << NORM;
	cout << sp;
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	cout << endl;
	cout << endl;
}

void anotherHeap_Test(Span &sp, Span &mirror)
{
	cout << YELLOW << "[AddNumber(3) to SPAN]" << NORM;
	sp.addNumber(3);
	cout << sp << endl;

	cout << YELLOW << "[Values in the MIRROR]: " << NORM;
	cout << mirror << endl;
}

void outOfBounds_Test(Span &sp)
{
	cout << YELLOW << "[Trying to overflow SPAN]: " << NORM;

	cout << endl << endl;
	cout << BOLD << PURPLE << "[SPAN] Info: " << NORM;
	cout << sp;
	try
	{
		cout << YELLOW << "AddNumber(4)..." << NORM << endl;
		sp.addNumber(4);
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}

	cout << endl;
	cout << YELLOW << "[Trying to use methods with one value]: " << NORM << endl;
	cout << BOLD << PURPLE << "[SPAN] Info: " << NORM;
	Span test(1);
	test.addNumber(2);
	cout << test << endl;
	try
	{
		cout << test.shortestSpan() << endl;
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}
}

void	filling_Test(unsigned int capacity)
{
	Span test = Span(capacity);

	try
	{
		test.addRandomNumbers(capacity);
		cout << BOLD << PURPLE << "[SPAN] Info: " << NORM;
		cout << test;
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}
}

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(11);


// "================================ FIRST  TEST ====================================";
// "=================================================================================";

	cout << PURPLE << "[⚙️ TEST #1]" << NORM << endl;
	filling_Test(30); // можно коментить

// "================================ SECOND TEST ====================================";
// "=================================================================================";

	cout << PURPLE << "[⚙️ TEST #2]" << NORM << endl;
	printTest(sp);

	cout << YELLOW << "[Creating a mirror of the SPAN]" << NORM;
	Span mirror(sp);
	cout << mirror << endl;


// "================================  THIRD TEST ====================================";
// "=================================================================================";

	cout << PURPLE << "[⚙️ TEST #3]" << NORM << endl;
	anotherHeap_Test(sp, mirror);

// "================================ FOURTH TEST ====================================";
// "=================================================================================";

	cout << PURPLE << "[⚙️ TEST #4]" << NORM << endl;
	outOfBounds_Test(sp);

	return (0);
}