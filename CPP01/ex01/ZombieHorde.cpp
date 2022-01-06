#include "Zombie.hpp"

Zombie	*zombieHorde(int n, string name)
{
	Zombie	*horde;

	if (n <= 0)
	{
		cout << RED << "Incorrect n-parameter!"
			<<" It must be bigger than 0!\n";
		return (nullptr);
	}
	horde = new Zombie[n];
	for (int i = 0; i < n; i++)
		horde[i].setName("Zombie " + name += " #" + to_string(i));
	return (horde);
}