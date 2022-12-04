/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:42:49 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/25 01:14:03 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class	Form;

class	Bureaucrat	{
	private:
		std::string const	_name; 
		unsigned int		_grade;// from 1 to 150;
	public:
		class	EmptyNameException: public std::exception	{
			public:
				virtual const char *what() const throw();
		};
		class	GradeTooHighException: public std::exception	{
			public:
				virtual const char *what() const throw();
		};
		class	GradeTooLowException: public std::exception	{
			public:
				virtual const char *what() const throw();
		};
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat	&operator=(Bureaucrat const & src);
		std::string const &	getName(void) const;
		unsigned int	getGrade(void) const;
		void			increment(void);
		void			decrement(void);
		void			signForm(Form & form);
		void			executeForm(Form const & form);
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const & brcrt);

#endif
