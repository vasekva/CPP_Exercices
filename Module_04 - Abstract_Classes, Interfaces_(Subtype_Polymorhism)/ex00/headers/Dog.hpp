#ifndef CPP_DOG_HPP
#define CPP_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &copyObject);
		Dog	&operator=(const Dog &copyObject);
		string	getType(void) const;
		void	makeSound()	const;
	private:
};


#endif //CPP_DOG_HPP
