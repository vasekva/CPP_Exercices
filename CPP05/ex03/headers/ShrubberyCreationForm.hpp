#ifndef CPP_SHRUBBERYCREATIONFORM_HPP
#define CPP_SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(const string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &copyObject);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &object);
		const string	&getTarget() const;
		void			execute(const Bureaucrat &object) const;
	private:
		ShrubberyCreationForm();
		string	target;
};

std::ostream	&operator<<(std::ostream &out, const ShrubberyCreationForm &object);


#endif //CPP_SHRUBBERYCREATIONFORM_HPP
