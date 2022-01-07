#include "Zombie.hpp"

Zombie::Zombie()
{
	setName("Zombie from the laboratory");
}

Zombie::Zombie(string name)
{
	setName(name);
}

Zombie::~Zombie()
{
	cout << "\"" << getName() << "\"" << " is dead" << endl;
}

string Zombie::getName() const
{
	return (this->name);
}

void	Zombie::setName(string name)
{
	this->name = name;
}

void Zombie::announce() const
{
		cout << getName() << " BraiiiiiiinnnzzzZ..." << endl;
}
