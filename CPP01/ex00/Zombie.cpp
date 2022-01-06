#include "Zombie.hpp"

Zombie::Zombie(string name)
{
	setName(name);
}

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
}

void Zombie::announce()
{
		cout << getName() << " BraiiiiiiinnnzzzZ..." << endl;
}
