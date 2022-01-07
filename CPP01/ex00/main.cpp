#include "Zombie.hpp"

int	main(void)
{
	Zombie zombie1("stack's_Zombie");
	zombie1.announce();
	Zombie *zombie2 = newZombie("method's_Zombie");
	zombie2->announce();
	delete zombie2;
	zombie2 = nullptr;
	Zombie *zombieHeap= newZombie("heap's_Zombie");
	zombieHeap->announce();
	delete zombieHeap;
	zombieHeap = nullptr;
	return (0);
}