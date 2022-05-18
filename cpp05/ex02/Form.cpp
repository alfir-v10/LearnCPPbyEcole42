#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("Default"), _signGrade(1), _executeGrade(1), _isSigned(false)
{

}

Form::~Form() {

}

Form::Form(std::string const &name, int signGrade, int executeGrade) : _name(name), _signGrade(signGrade), _executeGrade(executeGrade), _isSigned(false)
{
    if (executeGrade < 1 || signGrade < 1)
    {
        throw GradeTooHighException();
    }
    else if (signGrade > 150 || executeGrade > 150)
    {
        throw GradeTooLowException();
    }
}

Form::Form(Form const &src) : _name(src._name), _signGrade(src._signGrade), _executeGrade(src._executeGrade)
{
    *this = src;
}

int	Form::getExecuteGrade(void) const
{
    return _executeGrade;
}

int	Form::getSignGrade(void) const
{
    return _signGrade;
}

const std::string	Form::getName(void) const
{
    return _name;
}

bool		Form::isSigned(void) const
{
    return _isSigned;
}

void Form::beSigned(Bureaucrat const &employee)
{
    if (employee.getGrade() > _signGrade)
    {
        throw GradeTooLowException();
    }
    else {
        _isSigned = true;
    }
}

void Form::allowedToExecute(Bureaucrat const &executor) const
{
	if (!_isSigned)
    {
		throw FormIsNotSigned();
	}
	else if (executor.getGrade() > _executeGrade)
    {
		throw GradeTooLowException();
	}
}

Form &Form::operator=(Form const &obj)
{
    if (this != &obj)
    {
        _isSigned = obj.isSigned();
    }
    return *this;
}

std::ostream &operator<<(std::ostream &o, Form const &i)
{
    o << "Form name: " << i.getName() << ". Form sign grade: " << i.getSignGrade() << ". Form execution grade: " << i.getExecuteGrade() << ". Form is signed: ";
    if (i.isSigned())
    {
        o << "Yes.";
    } else {
        o << "No.";
    }
    return o;
}

