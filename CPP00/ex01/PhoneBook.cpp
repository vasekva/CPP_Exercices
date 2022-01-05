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
	if (contactsCount != 8)
		contactsCount++;
	else
	{
		for (int i = 0; i < 7; i++)
			for (int j = 0; j < 5; j++)
				contacts[i].setInfo(j, contacts[i + 1].getInfo(j));
	}
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
		contacts[contactsCount - 1].setInfo(i, input);
	}

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

void	PhoneBook::printPhoneBook(int contactInd, int infoInd)
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

int		PhoneBook::printContactInfo(int contactInd)
{
	if (contactInd == 0)
		return (1);
	if (contactInd < 1)
		cout << RED << "Incorrect input! Your value must be bigger than 0\n" << NORM;
	else if (contactInd > contactsCount)
		cout << RED << "Index doesn't exist!\n" << NORM;
	else
	{
		cout << endl;
		for (int i = 0; i < 5; i++)
			cout << fields[i] << contacts[contactInd - 1].getInfo(i) << endl;
		return (1);
	}
	return (0);
}

void	PhoneBook::getContactList()
{
	cout << "=============================================\n";
	cout << "|   Index  |First name| Last name| Nickname |\n";
	for (int contactInd = 0; contactInd < contactsCount; contactInd++)
	{
		cout << "|         " << contactInd + 1 << "|";
		for (int infoInd = 0; infoInd < 3; infoInd++)
			printPhoneBook(contactInd, infoInd);
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
			cout << "Enter an index of the contact to display it's info\n";
			cout << "Or press 0 to go back\n";
			cout << "Index: > ";
			getline(cin, input, '\n');
			if (!isDigit(input))
				cout << RED << "Incorrect input!\n" << NORM;
			else
			{
				index = strToInt(input);
				if (printContactInfo(index))
					break;
			}
			cout << RED << "Try again!\n" << NORM;
		}
}

void	PhoneBook::search()
{
	PhoneBook::getContactList();
	PhoneBook::getContactInfo();
}