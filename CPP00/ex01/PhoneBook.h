//
// Created by fatality on 05.01.2022.
//

#ifndef CPP_MODULES_PHONEBOOK_H
#define CPP_MODULES_PHONEBOOK_H

#include "Contact.h"

class PhoneBook {
	private:
		Contact	contacts[8];
		string	fields[5];
		int		contactsCount;
	public:
		PhoneBook();
		void	printWelcomePage(void);
		void	printInfo(int contactInd, int infoInd);
		int		isDigit(string str);
		int		strToInt(string str);
		void	addContact(void);
		void	search(void);
		void	getContactList(void);
		void	getContactInfo(void);
		int		getSize();
};


#endif //CPP_MODULES_PHONEBOOK_H
