#ifndef CPP_BRAIN_HPP
#define CPP_BRAIN_HPP

#include "Animal.hpp"

class Brain {
	public:
		Brain();
		~Brain();
		Brain(const Brain &copyObject);
		Brain	&operator=(const Brain &object);
		string	ideas[100];
};

#endif //CPP_BRAIN_HPP
