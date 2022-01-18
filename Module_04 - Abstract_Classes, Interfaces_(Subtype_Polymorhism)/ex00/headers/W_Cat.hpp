#include "W_Animal.hpp"

#ifndef CPP_W_CAT_HPP
#define CPP_W_CAT_HPP


class W_Cat : public W_Animal
{
	public:
		W_Cat();
		~W_Cat();
		W_Cat(const W_Cat &copyObject);
		W_Cat	&operator=(const W_Cat &object);
		string	getType(void) const;
		void	makeSound()	const;
	private:
};


#endif //CPP_W_CAT_HPP
