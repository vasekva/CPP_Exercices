#ifndef CPP_ANIMAL_HPP
#define CPP_ANIMAL_HPP

#include <string>
#include <iostream>

using	std::string;
using	std::cout;
using	std::cin;
using	std::endl;

#ifndef COLOR

#define COLOR
# define BACK_GRAY		"\033[47m"
# define NORM			"\033[0m"
# define BOLD			"\033[1m"
# define RED			"\033[31m"
# define GREEN			"\033[32m"
# define YELLOW			"\033[33m"
# define BLUE			"\033[34m"
# define PURPLE			"\033[35m"
# define BRIGHT_BLUE	"\033[36m"
# define NONE			"\033[37m"
# define URED			"\033[4;31m"
# define UGREEN			"\033[4;32m"

#endif

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &copyObject);
		Animal	&operator=(const Animal &object);
		string	getType(void) const;
		virtual void	makeSound() const = 0;
	protected:
		string	type;
};

#endif //CPP_ANIMAL_HPP
