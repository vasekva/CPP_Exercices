#include "headers/HumanB.hpp"

HumanB::HumanB(string name)
{
	this->name = name;
	this->weapon = nullptr;
}

HumanB::~HumanB()
{
	cout << BOLD << GREEN << "HumanB" << NORM
		 << " with name "
		 << BRIGHT_BLUE << getName() << NORM
		 << BOLD << RED << " has been destroyed\n" << NORM;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

string HumanB::getName() const
{
	return (this->name);
}

void HumanB::attack() const
{
	cout << BOLD << GREEN << "HumanB" << NORM
		<< " with name "
		<< BRIGHT_BLUE << getName() << NORM
		<< " atack with his "
		<< YELLOW << weapon->getType() << NORM
		<< endl;
}