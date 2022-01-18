#ifndef CPP_INTERN_HPP
#define CPP_INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &copyObject);
		Intern &operator=(const Intern &object);
		Form *makeForm(const string &name, const string &target);
		class InternException : public exception
		{
			public:
				InternException(const string &error);
				~InternException() throw();
				string		&getErrorMsg();
				const char	*what() const throw();
			private:
				InternException();
				string	error;
		};
};

#endif //CPP_INTERN_HPP
