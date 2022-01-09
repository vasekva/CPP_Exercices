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
		void		guardGate();
	private:
		bool	goodMode;
};


#endif //CPP_SCAVTRAP_HPP
