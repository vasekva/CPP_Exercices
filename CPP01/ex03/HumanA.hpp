#ifndef CPP_HUMANA_HPP
#define CPP_HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

using namespace std;

class HumanA {
	public:
		HumanA(string name, Weapon &weapon);
		void	attack(void);
		string	getName();
	private:
		Weapon	&weapon;
		string	name;
};


#endif //CPP_HUMANA_HPP
