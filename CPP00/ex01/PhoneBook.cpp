//
// Created by fatality on 05.01.2022.
//

#include "main_header.h"

PhoneBook::PhoneBook()
{
	contactsCount = 0;
}

void	PhoneBook::printWelcomePage()
{
	cout << "       Welcome to awesome PhoneBook!\n";
	cout << "============================================\n";
	cout << "= You have access to three commands:       =\n";
	cout << "=                                          =\n";
	cout << "= ADD      - add contact to a phone book   =\n";
	cout << "=                                          =\n";
	cout << "= SEARCH   - open a list of contacts,      =\n";
	cout << "=            also you can enter an         =\n";
	cout << "=            index of the contact          =\n";
	cout << "=            to see all information        =\n";
	cout << "=            about it                      =\n";
	cout << "=                                          =\n";
	cout << "= EXIT      - close the program            =\n";
	cout << "=                                          =\n";
	cout << "============================================\n";
}

void	PhoneBook::printInfo(int contactInd, int infoInd)
{
	string	info;

	info = contacts[contactInd].getInfo(infoInd);
	if (info.length() > 9)
		cout << info.substr(0, 9) << '.' << '|';
	else
	{
		cout.fill(' ');
		cout << setw(10) << info << '|';
	}
}

void	PhoneBook::getContactList()
{
	cout << "=============================================\n";
	cout << "|   Index  |First name| Last name| Nickname |\n";
	for (int contactInd = 0; contactInd < contactsCount; contactInd++)
	{
		cout << "|         " << contactInd + 1 << "|";
		for (int infoInd = 0; infoInd < 3; infoInd++)
		{
			printInfo(contactInd, infoInd);
		}
		cout << endl;
	}
	cout << endl << "=============================================\n";
}

int		PhoneBook::getSize() { return (contactsCount); }

void	PhoneBook::addContact()
{
	string	input;
	string	fields[5] = {"FirstName: > ", "LastName: > ", "NickName: > ", \
	"PhoneNumber: > ", "DarkestSecret: > "};

	cout << "               Add contact's menu\n";
	cout << "=============================================\n";
	for (int i = 0; i < 5; i++)
	{
		cout << fields[i];
		getline(cin, input, '\n');
		contacts[getSize()].setInfo(i, input);
	}
	contactsCount++;
}