#ifndef CPP_HUMANB_HPP
#define CPP_HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

using	std::cout;
using	std::endl;
using	std::string;

#ifndef COLOR

#define COLOR
# define BACK_GRAY		"\033[47m"
# define NORM			"\033[0m"
# define BOLD			"\033[1m"
# define RED			"\033[31m"
# define GREEN			"\033[32m"
# define YELLOW			"\033[33m"
# define BLUE			"\033[34m"
# define PURPLE			"\033[35m"
# define BRIGHT_BLUE	"\033[36m"
# define NONE			"\033[37m"

#endif

class HumanB {
	public:
		HumanB(string name);
		~HumanB();
		void	attack(void) const;
		string	getName() const;
		void	setWeapon(Weapon &weapon);
	private:
		Weapon	*weapon;
		string	name;
};

#endif //CPP_HUMANB_HPP
