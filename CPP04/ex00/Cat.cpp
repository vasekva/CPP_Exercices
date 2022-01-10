#include "Cat.hpp"

Cat::Cat()
{
	cout << BOLD << BLUE << "[Cat 🐱] " << NORM;
	cout << BOLD << GREEN << "⚒ Def.Constructor\t"<< NORM
		 << "called"
		 << endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	cout << BOLD << BLUE << "[Cat 🐱] " << NORM;
	cout << BOLD << RED << "❌ Destructor\t" << NORM
		 << "called"
		 << endl;
}

Cat::Cat(const Cat &copyObject)
{
	cout << BOLD << BLUE << "[Cat 🐱] " << NORM;
	cout << BOLD << GREEN << "Copy constructor\t"
		 << "called"
		 << endl;
	*this = copyObject;
}

Cat	&Cat::operator=(const Cat &object)
{
	if (this != &object)
	{
		this->type = object.type;
	}
	return (*this);
}

string Cat::getType() const { return (this->type); }

void	Cat::makeSound() const
{
	cout << BLUE << " 🐱 Cat says 'mrrrrrrr' 😻" << NORM << endl;
}