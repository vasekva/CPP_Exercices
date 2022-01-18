#ifndef CPP_FORM_HPP
#define CPP_FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(const string &name, int gradeSign, int gradeExec);
		~Form();
		Form(const Form &copyObject);
		Form &operator=(const Form &object);

		const string	&getName() const;
		int				getSignGrade() const;
		int				getExecGrade() const;
		bool			isSigned() const;
		void			beSigned(const Bureaucrat &object);
		virtual void	execute(const Bureaucrat &bureaucrat) const = 0;
		virtual void	isValidExecute(const Bureaucrat &bureaucrat) const;

		class GradeTooHighException : public exception
		{
			public:
				GradeTooHighException();
				GradeTooHighException(string &error);
				~GradeTooHighException() throw();
				const char *what() const throw();
			private:
				string	error;
		};

		class GradeTooLowException : public exception
		{
			public:
				GradeTooLowException();
				GradeTooLowException(string &error);
				~GradeTooLowException()  throw();
				const char *what() const throw();
			private:
				string	error;
		};

		class ExecuteNotSigned : public exception
		{
			public:
				ExecuteNotSigned();
				ExecuteNotSigned(string &error);
				~ExecuteNotSigned() throw();
				const char *what() const throw();
			private:
				string error;
		};

		class FileOpenError : public exception
		{
			public:
				FileOpenError();
				FileOpenError(string &error);
				~FileOpenError() throw();
				const char *what() const throw();
			private:
				string error;
		};
	private:
		Form();
		const string	name;
		const int		gradeToSign;
		const int		gradeToExec;
		bool			signFlag;
};

std::ostream &operator<<(std::ostream &out, const Form &object);


#endif //CPP_FORM_HPP
