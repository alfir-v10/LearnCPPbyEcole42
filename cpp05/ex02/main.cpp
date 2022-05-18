#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main()
{
	Bureaucrat lilo("Lilo", 1);
	Bureaucrat morty("Morty", 150);
	PresidentialPardonForm stitch("Stitch");
	RobotomyRequestForm nani("Nani");
	ShrubberyCreationForm limonTree("Limon Tree");

	std::cout << stitch << std::endl;
	morty.signForm(stitch);
	lilo.signForm(stitch);
	morty.executeForm(stitch);
	lilo.executeForm(stitch);

	std::cout << nani << std::endl;
	morty.signForm(nani);
	lilo.signForm(nani);
	morty.executeForm(nani);
	lilo.executeForm(nani);

	std::cout << limonTree << std::endl;
	morty.signForm(limonTree);
	lilo.signForm(limonTree);
	morty.executeForm(limonTree);
	lilo.executeForm(limonTree);

	return 0;
}
