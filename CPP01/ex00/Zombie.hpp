#ifndef CPP_ZOMBIE_H
#define CPP_ZOMBIE_H

#include <string>
#include <iostream>

using std::string;
using std::endl;
using std::cout;
using std::cin;

class Zombie {
	private:
		string	name;
	public:
		Zombie();
		Zombie(string name);
		~Zombie();
		void	setName(string name);
		string	getName() const;
		void	announce(void) const;
};

Zombie *newZombie(string name);
void	randomChump(string name);

#endif //CPP_ZOMBIE_H
