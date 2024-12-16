#include "Bureaucrat.hpp"


const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

Bureaucrat::Bureaucrat(): _name("Default"), _grade(150)
{
	std::cout << "Default constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade = grade;
    std::cout << "Parametric constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &object)
    : _name(object._name), _grade(object._grade)
{
    std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this == &rhs)
        return *this;
    // _name не меняется, так как оно const
    this->_grade = rhs._grade;
    return *this;
}
#include "Bureaucrat.hpp"

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs)
{
    out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return out;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
}
void Bureaucrat::gradeIncreament()
{
	std::cout << "Grade increment called" << std::endl;
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}
void Bureaucrat::gradeDecreament()
{
	std::cout << "Grade decrement called" << std::endl;
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

std::string Bureaucrat::getName() const
{
	return (_name);
}


