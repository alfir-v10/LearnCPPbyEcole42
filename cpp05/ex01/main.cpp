#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main()
{
	Bureaucrat lilo("Lilo", 1);
	Bureaucrat morty("Morty", 150);
	Form form("form", 100, 120);
	try
    {
		Form form1("form1", 200, 120);
	}
    catch (std::exception &e)
    {
		std::cout << "Form was not created! Reason: " << e.what() << std::endl;
	}
	std::cout << form << std::endl;
	morty.signForm(form);
	lilo.signForm(form);
	std::cout << form << std::endl;
	return 0;
}
