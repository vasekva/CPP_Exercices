#include "headers/Weapon.hpp"

Weapon::Weapon(string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
	cout << "Weapon " << getType()
		<< BOLD << RED << " has been destroyed\n" << NORM;
}

void Weapon::setType(string type)
{
	this->type = type;
}

const string &Weapon::getType() const
{
	return (type);
}