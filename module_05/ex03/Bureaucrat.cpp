/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:56:37 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/25 00:43:33 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("blank"), _grade(150)	{;
	std::cout << "Default Buraucrat constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade):
	_name(name), _grade(grade)	{
	if (_name.empty())
		throw Bureaucrat::EmptyNameException();
	if (_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	std::cout << "Real Bureaucrat constructor" << std::endl;
}

Bureaucrat::~Bureaucrat(void)	{
	std::cout << "Bureaucrat destructor" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src):
	_name(src._name), _grade(src._grade)	{
	std::cout << "Bureaucrat Copy constructor" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const & rhs)	{
	std::cout << "Bureaucrat assignation" << std::endl;
	if (this == &rhs)
		return (*this);
	std::cout << "Only grade assigned" << std::endl;
	this->_grade = rhs.getGrade();
	return (*this);
}

std::string const & Bureaucrat::getName(void) const	{
	return (_name);
}

unsigned int	Bureaucrat::getGrade(void) const	{
	return (_grade);
}

void	Bureaucrat::increment(void)	{
	try {
		if (getGrade() - 1 < 1)
			throw (Bureaucrat::GradeTooHighException());
		else
			this->_grade--;
	}
	catch (Bureaucrat::GradeTooHighException & e)	{
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::decrement(void)	{
	try	{
		if (getGrade() + 1 > 150)
			throw (Bureaucrat::GradeTooLowException());
		else
			this->_grade++;
	}
	catch	(Bureaucrat::GradeTooLowException & e)	{
		std::cerr << e.what() << std::endl;
	}
}

char const *Bureaucrat::EmptyNameException::what() const throw()	{
	return ("Blank name");
}

char const *Bureaucrat::GradeTooHighException::what() const throw()	{
	return ("Too high grade");
}

char const *Bureaucrat::GradeTooLowException::what() const throw()	{
	return ("Too low grade");
}

void	Bureaucrat::signForm(Form & form)	{
	std::cout << getName();
	try	{
		form.beSigned(*this);
		std::cout << " signed the " << form.getName() << std::endl;
	}
	catch (Form::SignedFormException & e)	{
		std::cerr << " wasn't able to sign " << form.getName();
		std::cerr	<< " because of ";
		std::cerr << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException & e)	{
		std::cerr << " wasn't able to sign " << form.getName();
		std::cerr	<< " because of ";
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & form)	{

	try	{
		form.execute(*this);
		std::cout << getName();
		std::cout << " executed " << form.getName() << std::endl;
	}
	catch (Form::UnsignedFormException & e)	{
		std::cout << getName();
		std::cerr << " wasn't able to execute " << form.getName();
		std::cerr	<< " because of ";
		std::cerr << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException & e)	{
		std::cout << getName();
		std::cerr << " wasn't able to execute " << form.getName();
		std::cerr	<< " because of ";
		std::cerr << e.what() << std::endl;
	}
	catch (Form::NoRightsException & e)	{
		std::cout << getName();
		std::cerr << " wasn't able to execute " << form.getName();
		std::cerr	<< " because of ";
		std::cerr << e.what() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const & brcrt)	{
	o << "Bureaucrat " << brcrt.getName() << ", grade " << brcrt.getGrade();
	return (o);
}
