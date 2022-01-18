#include "DiamondTrap.hpp"

int	main(void)
{
	cout << endl;
	cout << "========================================================\n";
	cout << "==                  Constructors                      ==\n";
	cout << "========================================================\n";

	DiamondTrap diamondWTF("WeirdMan");
	DiamondTrap	strangeMan("Kiba");

	cout << endl;
	cout << "=======================================================\n";
	cout << "==                      Game                         ==\n";
	cout << "=======================================================\n";

	cout << "hitPoints: "
		<< GREEN << diamondWTF.getHitPoint() << NORM << endl;
	cout << "energyPoints: "
		<< GREEN << diamondWTF.getEnergyPoints() << NORM << endl;
	cout << "attackDamage: "
		<< GREEN << diamondWTF.getAttackDamage() << NORM << endl;
	cout << endl;
	diamondWTF.whoAmI();
	strangeMan.whoAmI();
	diamondWTF.highFivesGuys();
	strangeMan.guardGate();

	cout << "========================================================\n";
	cout << "==                     Destructors                    ==\n";
	cout << "========================================================\n";

	return (0);
}