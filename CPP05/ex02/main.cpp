#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	TestShrubberyCreationForm() //s145 e137
{
	string line;
	std::ifstream outFile;

	cout << "========================================================" << endl;
	cout << "==                  "
		<< GREEN << "Shrubbery" << NORM
		<< "                         =="
		<< endl;
	cout << "========================================================" << endl;

	try
	{
		Bureaucrat eva("eva", 136);
		ShrubberyCreationForm tree("file");
		tree.beSigned(eva);

		cout << eva << endl;
		cout << tree << endl;

		try
		{
			tree.execute(eva);
			outFile.open("file_shrubbery");
			if (!outFile)
				throw ShrubberyCreationForm::FileOpenError();
			cout << GREEN;
			while (getline(outFile, line, '\n'))
				cout << line << endl;
			cout << NORM;
			outFile.close();
		}
		catch (exception &e)
		{
			cout << URED << "Error! ❌  " << NORM;
			cout << e.what() << endl;
		}
	}
	catch (exception &e)
	{
		std::cerr << e.what() << endl;
		return;
	}

}

void	TestRobotomyRequestForm() // s72 e45
{


	cout << endl << endl;
	cout << "========================================================" << endl;
	cout << "==                  "
		 << BACK_GRAY << "Robotomy" << NORM
		 << "                         =="
		 << endl;
	cout << "========================================================" << endl;

	try
	{
		Bureaucrat jojo("jojo", 44);
		RobotomyRequestForm robo("robo");
		robo.beSigned(jojo);

		cout << jojo << endl;
		cout << robo << endl;

		robo.execute(jojo);
	}
	catch (exception &e)
	{
		cout << URED << "Error! ❌  " << NORM;
		std::cerr << e.what() << endl;
		return;
	}
}

void 	TestPresidentialPardonForm() // s25 e5
{
	cout << endl << endl;
	cout << "========================================================" << endl;
	cout << "==                  "
		 << PURPLE << "Presedential" << NORM
		 << "                      =="
		 << endl;
	cout << "========================================================" << endl;

	try
	{
		Bureaucrat james("James", 6);
		PresidentialPardonForm pardon("somePresedential");
		pardon.beSigned(james);

		cout << james << endl;
		cout << pardon << endl;

		pardon.execute(james);
	}
	catch (exception &e)
	{
		cout << URED << "Error! ❌  " << NORM;
		std::cerr << e.what() << endl;
		return;
	}
}

int main()
{
	TestShrubberyCreationForm();
	TestRobotomyRequestForm();
	TestPresidentialPardonForm();
}