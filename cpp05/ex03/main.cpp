#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int		main() {

	Intern someRandomIntern;
	Form *rrf;
	Form *rrfFail;
	Bureaucrat stitch("Stitch", 3);

	rrf = someRandomIntern.makeForm("robotomy request", "Nani");
	std::cout << *rrf << std::endl;
	stitch.signForm(*rrf);
	stitch.executeForm(*rrf);
	rrfFail = someRandomIntern.makeForm("cat form", "Barsik");
    (void)rrfFail;

	return 0;
}
