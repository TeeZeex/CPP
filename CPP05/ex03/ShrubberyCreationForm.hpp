
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <exception>
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string		_target;
		void			ascii_tree() const;

		class ExecptionClass : public std::exception
		{
			public:
			const char *what() const throw();
		} ;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string _target);
		ShrubberyCreationForm(ShrubberyCreationForm const &object);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
		~ShrubberyCreationForm();

		void execute(Bureaucrat const &execute) const;
		std::string getTarget() const;
};

#endif
