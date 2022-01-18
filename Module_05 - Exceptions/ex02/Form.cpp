#include "Form.hpp"

/*
"========================================================";
"==                  Constructors                      ==";
"========================================================";
*/
Form::Form(const string &nameValue, const int gradeSign, const int gradeExec) :
	name(nameValue), gradeToSign(gradeSign), gradeToExec(gradeExec),
	signFlag(false)
{
//	cout << endl << BOLD << PURPLE << "⚒ Constructor\t"<< NORM
//		 << YELLOW << nameValue << NORM <<  " called"
//		 << endl;
	if (gradeToSign < 1 || gradeToSign > 150
	        || gradeToExec < 1 || gradeToExec > 150)
	{
		cout << RED << "Error during creating object "
			 << BLUE << *this << GREEN
			 << " ⛔️ " << endl;
		if (gradeToSign < 1 || gradeToExec < 1)
			throw GradeTooHighException();
		else
			throw GradeTooLowException();
	}
//	cout << UGREEN << "Object "
//		 << BLUE << this->getName() << GREEN
//		 << " has been created! ✅ " << NORM << endl;
}

Form::GradeTooHighException::GradeTooHighException(string &error)
{
//	cout << endl << BOLD << PURPLE << "⚒ Constructor\t" << NORM
//		 << " called"
//		 << endl;
	this->error = error;
}

Form::GradeTooLowException::GradeTooLowException(string &error)
{
//	cout << endl << BOLD << PURPLE << "⚒ Constructor\t"<< NORM
//		 << "called"
//		 << endl;
	this->error = error;
}

Form::ExecuteNotSigned::ExecuteNotSigned(string &error)
{
//	cout << endl << BOLD << PURPLE << "⚒ Constructor\t" << NORM
//		 << " called"
//		 << endl;
	this->error = error;
}

Form::FileOpenError::FileOpenError(string &error)
{
//	cout << endl << BOLD << PURPLE << "⚒ Constructor\t" << NORM
//		 << " called"
//		 << endl;
	this->error = error;
}

Form::GradeTooHighException::GradeTooHighException()
{
	string	err;

//	cout << endl << BOLD << PURPLE << "⚒ DEF.Constructor\t"<< NORM
//		 << URED << "GradeTooHighException" << NORM
//		 << " called"
//		 << endl;

	err = URED;
	err += "GradeTooHighException";
	err += NORM;
	this->error = err;
}

Form::GradeTooLowException::GradeTooLowException()
{
	string	err;

//	cout << endl << BOLD << PURPLE << "⚒ DEF.Constructor\t"<< NORM
//		 << URED << "GradeTooLowException" << NORM
//		 << " called"
//		 << endl;

	err = URED;
	err += "GradeTooLowException";
	err += NORM;
	this->error = err;
}

Form::ExecuteNotSigned::ExecuteNotSigned()
{
	string	err;

//	cout << endl << BOLD << PURPLE << "⚒ DEF.Constructor\t"<< NORM
//		 << URED << "GradeTooLowException" << NORM
//		 << " called"
//		 << endl;

	err = URED;
	err += "ExecuteNotSigned";
	err += NORM;
	this->error = err;
}

Form::FileOpenError::FileOpenError()
{
	string	err;

//	cout << endl << BOLD << PURPLE << "⚒ DEF.Constructor\t"<< NORM
//		 << URED << "GradeTooLowException" << NORM
//		 << " called"
//		 << endl;

	err = URED;
	err += "FileOpeningFail";
	err += NORM;
	this->error = err;
}

/*
"========================================================";
"==                     Destructors                    ==";
"========================================================";
*/

Form::~Form()
{
//	cout << BOLD << RED << "❌ Destructor" << NORM << "\t"
//		 << YELLOW << this->getName() << NORM
//		 << " called"
//		 << endl;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
//	cout << BOLD << RED << "❌ Destructor" << NORM << "\t"
//		 << YELLOW << error << NORM
//		 << " called"
//		 << endl;
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
//	cout << BOLD << RED << "❌ Destructor" << NORM << "\t"
//		 << YELLOW << error << NORM
//		 << " called"
//		 << endl;
}

Form::ExecuteNotSigned::~ExecuteNotSigned() throw()
{
//	cout << BOLD << RED << "❌ Destructor" << NORM << "\t"
//		 << YELLOW << error << NORM
//		 << " called"
//		 << endl;
}

Form::FileOpenError::~FileOpenError() throw()
{
//	cout << BOLD << RED << "❌ Destructor" << NORM << "\t"
//		 << YELLOW << error << NORM
//		 << " called"
//		 << endl;
}

/*
"========================================================";
"==          CopyConstructors and operators            ==";
"========================================================";
*/

Form::Form(const Form &copyObject) :
	gradeToSign(copyObject.gradeToSign),
	gradeToExec(copyObject.gradeToExec)
{
//	cout << BOLD << PURPLE << "⚒ Copy constructor" << NORM << "\t"
//		 << " called"
//		 << endl;
	*this = copyObject;
}

Form &Form::operator=(const Form &object)
{
	string tmp;
	if (this != &object)
	{
		tmp = object.getName() + "_copy";
		const_cast<string&>(this->name) = (string)tmp;
		this->signFlag = object.signFlag;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Form &object)
{
	out << PURPLE << "[Form 🧾 ] " << BLUE
		<< object.getName() << NORM << "," << GREEN
		<< " grade to sign it: " << NORM << object.getSignGrade() << GREEN
		<< " grade to execute it: " << NORM << object.getExecGrade();
	return (out);
}

/*
"========================================================";
"==                     Getters                        ==";
"========================================================";
*/

const string	&Form::getName() const { return (this->name); }
int				Form::getSignGrade() const { return (this->gradeToSign); }
int				Form::getExecGrade() const { return (this->gradeToExec); }
bool			Form::isSigned() const { return (this->signFlag); }

/*
"========================================================";
"==                     Methods                        ==";
"========================================================";
*/

void Form::beSigned(const Bureaucrat &object)
{
	if (object.getGrade() > this->gradeToSign)
	{
		cout << BRIGHT_BLUE << object.getName() << RED << " cannot sign "
			 << PURPLE << this->getName()
			 << RED << " because " << URED
			 << "his grade is too low!" << NORM << " ⛔️ " << endl;
		throw GradeTooLowException();
	}
	this->signFlag = true;
	cout << BRIGHT_BLUE << object.getName()
		<< GREEN << " signs " << PURPLE << this->getName() << NORM << " ✅ "<< endl;
}

void	Form::isValidExecute(const Bureaucrat &bureaucrat) const
{
	if (!this->isSigned())
		throw Form::ExecuteNotSigned();
	if (this->getExecGrade() < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what(void) const throw()
{
	if (!this->error.empty())
		return ((this->error).c_str());
	else
		return "Unknown error";
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	if (!this->error.empty())
		return ((this->error).c_str());
	else
		return "Unknown error";
}

const char *Form::ExecuteNotSigned::what(void) const throw()
{
	if (!this->error.empty())
		return ((this->error).c_str());
	else
		return "Unknown error";
}

const char *Form::FileOpenError::what(void) const throw()
{
	if (!this->error.empty())
		return ((this->error).c_str());
	else
		return "Unknown error";
}