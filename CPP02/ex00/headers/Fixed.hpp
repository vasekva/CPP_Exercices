#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

#import <string>
#import <iostream>

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

#endif

class Fixed {
	public:
		Fixed();
		Fixed(Fixed const &copyObject);
		~Fixed();
		Fixed	&operator=(const Fixed &object);
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
	private:
		int	fixedPoint;
		static const int bits = 8;
};

#endif //CPP_FIXED_HPP
