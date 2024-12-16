#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const	_name;
	bool				_signed;
	int const			_gradeToSign;
	int const			_gradeToExecute;
	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};
public:
	Form();
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(Form const &object);
	Form & operator=(Form const &rhs);
	~Form();

	std::string		getName() const;
	bool			getSigned() const;
	int				getGradeToSign() const;
	int				getGradeToExecute() const;
	void			beSigned(Bureaucrat const &bureaucrat);
};
std::ostream &operator<<(std::ostream &out, Form const &rhs);


#endif
