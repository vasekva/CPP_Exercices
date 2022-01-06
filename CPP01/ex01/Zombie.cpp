#include "Zombie.hpp"

Zombie::Zombie() { }

Zombie::~Zombie()
{
	cout << "\"" << getName() << "\"" << " is dead" << endl;
}

string Zombie::getName()
{
	return (this->name);
}

void	Zombie::setName(string name)
{
	this->name = name;
	cout << "Zombie got a name \"" << name << "\"" << " and rised from the dead!\n";
}

void Zombie::announce()
{
	cout << getName() << " BraiiiiiiinnnzzzZ..." << endl;
}
