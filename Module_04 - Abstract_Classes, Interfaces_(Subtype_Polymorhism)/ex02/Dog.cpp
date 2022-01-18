#include "Dog.hpp"

Dog::Dog()
{
	cout << BOLD << PURPLE << "[Dog 🐕] " << NORM;
	cout << BOLD << GREEN << "⚒ Def.Constructor\t"<< NORM
		 << "called"
		 << endl;
	this->type = "Dog";
	this->attribute = new Brain();
}

Dog::~Dog()
{
	cout << BOLD << PURPLE << "[Dog 🐕] " << NORM;
	cout << BOLD << RED << "❌ Destructor\t" << NORM
		 << "called"
		 << endl;
	delete this->attribute;
}

Dog::Dog(const Dog &copyObject)
{
	cout << BOLD << PURPLE << "[Dog 🐕] " << NORM;
	cout << BOLD << GREEN << "Copy constructor\t"
		 << "called"
		 << endl;
	this->attribute = new Brain();
	*this = copyObject;
}

Dog	&Dog::operator=(const Dog &object)
{
	if (this != &object)
	{
		this->type = object.getType();
		*this->attribute = *object.getAttribute();
	}
	return (*this);
}

string Dog::getType() const { return (this->type); }

Brain	*Dog::getAttribute() const
{
	return (this->attribute);
}

void	Dog::makeSound() const
{
	cout << PURPLE << " 🐕 Dog says 'GAV'" << NORM << endl;
}