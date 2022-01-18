#ifndef CPP_CLAPTRAP_HPP
#define CPP_CLAPTRAP_HPP

#import <string>
#import <iostream>

using	std::string;
using	std::cout;
using	std::cin;
using	std::endl;

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
# define URED			"\033[4;31m"
# define UGREEN			"\033[4;32m"

#endif

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(const string &name);
		ClapTrap(const ClapTrap &copyObject);
		~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &object);
		void		attack(string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		string		getName() const;
		int			getHitPoint() const;
		int			getEnergyPoints() const;
		int			getAttackDamage() const;
	protected:
		string	name;
		int		hitPoints;
		int		energyPoints;
		int		attackDamage;
};

#endif //CPP_CLAPTRAP_HPP
