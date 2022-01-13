#include "Intern.hpp"

/*
"========================================================";
"==                  Constructors                      ==";
"========================================================";
*/

Intern::Intern() { }

Intern::InternException::InternException(const string &errorMsg)
{
	string	err;

	err = URED;
	err += errorMsg;
	err += NORM;
	this->error = err;
}

/*
"========================================================";
"==                     Destructors                    ==";
"========================================================";
*/

Intern::~Intern() { }

Intern::InternException::~InternException() throw()
{
//	cout << BOLD << RED << "❌ Destructor" << NORM << "\t"
//		<< YELLOW << this->error << NORM
//		<< " called"
//		<< endl;
}

/*
"========================================================";
"==          CopyConstructors and operators            ==";
"========================================================";
*/

Intern::Intern(const Intern &other) { (void)other; }

Intern	&Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

string &Intern::InternException::getErrorMsg() { return this->Intern::InternException::error; }

/*
"========================================================";
"==                     Methods                        ==";
"========================================================";
*/

Form	*Intern::makeForm(const string &name, const string &target)
{
	const string forms[3] = { "tree", "robot", "president" };
	Form	*form;

	form = nullptr;
	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
		{
			switch (i)
			{
				case 0: form = new ShrubberyCreationForm(target); break;
				case 1:	form = new RobotomyRequestForm(target); break;
				case 2: form = new PresidentialPardonForm(target); break;
				default: break;
			}
			return (form);
		}
	}
	throw (InternException("UnknownFormException"));
}

const char *Intern::InternException::what() const throw()
{
	if (!this->error.empty())
		return ((this->error).c_str());
	else
		return "Unknown error";
}