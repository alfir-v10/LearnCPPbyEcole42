#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string		_target;
	static bool		_robotomyWorks;
public:
	RobotomyRequestForm(void);
    ~RobotomyRequestForm();
    RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &obj);
	virtual void execute(Bureaucrat const &executor) const;
};

#endif
