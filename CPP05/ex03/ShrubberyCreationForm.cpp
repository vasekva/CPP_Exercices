#include "ShrubberyCreationForm.hpp"

/*
"========================================================";
"==                  Constructors                      ==";
"========================================================";
*/

ShrubberyCreationForm::ShrubberyCreationForm(string targetValue) : Form("Shrubbery", 145, 137)
{
	this->target = targetValue;
}

/*
"========================================================";
"==                     Destructors                    ==";
"========================================================";
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
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

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copyObject) : Form(copyObject)
{
	*this = copyObject;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &object)
{
	this->target = object.getTarget();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const ShrubberyCreationForm &object)
{
	out << GREEN << "[ShrubberyCreationForm 🌳 ] "
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

const string &ShrubberyCreationForm::getTarget() const { return target; }

/*
"========================================================";
"==                     Methods                        ==";
"========================================================";
*/

void ShrubberyCreationForm::execute(const Bureaucrat &object) const
{
	std::ofstream	file;

	this->Form::isValidExecute(object);
	file.open((target + "_shrubbery").c_str());
	if (!file.good())
		throw FileOpenError();
	file << "                                         " << endl;
	file << "                                         " << endl;
	file << "                                         " << endl;
	file << "               # #### ####               " << endl;
	file << "  ===        ### \\/#|### |/####          " << endl;
	file << " == ==     ##\\/#/ \\||/##/_/##/_#         " << endl;
	file << "  ===     ###  \\/###|/ \\/ # ###          " << endl;
	file << "        ##_\\_#\\_\\## | #/###_/_####       " << endl;
	file << "       ## #### # \\ #| /  #### ##/##      " << endl;
	file << "        __#_--###`  |{,###---###-~       " << endl;
	file << "                    }{                   " << endl;
	file << "                   }}{                   " << endl;
	file << "                   }}{                   " << endl;
	file << "     ===========    }{      =======      " << endl;
	file << "===		===,==-=-~{=.-^-=_     =======" << endl;
	file << "                   `}                    " << endl;
	file << "                    {                     " << endl;
	file.close();
}