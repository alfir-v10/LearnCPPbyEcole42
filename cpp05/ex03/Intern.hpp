#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern
{
public:
	Intern(void);
    ~Intern();
    Intern(Intern const &src);
	Intern &operator=(Intern const &obj);
	Form *makeForm(std::string const &formType, std::string const &target);
	typedef Form *(Intern:: *FormPtr)(std::string const &);
private:
	Form *_newPresidentalPardonForm(std::string const &target);
	Form *_newRobotomyRequestForm(std::string const &target);
	Form *_newShrubberyCreationForm(std::string const &target);
	std::string	_formNameArray[3];
	FormPtr _formFnArray[3];
};

#endif
