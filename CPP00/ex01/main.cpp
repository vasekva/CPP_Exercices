#include "main_header.h"

int	main(void)
{
	PhoneBook	phoneBook;
	string		action;

	phoneBook.printWelcomePage();
	cout << "Enter the command > ";
	while (getline(cin, action, '\n'))
	{
		if (action == "ADD")
			phoneBook.addContact();
		else if (action == "SEARCH")
			phoneBook.search();
		else if (action == "EXIT")
		{
			cout << "EXIT" << endl;
			return (1);
		}
		else
			cout << RED << "\nCommand not found" << endl << NORM;
		cout << "\nEnter the command > ";
	}
	return (0);
}