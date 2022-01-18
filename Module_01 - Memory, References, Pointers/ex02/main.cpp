#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int	main(void)
{
	string	brainStr = "HI THIS IS BRAIN";
	string	&stringREF = brainStr;
	string	*stringPTR = &brainStr;

	cout << "Address of the brainStr in heap: " << &brainStr << endl;
	cout << "It's value: " << brainStr << endl << endl;;
	cout << "Address of the *stringPTR in heap: " << stringPTR << endl;
	cout << "It's value: " << *stringPTR << endl << endl;
	cout << "Address of the &stringREF in heap: " << &stringREF << endl;
	cout << "It's value: " << stringREF << endl;
	return (0);
}