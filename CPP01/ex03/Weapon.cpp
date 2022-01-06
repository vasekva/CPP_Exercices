#include "Weapon.hpp"

Weapon::Weapon(string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
	cout << "Weapon " << getType() << " has been destroyed\n";
}

void Weapon::setType(string type)
{
	this->type = type;
}

const string Weapon::getType()
{
	return (this->type);
}