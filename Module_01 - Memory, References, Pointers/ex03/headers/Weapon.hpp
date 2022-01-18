#ifndef CPP_WEAPON_HPP
#define CPP_WEAPON_HPP

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

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

class Weapon {
	public:
		Weapon(string type);
		~Weapon();
		const string	&getType() const;
		void			setType(string type);
	private:
		string	type;
};


#endif //CPP_WEAPON_HPP
