#include "FragTrap.hpp"

int	main(void)
{
	cout << endl;
	cout << "========================================================\n";
	cout << "==                  Constructors                      ==\n";
	cout << "========================================================\n";

	FragTrap firstFrag;
	FragTrap secondFrag("Gollum");
	FragTrap cpSecondFrag(secondFrag);
	FragTrap thirdFrag("Rake");

	cout << endl;
	cout << "=======================================================\n";
	cout << "==                      Game                         ==\n";
	cout << "=======================================================\n";

	firstFrag.attack(secondFrag.getName());
	secondFrag.takeDamage(firstFrag.getAttackDamage());
	firstFrag = thirdFrag;
	firstFrag.attack(secondFrag.getName());
	secondFrag.takeDamage(firstFrag.getAttackDamage());
	secondFrag.beRepaired(1);
	cout << BRIGHT_BLUE << secondFrag.getName() << NORM
		 << " hitpoints: "
			GREEN << secondFrag.getHitPoint() << NORM
		 << endl;
	cpSecondFrag.highFivesGuys();

	cout << "========================================================\n";
	cout << "==                     Destructors                    ==\n";
	cout << "========================================================\n";

	return (0);
}