#include "Zombie.hpp"

Zombie *newZombie(string name)
{
	return (new Zombie(name));
}