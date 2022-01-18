#include "Cat.hpp"

Cat::Cat()
{
	cout << BOLD << BLUE << "[Cat 🐱] " << NORM;
	cout << BOLD << GREEN << "⚒ Def.Constructor\t"<< NORM
		 << "called"
		 << endl;
	this->type = "Cat";
	this->attribute = new Brain();
}

Cat::~Cat()
{
	cout << BOLD << BLUE << "[Cat 🐱] " << NORM;
	cout << BOLD << RED << "❌ Destructor\t" << NORM
		 << "called"
		 << endl;
	delete this->attribute;
}

Cat::Cat(const Cat &copyObject)
{
	cout << BOLD << BLUE << "[Cat 🐱] " << NORM;
	cout << BOLD << GREEN << "Copy constructor\t"
		 << "called"
		 << endl;
	this->attribute = new Brain();
	*this = copyObject;
}

Cat	&Cat::operator=(const Cat &object)
{
	if (this != &object)
	{
		this->type = object.type;
		*this->attribute = *object.getAttribute();
	}
	return (*this);
}

string Cat::getType() const { return (this->type); }

Brain	*Cat::getAttribute() const
{
	return (this->attribute);
}

void	Cat::makeSound() const
{
	cout << BLUE << " 🐱 Cat says 'mrrrrrrr' 😻" << NORM << endl;
}