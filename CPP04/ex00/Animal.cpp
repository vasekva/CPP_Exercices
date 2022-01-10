#include "Animal.hpp"

Animal::Animal()
{
	cout << BOLD << YELLOW << "[Animal ❓ ] " << NORM;
	cout << BOLD << GREEN << "⚒ Def.Constructor\t"<< NORM
		 << "called"
		 << endl;
	this->type = "Animal";
}

Animal::~Animal()
{
	cout << BOLD << YELLOW << "[Animal] " << NORM;
	cout << BOLD << RED << "❌ Destructor\t" << NORM
		 << "called"
		 << endl;
}

Animal::Animal(const Animal &copyObject)
{
	cout << BOLD << YELLOW << "[Animal] " << NORM;
	cout << BOLD << GREEN << "Copy constructor\t"
		 << "called"
		 << endl;
	*this = copyObject;
}

Animal	&Animal::operator=(const Animal &object)
{
	if (this != &object)
	{
		this->type = object.type;
	}
	return (*this);
}

void	Animal::makeSound() const
{
	cout << BRIGHT_BLUE << " 🔊 Some strange animal's sound has been made" << NORM << endl;
}

string Animal::getType() const { return (this->type); }