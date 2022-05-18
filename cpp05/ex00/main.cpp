#include "Bureaucrat.hpp"

int	main()
{
	try
    {
		Bureaucrat morty("Morty", 151);
	}
	catch (std::exception &e)
    {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
    {
		Bureaucrat rick("Rick", 0);
	}
	catch (std::exception &e)
    {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	Bureaucrat		lilo("Lilo", 1);

	lilo.decrementGrade();
	std::cout << lilo << std::endl;
	lilo.incrementGrade();
	std::cout << lilo << std::endl;
	try
    {
		lilo.incrementGrade();
	}
	catch (std::exception &e)
    {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	Bureaucrat		stitch("Stitch", 150);

	stitch.incrementGrade();
	std::cout << stitch << std::endl;
	stitch.decrementGrade();
	std::cout << stitch << std::endl;
	try
    {
		stitch.decrementGrade();
	}
	catch (std::exception &e)
    {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}
