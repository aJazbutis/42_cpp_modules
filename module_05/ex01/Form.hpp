/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:40:17 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/25 00:31:38 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form	{
	private:
		std::string const	_name; 
		bool				_signed;
		unsigned int const	_gradeToSign;// from 1 to 150;
		unsigned int const	_gradeToExec;
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
		class	SignedFormException: public std::exception	{
			public:
				virtual const char *what() const throw();
		};
		Form(void);
		~Form(void);
		Form(std::string name, unsigned int sign, unsigned int exec);
		Form(Form const & src);
		Form	&operator=(Form const & src);
		std::string const &	getName(void) const;
		void				beSigned(Bureaucrat const & brcrt);
		bool				getStatus(void) const;	
		unsigned int const	&	getGradeToSign(void) const;
		unsigned int const	&	getGradeToExec(void) const;
};

std::ostream	&operator<<(std::ostream &o, Form const & brcrt);

#endif
