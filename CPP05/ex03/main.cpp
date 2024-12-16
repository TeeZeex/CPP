
#include "Intern.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;
		Bureaucrat b("John", 1);
		AForm* rrf;
		std::cout << "_____________________" << std::endl;
		rrf = someRandomIntern.makeForm("shrubbery creation", "BOOM");
		b.signAForm(*rrf);
		std::cout << rrf->getSigned() << std::endl;
		std::cout << "_____________________" << std::endl;
		b.executeForm(*rrf);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
