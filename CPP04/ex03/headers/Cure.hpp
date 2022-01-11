#ifndef CURE_HPP
# define CURE_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
			Cure();
			virtual ~Cure();
			
			Cure(const Cure &copyObject);
			Cure &operator=(const Cure &object);
			AMateria	*clone() const;
			void 		use(ICharacter &target);
};

# endif
