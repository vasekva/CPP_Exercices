#include "ScavTrap.hpp"

int	main(void)
{
	cout << endl;
	cout << "========================================================\n";
	cout << "==                  Constructors                      ==\n";
	cout << "========================================================\n";

	ClapTrap clap	= ClapTrap();
	ScavTrap firstScav = ScavTrap(); // 1
	ScavTrap secondScav = ScavTrap("secondScav"); // 2
	ScavTrap copyScav = secondScav; // 3

	cout << endl;
	cout << "=======================================================\n";
	cout << "==                      Game                         ==\n";
	cout << "=======================================================\n";

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
	cout << BRIGHT_BLUE << clap.getName() << NORM
		 << " hitpoints: "
			GREEN << clap.getHitPoint() << NORM
		 << endl;

	secondScav.attack(clap.getName());
	clap.takeDamage(secondScav.getAttackDamage());

	cout << BRIGHT_BLUE << clap.getName() << NORM
		 << " hitpoints: "
			GREEN << clap.getHitPoint() << NORM
		 << endl;

	copyScav.guardGate();
	clap.attack(copyScav.getName());
	cout << "========================================================\n";
	cout << "==                     Destructors                    ==\n";
	cout << "========================================================\n";

	return (0);
}