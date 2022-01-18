#ifndef CPP_ROBOTOMYREQUESTFROM_HPP
#define CPP_ROBOTOMYREQUESTFROM_HPP

# include <ctime>
# include <cstdlib>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(const string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &copyObject);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &object);
		const string	&getTarget() const;
		void			execute(const Bureaucrat &object) const;
	private:
		RobotomyRequestForm();
		string	target;
};

std::ostream	&operator<<(std::ostream &out, const RobotomyRequestForm &object);

#endif //CPP_ROBOTOMYREQUESTFROM_HPP
