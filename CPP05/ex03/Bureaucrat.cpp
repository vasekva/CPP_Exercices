#include "Bureaucrat.hpp"

/*
"========================================================";
"==                  Constructors                      ==";
"========================================================";
*/
Bureaucrat::Bureaucrat(const string &nameValue, int grade) : name(nameValue)
{
//	cout << endl << BOLD << GREEN << "⚒ Constructor\t"<< NORM
//		<< YELLOW << nameValue << NORM <<  " called"
//		<< endl;
	this->grade = grade;
	if (grade < 1 || grade > 150)
	{
		cout << RED << "Error during creating object "
			 << BLUE << *this << GREEN
			 << " ⛔️ " << endl;
		if (grade < 1)
			throw GradeTooHighException();
		else
			throw GradeTooLowException();
	}
//	cout << UGREEN << "Object "
//		<< BLUE << this->getName() << GREEN
//		<< " has been created! ✅ " << NORM << endl;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(string &error)
{
//	cout << endl << BOLD << GREEN << "⚒ Constructor\t" << NORM
//		<< " called"
//		<< endl;
	this->error = error;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(string &error)
{
//	cout << endl << BOLD << GREEN << "⚒ Constructor\t"<< NORM
//		 << "called"
//		 << endl;
	this->error = error;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	string	err;

//	cout << endl << BOLD << GREEN << "⚒ DEF.Constructor\t"<< NORM
//		<< URED << "GradeTooHighException" << NORM
//		<< " called"
//		<< endl;

	err = URED;
	err += "GradeTooHighException";
	err += NORM;
	this->error = err;
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	string	err;

//	cout << endl << BOLD << GREEN << "⚒ DEF.Constructor\t"<< NORM
//		<< URED << "GradeTooLowException" << NORM
//		<< " called"
//		<< endl;

	err = URED;
	err += "GradeTooLowException";
	err += NORM;
	this->error = err;
}

/*
"========================================================";
"==                     Destructors                    ==";
"========================================================";
*/

Bureaucrat::~Bureaucrat()
{
//	cout << BOLD << RED << "❌ Destructor" << NORM << "\t"
//		<< YELLOW << this->getName() << NORM
//		<< " called"
//		<< endl;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
//	cout << BOLD << RED << "❌ Destructor" << NORM << "\t"
//		<< YELLOW << error << NORM
//		<< " called"
//		<< endl;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
//	cout << BOLD << RED << "❌ Destructor" << NORM << "\t"
//		<< YELLOW << error << NORM
//		<< " called"
//		<< endl;
}

/*
"========================================================";
"==          CopyConstructors and operators            ==";
"========================================================";
*/

Bureaucrat::Bureaucrat(const Bureaucrat &copyObject)
{
//	cout << BOLD << YELLOW << "⚒ Copy constructor" << NORM << "\t"
//		 << " called"
//		 << endl;
	*this = copyObject;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &object)
{
	string tmp;
	if (this != &object)
	{
		tmp = object.getName() + "_copy";
		const_cast<string&>(this->name) = (string)tmp;
		this->grade = object.getGrade();
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &object)
{
	out << YELLOW << "[Bureaucrat 👨🏻‍💼 ] " << BLUE
		<< object.getName() << NORM << "," << GREEN
		<< " grade " << NORM << object.getGrade();
	return (out);
}

/*
"========================================================";
"==                     Getters                        ==";
"========================================================";
*/

const string	&Bureaucrat::getName() const { return (this->name); }
short	Bureaucrat::getGrade() const { return (this->grade); }

/*
"========================================================";
"==                     Methods                        ==";
"========================================================";
*/

void Bureaucrat::decrementGrade()
{
	if (this->grade + 1 > 150)
		throw GradeTooLowException();
	++this->grade;
}

void Bureaucrat::incrementGrade()
{
	if (this->grade - 1 < 1)
		throw GradeTooHighException();
	--this->grade;
}

void Bureaucrat::signForm(Form &object) const
{
	try
	{
		object.beSigned(*this);
	}
	catch (std::exception &e)
	{
		e.what();
	}
}

void	Bureaucrat::executeForm(const Form &object) const
{
	try
	{
		object.execute(*this);
		cout << BRIGHT_BLUE << name << NORM
			<< " executes " << BRIGHT_BLUE
			<< object.getName()
			<< NORM << endl;
	}
	catch(exception &e)
	{
		cout << BRIGHT_BLUE << name
			<< RED << " cannot executes " << BRIGHT_BLUE
			<< object.getName() << NORM
			<<  " because " << e.what()
			<< NORM << endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	if (!this->error.empty())
		return ((this->error).c_str());
	else
		return "Unknown error";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	if (!this->error.empty())
		return ((this->error).c_str());
	else
		return "Unknown error";
}