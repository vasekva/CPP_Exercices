#ifndef CPP_ZOMBIE_H
#define CPP_ZOMBIE_H

#include <string>
#include <iostream>

using namespace std;

class Zombie {
	private:
		string	name;
	public:
		Zombie(string name);
		~Zombie();
		void	setName(string name);
		string	getName();
		void	announce(void);
};

Zombie *newZombie(string name);
void	randomChump(string name);

#endif //CPP_ZOMBIE_H
