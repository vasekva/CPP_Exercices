#ifndef CPP_DIAMONDTRAP_HPP
#define CPP_DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap();
		DiamondTrap(const string &name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &copyObject);
		DiamondTrap	&operator=(const DiamondTrap &object);
		string		getName() const;
		int			getHitPoint() const;
		int			getEnergyPoints() const;
		int			getAttackDamage() const;
		void		whoAmI() const;
		void		attack(string const &target);
	private:
		string name;
};


#endif //CPP_DIAMONDTRAP_HPP
