/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 17:22:04 by macservis         #+#    #+#             */
/*   Updated: 2021/08/30 21:14:57 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
public:
	Bureaucrat(void);
	Bureaucrat(const std::string & name, int grade);
	Bureaucrat(Bureaucrat const & src);
	Bureaucrat&	operator=(Bureaucrat const & obj);
	~Bureaucrat();

	class GradeTooHighException: public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("Grade is too high!");
			}
	};
	class GradeTooLowException: public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("Grade is too low!");
			}
	};

	const std::string	getName(void) const;
	int					getGrade(void) const;
	void				incrementGrade(void);
	void				decrementGrade(void);
	void				signForm(Form & form) const;
	void				executeForm(Form const & form) const;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i);

#endif
