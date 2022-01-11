#include "AMateria.hpp"

AMateria::AMateria(string const &type) : type(type)
{
	cout << BOLD << YELLOW << "[AMateria ☄️ ] " << NORM;
	cout << BOLD << GREEN << "⚒ Def.Constructor\t" << NORM
		 << "called"
		 << endl;
}

AMateria::~AMateria()
{
	cout << BOLD << YELLOW << "[AMateria ☄️ ] " << NORM;
	cout << BOLD << RED << "❌ Destructor\t" << NORM
		 << "called"
		 << endl;
}

AMateria::AMateria(const AMateria &copyObject)
{
	cout << BOLD << YELLOW << "[AMateria ☄️ ] " << NORM;
	cout << BOLD << GREEN << "Copy constructor\t" << NORM
		<< "called"
		<< endl;
	*this = copyObject;
}

AMateria &AMateria::operator=(const AMateria &object)
{
	if (this != &object)
		this->type = object.getType();
	return (*this);
}

string const &AMateria::getType(void) const { return (this->type); }

void AMateria::use(ICharacter& target)
{
	(void) target;
//	cout << UGREEN << "AMateria " << target.getName() <<  " has been used! 👍 ️" << NORM << endl;
}