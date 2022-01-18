#ifndef CPP_PRESIDENTIALPARDONFORM_HPP
#define CPP_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &object);
		const string 	&getTarget() const;
		void 			execute(const Bureaucrat  &object) const;
	private:
		PresidentialPardonForm();
		string target;
};

std::ostream	&operator<<(std::ostream &out, const PresidentialPardonForm &object);

#endif //CPP_PRESIDENTIALPARDONFORM_HPP
