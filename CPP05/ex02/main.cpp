
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
	// {
	// 	std::cout << "-------------------------------------------------------------1" << std::endl;
	// 	Bureaucrat B("Saad", 10 );
	// 	std::cout << "-------------------------------------------------------------2" << std::endl;
	// 	ShrubberyCreationForm A("target");
	// 	std::cout << "-------------------------------------------------------------3" << std::endl;
	// 	B.signAForm(A);
	// 	std::cout << "-------------------------------------------------------------4" << std::endl;
	// 	B.executeForm(A);
	// }
	// {
	// 	std::cout << "--------------------------------------------------------------5" << std::endl;
	// 	Bureaucrat B("Saad", 18);
	// 	std::cout << "--------------------------------------------------------------6" << std::endl;
	// 	RobotomyRequestForm A("target");
	// 	std::cout << "--------------------------------------------------------------7" << std::endl;
	// 	B.signAForm(A);
	// 	std::cout << "--------------------------------------------------------------8" << std::endl;
	// 	B.executeForm(A);

	// }
	{
		std::cout << "---------------------------------------------------------------9" << std::endl;
		Bureaucrat B("Saad",1);
		std::cout << "---------------------------------------------------------------10" << std::endl;
		PresidentialPardonForm A("target");
		std::cout << "---------------------------------------------------------------11" << std::endl;
		B.signAForm(A);
		std::cout << "---------------------------------------------------------------12" << std::endl;
		B.executeForm(A);
	}
}
