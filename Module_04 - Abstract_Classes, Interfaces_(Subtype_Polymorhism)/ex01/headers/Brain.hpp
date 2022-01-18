#ifndef CPP_BRAIN_HPP
#define CPP_BRAIN_HPP

#include "Animal.hpp"

class Brain {
	public:
		Brain();
		~Brain();
		Brain(const Brain &copyObject);

		string	getIdea(const int index) const;
		void	setIdea(const int index, string idea);

		Brain	&operator=(const Brain &object);
	private:
		string	ideas[100];
};

#endif //CPP_BRAIN_HPP
