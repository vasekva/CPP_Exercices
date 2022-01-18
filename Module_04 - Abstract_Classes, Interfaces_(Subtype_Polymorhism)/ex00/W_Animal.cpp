#include "W_Animal.hpp"

W_Animal::W_Animal()
{
	cout << BOLD << YELLOW << "[W_Animal ❓ ] " << NORM;
	cout << BOLD << GREEN << "⚒ Def.Constructor\t"<< NORM
		 << "called"
		 << endl;
	this->type = "W_Animal";
}

W_Animal::~W_Animal()
{
	cout << BOLD << YELLOW << "[W_Animal] " << NORM;
	cout << BOLD << RED << "❌ Destructor\t" << NORM
		 << "called"
		 << endl;
}

W_Animal::W_Animal(const W_Animal &copyObject)
{
	cout << BOLD << YELLOW << "[W_Animal] " << NORM;
	cout << BOLD << GREEN << "Copy constructor\t"
		 << "called"
		 << endl;
	*this = copyObject;
}

W_Animal	&W_Animal::operator=(const W_Animal &object)
{
	if (this != &object)
	{
		this->type = object.type;
	}
	return (*this);
}

void	W_Animal::makeSound() const
{
	cout << BRIGHT_BLUE << " 🔇 Some" << URED << " wrong " << NORM << "animal's sound has been made" << NORM << endl;
}

string W_Animal::getType() const { return (this->type); }