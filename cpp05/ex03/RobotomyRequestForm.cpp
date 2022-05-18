#include "RobotomyRequestForm.hpp"

bool	RobotomyRequestForm::_robotomyWorks = true;

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src.getName(), 72, 45)
{
    *this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
    if (this != &obj)
    {
        _target = obj._target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    allowedToExecute(executor);
    std::cout << "*SOME DRILLING NOISES* ";
    if (RobotomyRequestForm::_robotomyWorks)
    {
        std::cout << _target << " has been robotomized successfully.";
        RobotomyRequestForm::_robotomyWorks = false;
    }
    else
    {
        std::cout << _target << " robotomization failure. Press F.";
        RobotomyRequestForm::_robotomyWorks = true;
    }
    std::cout << std::endl;
}
