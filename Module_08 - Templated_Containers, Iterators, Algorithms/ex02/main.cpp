#include "mutantstack.hpp"

#include <vector>

void	vector_Test()
{
//	int SIZE = 20000;
	int SIZE = 20;
	int i = 1;

	MutantStack<int, std::vector<int> > objVector;
	cout << endl;
	cout << PURPLE << "[⚙️ TEST #3 with vector] (Custom filling) " << NORM << endl;

	cout << BLUE << "Filling a vector with 20 values..." << NORM << endl;

	for (int i = 0; i < SIZE; i++)
	{
		objVector.push(rand() % SIZE);
	}

	cout << UGREEN << "Printing all values from the stack with iterator:" << NORM << endl;
	MutantStack<int, std::vector<int> >::iterator it = objVector.begin();
	cout << UGREEN << "Begin iterator: " << *it << NORM << endl;
	MutantStack<int, std::vector<int> >::iterator ite = objVector.end();
	cout << UGREEN << "End iterator: " << *ite << NORM << endl;
	for (;it != ite; it++, i++)
	{
		std::cout << *it << " ";
		if (i % (SIZE / 4) == 0)
			cout << endl;
	}
	cout << UGREEN << "Last element: "<< *--it << " ";
	cout << endl << endl;
	cout << PURPLE << "[⚙️ TEST #4] (iterating) " << NORM << endl;

	it = objVector.begin();
	cout << UGREEN << "Begin iterator: " << *it << NORM << endl;
	cout << BLUE << "it += 2:" << NORM << endl;
	it += 2;
	cout << *it << endl;
	cout << BLUE << "it += 3:" << NORM << endl;
	it += 3;
	cout << *it << endl;
	cout << BLUE << "it -= 4:" << NORM << endl;
	it -= 4;
	cout << *it << endl;
}

void	subject_Test()
{
	MutantStack<int> objStack;

	cout << endl;
	cout << PURPLE << "[⚙️ TEST #1] (subject) " << NORM << endl;
	cout << BLUE << "push " << NORM << "5" << endl;
	objStack.push(5);
	cout << BLUE << "push " << NORM << "17" << endl;
	objStack.push(17);
	cout << BLUE << "push " << NORM << "32" << endl;
	objStack.push(32);
	cout << BLUE << "push " << NORM << "12312312" << endl;
	objStack.push(12312312);
	cout << BLUE << "push " << NORM << "-26754" << endl;
	objStack.push(-26754);
	cout << "Top of the stack: " << objStack.top() << std::endl;
	objStack.pop();
	cout << BLUE << "pop" << NORM << endl;
	cout << "Top of the stack: " << objStack.top() << std::endl;

	cout << endl;
	cout << PURPLE << "[⚙️ TEST #2] (subject) " << NORM << endl;
	MutantStack<int>::iterator it = objStack.begin();
	cout << UGREEN << "Begin iterator: " << *it << NORM << endl;
	MutantStack<int>::iterator ite = objStack.end();
	cout << UGREEN << "End iterator: " << *ite << NORM << endl;

	cout << endl;
	cout << BLUE << "Increment iterator..." << NORM << endl;
	++it;
	cout << BLUE << "Decrement iterator..." << NORM << endl;
	--it;

	cout << UGREEN << "Printing all values from the stack with iterator:" << NORM << endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

int main()
{
	subject_Test();
	vector_Test();

//	std::vector<int> originVector;
//	originVector.push_back(23);
//	originVector.push_back(45);
//	originVector.push_back(123);
//	originVector.push_back(1543);
//	originVector.push_back(2);
//	originVector.push_back(-234);
//	std::vector<int>::iterator it = originVector.begin();
//	std::vector<int>::iterator ite = originVector.end();
//	cout << UGREEN << "Begin iterator: " << *it << NORM << endl;
//	cout << BLUE << "it -= 400:" << NORM << endl;
//	it -= 400;
//	cout << *it << endl;

	return (0);
}


