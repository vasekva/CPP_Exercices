#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie2 = new Zombie("heapZombie");
	zombie2->announce();
	delete zombie2;
	Zombie zombie1("stackZombie");
	zombie1.announce();
}