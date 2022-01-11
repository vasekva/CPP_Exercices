#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
			Ice();
			~Ice();
			Ice(const Ice &copyObject);
			Ice &operator=(const Ice &object);
			AMateria	*clone() const;
			void 		use(ICharacter &target);
};

#endif