#ifndef CPP_SCAVTRAP_HPP
#define CPP_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const string &name);
		~ScavTrap();
		ScavTrap(const ScavTrap &copyObject);
		void		attack(const string &target);
		string		getName() const;
		int			getHitPoint() const;
		int			getEnergyPoints() const;
		int			getAttackDamage() const;
		ScavTrap	&operator=(const ScavTrap &object);
		void		guardGate();
	protected:
		bool	goodMode;
};


#endif //CPP_SCAVTRAP_HPP
