#ifndef CPP_MODULES_PHONEBOOK_H
#define CPP_MODULES_PHONEBOOK_H

#include "Contact.h"

class PhoneBook {
	private:
		Contact	contacts[8];
		string	fields[5];
		int		contactsCount;
		int		isDigit(string str);
		int		printContactInfo(int contactInd);
		int		strToInt(string str);
		void	getContactList(void);
		void	getContactInfo(void);
		void	printPhoneBook(int contactInd, int infoInd);
	public:
		PhoneBook();
		void	printWelcomePage(void);
		void	addContact(void);
		void	search(void);
};

#endif //CPP_MODULES_PHONEBOOK_H
