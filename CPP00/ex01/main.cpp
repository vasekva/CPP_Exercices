#include "main_header.h"

int	main(void)
{
	PhoneBook	phoneBook;
	string		action;

	phoneBook.getInfo();
	cout << "> ";
	while (getline(cin, action, '\n'))
	{
		if (action == "ADD")
			cout << "ADD" << endl;
		else if (action == "SEARCH")
			cout << "SEARCH" << endl;
		else if (action == "EXIT")
		{
			cout << "EXIT" << endl;
			return (1);
		}
		else
			cout << "Command not found" << endl;
		cout << "> ";
	}
	return (0);
}