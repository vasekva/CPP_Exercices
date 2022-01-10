#ifndef CPP_CAT_HPP
#define CPP_CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &copyObject);
		Cat	&operator=(const Cat &object);
		string	getType(void) const;
		Brain	*getAttribute() const;
		void	makeSound()	const;
	private:
		Brain	*attribute;
};

#endif //CPP_CAT_HPP
