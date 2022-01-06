#ifndef CPP_WEAPON_HPP
#define CPP_WEAPON_HPP

#include <string>
#include <iostream>

using namespace std;

class Weapon {
	public:
		Weapon(string type);
		~Weapon();
		const string	getType();
		void			setType(string type);
	private:
		string	type;
};


#endif //CPP_WEAPON_HPP
