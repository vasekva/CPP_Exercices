#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern intern;
		Form* form;

		form = intern.makeForm("tree", "grud");
		if (form)
			std::cout << YELLOW << *form << endl;

		form = intern.makeForm("robot", "Bender");
		if (form)
			std::cout << RED << *form << endl;

		form = intern.makeForm("president", "Kartoshka");
		if (form)
			std::cout << PURPLE << *form << endl;

		form = intern.makeForm("random", "Point");
		if (form)
			std::cout << BRIGHT_BLUE << *form << endl;
	}
	catch (exception &e)
	{
		cout << e.what() << endl;
	}
}