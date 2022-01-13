#include "RobotomyRequestForm.hpp"

/*
"========================================================";
"==                  Constructors                      ==";
"========================================================";
*/

RobotomyRequestForm::RobotomyRequestForm(string targetValue) : Form("Robotomy", 72, 45)
{
	this->target = targetValue;
}

/*
"========================================================";
"==                     Destructors                    ==";
"========================================================";
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
//	cout << BOLD << RED << "❌ Destructor" << NORM << "\t"
//		 << YELLOW << this->getTarget() << NORM
//		 << " called"
//		 << endl;
}

/*
"========================================================";
"==          CopyConstructors and operators            ==";
"========================================================";
*/

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copyObject) : Form(copyObject)
{
	*this = copyObject;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &object)
{
	this->target = object.getTarget();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const RobotomyRequestForm &object)
{
	out << BACK_GRAY << "[RobotomyRequestForm 🤖 ]" << NORM << " "
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

const string &RobotomyRequestForm::getTarget() const { return target; }

/*
"========================================================";
"==                     Methods                        ==";
"========================================================";
*/

void RobotomyRequestForm::execute(const Bureaucrat &object) const
{
	this->Form::isValidExecute(object);

	cout << " ✅ " << BRIGHT_BLUE "[" << object.getName() << "]" << GREEN << " executes "
		<< PURPLE << this->getTarget() << endl;

	std::srand(time(0));
	if (std::rand() % 2)
	{
		cout << YELLOW << " 🔊 SOME DRILL NOISES... 🎶...🎶...🎶 " << NORM << endl;
		cout << BRIGHT_BLUE << this->getTarget() << GREEN << " has been robotomized successfully!!! ✅ " << endl;
	}
	else
	{
		std::cerr << RED << " 🔇 It's fail..." << NORM << endl;
		std::cerr << URED << "Big, big fail when trying to robotize... ⛔️ " << NORM << endl;
	}
}