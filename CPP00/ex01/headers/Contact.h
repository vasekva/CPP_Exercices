#include "main_header.h"

#ifndef CPP_MODULES_CONTACT_H
#define CPP_MODULES_CONTACT_H

class Contact {
	private:
		string	info[5];
	public:
		string	getInfo(int ind);
		void 	setInfo(int ind, string value);
};


#endif //CPP_MODULES_CONTACT_H
