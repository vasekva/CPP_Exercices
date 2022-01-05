#include "main_header.h"

int	main(void)
{
	PhoneBook	phoneBook;
	string		action;

	phoneBook.printWelcomePage();
	cout << "> ";
	while (getline(cin, action, '\n'))
	{
		if (action == "ADD")
			phoneBook.addContact();
		else if (action == "SEARCH")
			phoneBook.getContactList();
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