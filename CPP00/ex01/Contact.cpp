#include "Contact.h"

void	Contact::setInfo(int ind, string value)
{
	info[ind] = value;
}

string	Contact::getInfo(int id)
{
	return (info[id]);
}