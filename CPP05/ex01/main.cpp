#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat a("Denis", 1);
		Bureaucrat b(a);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		a.gradeDecreament();
		std::cout << a << std::endl;
		a.gradeIncreament();
		std::cout << a << std::endl;
		a.gradeIncreament();
		std::cout << a << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Form b("f1", 1, 15); // FAIL
		Form c(b);
		std::cout << b << std::endl;
		std::cout << c << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Form b("f1", 100, 151); // FAIL
		std::cout << b << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Form b("f1", 100, 15); // FAIL
		Bureaucrat b2("Zhun", 99);
		b.beSigned(b2);
		std::cout << b << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Form b("f1", 100, 15); //
		Bureaucrat b2("Zhun", 100);
		b.beSigned(b2);
		// b.beSigned(b2); // второй раз уже не подписать!
		std::cout << b << std::endl;
	}

	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	catch (const char * ex)
	{
		std::cout << ex << std::endl;
	}

	try
	{
	std::cout << std::endl;
	Form b("f1", 100, 15); // нельзя подписать по рангу
	Bureaucrat b2("Zhun", 11);
	b.beSigned(b2);
	std::cout << std::endl << b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// std::cout << std::endl;
	// Form c("f1", 100, 15); // подписываем
	// Bureaucrat c2("Zhun", 100);
	// c.beSigned(c2);
	// c.beSigned(c2);
	// std::cout << std::endl << c << std::endl;

	return (0);
}
