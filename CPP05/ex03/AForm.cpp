#include "AForm.hpp"

AForm::AForm(): _name("no name"), _signed(false), _gradeToSign(1), _gradeToExecute(5)
{
	std::cout << "Form Default Constructor Called" << std::endl;
}

AForm::AForm(std::string name, int _gradeToSign, int _gradeToExecute):
	_name(name), _signed(false), _gradeToSign(_gradeToSign),
	_gradeToExecute(_gradeToExecute)
{
	std::cout << "Form Name Constructor called" << std::endl;
	try
	{
		if (this->_gradeToExecute > 150 || this->_gradeToSign > 150)
			throw AForm::GradeTooLowException();
		else if (this->_gradeToExecute < 1 || this->_gradeToSign < 1)
			throw AForm::GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

AForm::AForm(AForm const &object):
	_name(object._name), _signed(object._signed),
	_gradeToSign(object._gradeToSign), _gradeToExecute(object._gradeToExecute)
{
	std::cout << "Form Copy Constructor Called" << std::endl;
}

AForm & AForm::operator=(AForm const &rhs)
{
	std::cout << "Form Copy Assignment Operator = called" << std::endl;
	if (this != &rhs)
	{
		const_cast<std::string&>(this->_name) = rhs.getName();
		const_cast<int&>(this->_gradeToSign) = rhs.getGradeToSign();
		const_cast<int&>(this->_gradeToExecute) = rhs.getGradeToExecute();
		this->_signed= rhs.getSigned();
	}
	return(*this);
}

std::ostream &operator<<(std::ostream &out, AForm const &rhs)
{
	std::cout << "Form Copy Assignment Operator << called" << std::endl;
	out << "Form name: " << rhs.getName() << std::endl;
	out << "Grade to sign: " << rhs.getGradeToSign() << std::endl;
	out << "Grade to execute: " << rhs.getGradeToExecute() << std::endl;
	out << "Signed: " << rhs.getSigned() << std::endl;
	return (out);
}

AForm::~AForm()
{
	std::cout << "Form default Destructor called" << std::endl;
}

void	AForm::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_gradeToSign)
	{
		if (this->_signed == true)
			throw "The Form already signed!";
		this->_signed = true;
		std::cout << "* The Form " << this->getName() << " is signed *" << std::endl;
	}
	else
	{
		throw AForm::GradeTooLowException();
	}
}

bool	AForm::getSigned() const
{
	return (this->_signed);
}

int	AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int	AForm::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

std::string AForm::getName() const
{
	return (this->_name);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return("Grade Too High");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return("Grade Too Low");
}
