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
		FragTrap	&operator=(const FragTrap &object);
		void highFivesGuys(void);
	private:
};

#endif //CPP_FRAGTRAP_HPP
