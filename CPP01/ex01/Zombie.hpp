#ifndef CPP_ZOMBIE_H
#define CPP_ZOMBIE_H

#include <string>
#include <iostream>

#ifndef COLOR
#define COLOR

# define RED	"\033[31m"

#endif

using namespace std;

class Zombie {
	private:
		string	name;
	public:
		Zombie();
		~Zombie();
		void	setName(string name);
		string	getName();
		void	announce(void);
};

Zombie	*zombieHorde(int n, string name);

#endif //CPP_ZOMBIE_H
