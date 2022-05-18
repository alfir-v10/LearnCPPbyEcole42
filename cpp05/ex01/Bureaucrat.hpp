#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
private:
	const std::string _name;
	int _grade;
public:
	Bureaucrat(void);
    ~Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat &operator=(Bureaucrat const &obj);
    const std::string getName(void) const;
    int getGrade(void) const;
    void incrementGrade(void);
    void decrementGrade(void);
    void signForm(Form &form);

	class GradeTooHighException: public std::exception
    {
		public:
			virtual const char * what() const throw()
            {
				return ("Grade is too high!");
			}
	};

	class GradeTooLowException: public std::exception
    {
		public:
			virtual const char * what() const throw()
            {
				return ("Grade is too low!");
			}
	};
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i);

#endif
