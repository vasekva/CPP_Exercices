#ifndef CPP_ZOMBIE_H
#define CPP_ZOMBIE_H

#include <string>
#include <iostream>

#ifndef COLOR
#define COLOR

# define RED	"\033[31m"

#endif

using std::cout;
using std::string;
using std::cin;
using std::endl;

class Zombie {
	private:
		string	name;
	public:
		Zombie();
		Zombie(string name);
		~Zombie();
		void	setName(string name);
		string	getName();
		void	announce(void);
};

Zombie	*zombieHorde(int n, string name);

#endif //CPP_ZOMBIE_H
