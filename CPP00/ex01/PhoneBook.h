//
// Created by fatality on 05.01.2022.
//

#ifndef CPP_MODULES_PHONEBOOK_H
#define CPP_MODULES_PHONEBOOK_H

#include "Contact.h"

class PhoneBook {
	private:
		Contact	contacts[8];
		int		contactsCount;
	public:
		PhoneBook();
		void	printWelcomePage(void);
		void	printInfo(int contactInd, int infoInd);
		void	addContact(void);
		void	getContactList(void);
		int		getSize();
};


#endif //CPP_MODULES_PHONEBOOK_H
