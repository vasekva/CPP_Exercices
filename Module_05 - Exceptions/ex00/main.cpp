#include "Bureaucrat.hpp"

void try_exception()
{
	try
	{
		Bureaucrat buro1("Buro1", 10);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "Grade Too High Exception" << endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "Grade Too High Exception" << endl;
	}
	catch (exception &e)
	{
		std::cerr << e.what() << endl;
	}

	try
	{
		Bureaucrat buro2("Buro2", 151);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "Grade Too High Exception" << endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "Grade Too Low Exception" << endl;
	}
	catch (exception &e)
	{
		std::cerr << e.what() << endl;
	}

	try
	{
		Bureaucrat buro3("Buro3", 0);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "Grade Too High Exception" << endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "Grade Too Low Exception" << endl;
	}
	catch (exception &e)
	{
		std::cerr << e.what() << endl;
	}

	try
	{
		Bureaucrat buro4("Buro4", 2);
		cout << buro4 << endl;
		cout << BRIGHT_BLUE << "Incrementing..." << NORM << endl;
		for (int i = 0; i < 3; i++)
			buro4.incrementGrade();
//		Bureaucrat buro4("Buro4", 149);
//			for (int i = 0; i < 3; i++)
//			buro4.decrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "Grade Too High Exception" << endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "Grade Too Low Exception" << endl;
	}
	catch (exception &e)
	{
		std::cerr << e.what() << endl;
	}
}

int main()
{
//	Bureaucrat buro1("Buro", 1);
//	Bureaucrat buro2 = buro1;
//	cout << buro1 << endl;
//	cout << buro2 << endl;
	try_exception();
}