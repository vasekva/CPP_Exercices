#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}

HumanA::~HumanA()
{
	cout << BOLD << RED << "HumanA" << NORM
		<< " with name "
		<< PURPLE << getName() << NORM
		<< BOLD << RED << " has been destroyed\n" << NORM;
}

string HumanA::getName() const
{
	return (this->name);
}

void HumanA::attack() const
{
	cout << BOLD << RED << "HumanA" << NORM
		 << " with name "
		 << PURPLE << getName() << NORM
		 << " attack with his "
		 << YELLOW << weapon.getType() << NORM
		 << endl;
}
