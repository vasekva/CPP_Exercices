#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Form 		formular("formular", 10, 4);
	Bureaucrat	bure("Bureaucrat", 11);

	cout << formular << endl;
	cout << bure << endl << endl;

	bure.signForm(formular);
	cout << BRIGHT_BLUE << "Incrementing grade..." << NORM << endl;
	bure.incrementGrade();
	bure.signForm(formular);
	cout << endl << formular << endl;

	try
	{
		for (int i = 0; i < 150; i++)
			bure.decrementGrade();
		cout << bure << endl; //GradeTooLowException
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}

	try
	{
		Bureaucrat bure1("Bureaucrat", 0); //GradeTooHighException
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}
}