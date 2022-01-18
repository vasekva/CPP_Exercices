#include "W_Cat.hpp"

W_Cat::W_Cat()
{
	cout << BOLD << BLUE << "[Cat 🐱] " << NORM;
	cout << BOLD << GREEN << "⚒ Def.Constructor\t"<< NORM
		 << "called"
		 << endl;
	this->type = "W_Cat";
}

W_Cat::~W_Cat()
{
	cout << BOLD << BLUE << "[Cat 🐱] " << NORM;
	cout << BOLD << RED << "❌ Destructor\t" << NORM
		 << "called"
		 << endl;
}

W_Cat::W_Cat(const W_Cat &copyObject)
{
	cout << BOLD << BLUE << "[Cat 🐱] " << NORM;
	cout << BOLD << GREEN << "Copy constructor\t"
		 << "called"
		 << endl;
	*this = copyObject;
}

W_Cat	&W_Cat::operator=(const W_Cat &object)
{
	if (this != &object)
	{
		this->type = object.type;
	}
	return (*this);
}

string W_Cat::getType() const { return (this->type); }

void	W_Cat::makeSound() const
{
	cout << BLUE << " 🐱 Cat says" << URED << " 'wrong sound' 🤦‍♂️️" << NORM << endl;
}
