#ifndef CPP_FRAGTRAP_HPP
#define CPP_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const string &name);
		~FragTrap();
		FragTrap(const FragTrap &copyObject);
		void		attack(string const &target) const;
		string		getName() const;
		int			getHitPoint() const;
		int			getEnergyPoints() const;
		int			getAttackDamage() const;
		FragTrap	&operator=(const FragTrap &object);
		void highFivesGuys(void) const;
	private:
};

#endif //CPP_FRAGTRAP_HPP
