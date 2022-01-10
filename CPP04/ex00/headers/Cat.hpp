#ifndef CPP_CAT_HPP
#define CPP_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &copyObject);
		Cat	&operator=(const Cat &object);
		string	getType(void) const;
		void	makeSound()	const;
	private:
};


#endif //CPP_CAT_HPP
