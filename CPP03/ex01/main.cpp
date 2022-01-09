#include "ScavTrap.hpp"

int	main(void)
{
	cout << endl;

	ScavTrap firstScav = ScavTrap(); // 1
	ScavTrap secondScav = ScavTrap("secondScav"); // 2
	ScavTrap copyScav = secondScav; // 3

	cout << endl;
	cout << BRIGHT_BLUE << firstScav.getName() << NORM
		 << " hitpoints: "
			GREEN << firstScav.getHitPoint() << NORM
		 << endl;
	secondScav.attack(firstScav.getName());
	firstScav.takeDamage(secondScav.getAttackDamage());
	cout << BRIGHT_BLUE << firstScav.getName() << NORM
		<< " hitpoints: "
		GREEN << firstScav.getHitPoint() << NORM
		<< endl;
	cout << endl;

	cout << endl;
	cout << BRIGHT_BLUE << copyScav.getName() << NORM
		 << " hitpoints: "
			GREEN << copyScav.getHitPoint() << NORM
		 << endl;
	secondScav.attack(copyScav.getName());
	copyScav.takeDamage(secondScav.getAttackDamage());
	cout << BRIGHT_BLUE << copyScav.getName() << NORM
		 << " hitpoints: "
			GREEN << copyScav.getHitPoint() << NORM
		 << endl;

	copyScav.guardGate();

	cout << endl;
	return (0);
}