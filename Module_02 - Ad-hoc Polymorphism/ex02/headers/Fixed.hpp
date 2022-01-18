#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

#import <string>
#import <iostream>
#import <math.h>

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
		Fixed(const Fixed &copyObject);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed	&operator=(const Fixed &object);
		bool	operator>(const Fixed &object) const;
		bool	operator<(const Fixed &object) const;
		bool	operator>=(const Fixed &object) const;
		bool	operator<=(const Fixed &object) const;
		bool	operator==(const Fixed &object) const;
		bool	operator!=(const Fixed &object) const;

		Fixed	operator+(const Fixed &object) const;
		Fixed	operator-(const Fixed &object) const;
		Fixed	operator*(const Fixed &object) const;
		Fixed	operator/(const Fixed &object) const;

		Fixed	operator--(int);
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	&operator++();

		static Fixed 	&min(Fixed &fst, Fixed &scd);
		static Fixed 	&max(Fixed &fst, Fixed &scd);
		static const 	Fixed &min(const Fixed &fst, const Fixed &scd);
		static const 	Fixed &max(const Fixed &fst, const Fixed &scd);
private:
		int	fixedPointValue;
		static const int bits = 8;
};

std::ostream    &operator<<(std::ostream &out, const Fixed &anotherFixed);


#endif //CPP_FIXED_HPP
