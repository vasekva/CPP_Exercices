#ifndef CPP_SCAVTRAP_HPP
#define CPP_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const string &name);
		~ScavTrap();
		ScavTrap(const ScavTrap &copyObject);
		ScavTrap	&operator=(const ScavTrap &object);
		void		attack(string const &target) const;
		string		getName() const;
		int			getHitPoint() const;
		int			getEnergyPoints() const;
		int			getAttackDamage() const;
		void		guardGate();
	private:
		bool	goodMode;
};


#endif //CPP_SCAVTRAP_HPP
