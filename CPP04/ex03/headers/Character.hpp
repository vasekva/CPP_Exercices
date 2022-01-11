#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
			Character(const string &name);
			~Character();
			Character(const Character &copyObject);
			Character &operator=(const Character &object);
			const string	&getName() const;
			void 			equip(AMateria *object);
			void 			unequip(int index);
			void 			use(int index, ICharacter &target);
	private:
		string		name;
		AMateria	*amateria[4];
		Character();
};
#endif