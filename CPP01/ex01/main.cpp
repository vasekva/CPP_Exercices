#include "Zombie.hpp"

int	main(void)
{
	int	n;

	n = 4;
	Zombie *horde = zombieHorde(n, "zzzz");
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete [] horde;
}