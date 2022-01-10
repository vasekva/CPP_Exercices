#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap firstTrap = ClapTrap("firstTrap");
	ClapTrap secondTrap = ClapTrap("secondTrap");
	ClapTrap copyTrap = firstTrap;
	firstTrap.attack(secondTrap.getName());
	cout << "Health: " << GREEN << secondTrap.getHitPoint() << NORM << endl;
	secondTrap.takeDamage(firstTrap.getAttackDamage());
	cout << "Health: " << GREEN << secondTrap.getHitPoint() << NORM << endl;
	secondTrap.beRepaired(4);
	cout << "Health: " << GREEN << secondTrap.getHitPoint() << NORM << endl;
	return (0);
}