#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Jumba"), _grade(1)
{

}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name)
{
	if (grade < 1)
    {
		throw GradeTooHighException();
	}
	else if (grade > 150)
    {
		throw GradeTooLowException();
	} else {
		_grade = grade;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
}

void Bureaucrat::incrementGrade(void)
{
	if (_grade == 1)
    {
		throw GradeTooHighException();
	} else {
		_grade--;
	}
}

void Bureaucrat::decrementGrade(void)
{
	if (_grade == 150)
    {
		throw GradeTooLowException();
	} else {
		_grade++;
	}
}

int	Bureaucrat::getGrade(void) const
{
	return _grade;
}

const std::string Bureaucrat::getName(void) const
{
	return _name;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
	if (this != &obj)
    {
		_grade = obj._grade;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << ".";
	return o;
}

