#ifndef CPP_HUMANB_HPP
#define CPP_HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

using namespace std;

class HumanB {
	public:
		HumanB(string name);
		void	attack(void);
		string	getName();
		void	setWeapon(Weapon &weapon);
	private:
		Weapon	*weapon;
		string	name;
};

#endif //CPP_HUMANB_HPP
