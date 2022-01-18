#ifndef CPP_DOG_HPP
#define CPP_DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &copyObject);
		Dog	&operator=(const Dog &object);
		string	getType(void) const;
		Brain	*getAttribute() const;
		void	makeSound()	const;
	private:
		Brain	*attribute;
};


#endif //CPP_DOG_HPP
