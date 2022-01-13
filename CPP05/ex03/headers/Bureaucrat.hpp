#ifndef CPP_BUREAUCRAT_HPP
#define CPP_BUREAUCRAT_HPP

#include <string>
#include <iostream>

using	std::string;
using	std::cout;
using	std::cin;
using	std::endl;
using	std::exception;

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

#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(const string &name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &copyObject);
		Bureaucrat &operator=(const Bureaucrat &object);

		const string	&getName() const;
		short			getGrade() const;
		void			incrementGrade();
		void			decrementGrade();
		void			signForm(Form &object) const;
		void			executeForm(const Form &form) const;

		class GradeTooHighException : public exception
		{
			public:
				GradeTooHighException();
				GradeTooHighException(string &error);
				~GradeTooHighException() throw();
				const char *what() const throw();
			private:
				string	error;
		};

		class GradeTooLowException : public exception
		{
			public:
				GradeTooLowException();
				GradeTooLowException(string &error);
				~GradeTooLowException()  throw();
				const char *what() const throw();
			private:
				string	error;
		};

	private:
		Bureaucrat();
		const string	name;
		short			grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &object);

#endif //CPP_BUREAUCRAT_HPP
