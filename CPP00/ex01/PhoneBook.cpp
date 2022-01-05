//
// Created by fatality on 05.01.2022.
//
#include "main_header.h"

PhoneBook::PhoneBook()
{
	contactsCount = 0;
	fields[0] = "FirstName: > ";
	fields[1] = "LastName: > ";
	fields[2] = "NickName: > ";
	fields[3] = "PhoneNumber: > ";
	fields[4] = "DarkestSecret: > ";
}

int		PhoneBook::isDigit(string str)
{
	for (size_t i = 0; i < str.size(); i++)
		if (!isdigit(str[i]))
			return (0);
	return (1);
}

int		PhoneBook::strToInt(string strValue)
{
	char	str[strValue.size()];
	int		res;

	strcpy(str, strValue.c_str());
	res = atoi(str);
	return (res);
}

void	PhoneBook::addContact()
{
	string	input;

	cout << "               Add contact's menu\n";
	cout << "=============================================\n";
	for (int i = 0; i < 5; i++)
	{
		cout << fields[i];
		getline(cin, input, '\n');
		if (i == 3 && !isDigit(input))
		{
			cout << RED << "\nIncorrect input!\n" << NORM;
			cout << "Example: 89157891428\n\n";
			while (true)
			{
				cout << "Try Again > ";
				getline(cin, input, '\n');
				if (isDigit(input))
					break;
			}
		}
		contacts[getSize()].setInfo(i, input);
	}
	contactsCount++;
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

void	PhoneBook::getContactInfo()
{
		string	input;
		int		index;

		while (true)
		{
			cout << "Index: > ";
			getline(cin, input, '\n');
			if (!isDigit(input))
				cout << RED << "Incorrect input!\n" << NORM;
			else {
				index = strToInt(input);
				if (index < 1)
					cout << RED << "Incorrect input! Your value must be bigger than 0\n" << NORM;
				else if (index > getSize())
				{
					cout << RED << "Index doesn't exist!\n" << NORM;
					break;
				}
				else {
					cout << endl;
					for (int i = 0; i < 5; i++)
					{
						cout << fields[i] << contacts[index - 1].getInfo(i) << endl;
					}
					break;
				}
			}
			cout << RED << "Try again!\n" << NORM;
		}
}

void	PhoneBook::search()
{
	PhoneBook::getContactList();
	PhoneBook::getContactInfo();
}

int		PhoneBook::getSize() { return (contactsCount); }