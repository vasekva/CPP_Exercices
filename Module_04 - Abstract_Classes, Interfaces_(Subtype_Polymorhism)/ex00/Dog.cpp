#include "Dog.hpp"

Dog::Dog()
{
	cout << BOLD << PURPLE << "[Dog 🐕] " << NORM;
	cout << BOLD << GREEN << "⚒ Def.Constructor\t"<< NORM
		 << "called"
		 << endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	cout << BOLD << PURPLE << "[Dog 🐕] " << NORM;
	cout << BOLD << RED << "❌ Destructor\t" << NORM
		 << "called"
		 << endl;
}

Dog::Dog(const Dog &copyObject)
{
	cout << BOLD << PURPLE << "[Dog 🐕] " << NORM;
	cout << BOLD << GREEN << "Copy constructor\t"
		 << "called"
		 << endl;
	*this = copyObject;
}

Dog	&Dog::operator=(const Dog &object)
{
	if (this != &object)
	{
		this->type = object.type;
	}
	return (*this);
}

string Dog::getType() const { return (this->type); }

void	Dog::makeSound() const
{
	cout << PURPLE << " 🐕 Dog says 'GAV'" << NORM << endl;
}