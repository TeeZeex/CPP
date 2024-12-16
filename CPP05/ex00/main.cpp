#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("Timo", 1);
		std::cout << a << std::endl;
		a.gradeDecreament();
		std::cout << a << std::endl;
		a.gradeIncreament();
		std::cout << a << std::endl;
		a.gradeIncreament();
		std::cout << a << std::endl;
		std::cout << "ALL OK" << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << "________________________" << std::endl;
	try
	{
		Bureaucrat a("Bibu", -1);
		std::cout << a << std::endl;
		std::cout << "ALL OK" << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << "________________________" << std::endl;
	try
	{
		Bureaucrat a("Ayan", 150);
		std::cout << a << std::endl;
		a.gradeDecreament();
		std::cout << a << std::endl;
		std::cout << "ALL OK" << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	return (0);
}
