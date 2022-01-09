#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap firstTrap = ClapTrap("firstTrap");
	ClapTrap secondTrap = ClapTrap("secondTrap");
	ClapTrap copyTrap = firstTrap;
	cout << "First: " << &firstTrap << endl;
	cout << "Second: " << &copyTrap << endl;
	firstTrap.attack(secondTrap.getName());
	return (0);
}