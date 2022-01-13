#include "PresidentialPardonForm.hpp"

/*
"========================================================";
"==                  Constructors                      ==";
"========================================================";
*/

PresidentialPardonForm::PresidentialPardonForm(string targetValue) : Form("Presidential", 25, 5)
{
	this->target = targetValue;
}

/*
"========================================================";
"==                     Destructors                    ==";
"========================================================";
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
//	cout << BOLD << RED << "❌ Destructor" << NORM << "\t"
//		<< YELLOW << this->getTarget() << NORM
//		<< " called"
//		<< endl;
}

/*
"========================================================";
"==          CopyConstructors and operators            ==";
"========================================================";
*/

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copyObject) : Form(copyObject)
{
	*this = copyObject;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &object)
{
	this->target = object.getTarget();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const PresidentialPardonForm &object)
{
	out << BRIGHT_BLUE << "[PresidentialPardonForm 📝 ] "
		<< BLUE << object.getName() << NORM << "," << GREEN
		<< " target: " << NORM << object.getTarget() << GREEN
		<< " SignGrade: " << NORM << object.getSignGrade() << GREEN
		<< " ExecGrade: " << NORM << object.getExecGrade() << GREEN
		<< " isSigned?: " << NORM << object.isSigned() << GREEN;
	return (out);
}

/*
"========================================================";
"==                     Getters                        ==";
"========================================================";
*/

const string &PresidentialPardonForm::getTarget() const { return target; }

/*
"========================================================";
"==                     Methods                        ==";
"========================================================";
*/

void PresidentialPardonForm::execute(const Bureaucrat &object) const
{
	this->Form::isValidExecute(object);

	cout << " ✅ " << BRIGHT_BLUE "[" << object.getName() << "]" << GREEN << " executes "
									 << PURPLE << this->getTarget() << endl;

	cout << YELLOW << target
		<< GREEN << " was forgiven by "
		<< BRIGHT_BLUE << "Zafor Beeblebrox" << NORM << endl;
}
