/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:52:19 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/25 01:12:31 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("blank"), _signed(false), _gradeToSign(1), _gradeToExec(1)	{
	std::cout << "Default Form constructor" << std::endl;
}

Form::Form(std::string name, unsigned int sign, unsigned int exec):
	_name(name), _signed(false), _gradeToSign(sign), _gradeToExec(exec)	{
	if (_name.empty())
		throw Form::EmptyNameException();
	if (_gradeToSign < 1 || _gradeToExec < 1)
		throw (Form::GradeTooHighException());
	if (_gradeToSign > 150 || _gradeToExec > 150)
		throw (Form::GradeTooLowException());
	std::cout << "Real Form constructor" << std::endl;
}

Form::~Form(void)	{
	std::cout << "Form destructor" << std::endl;
}

Form::Form(Form const & src):
	_name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec)	{
	std::cout << "Form Copy constructor" << std::endl;
}

Form	&Form::operator=(Form const & rhs)	{
	std::cout << "Form assignation" << std::endl;
	if (this == &rhs)
		return (*this);
	std::cout << "Only state of SIGNED assigned" << std::endl;
	this->_signed = rhs._signed;
	return (*this);
}

std::string const & Form::getName(void) const	{
	return (_name);
}

bool	Form::getStatus(void) const	{
	return (_signed);
}

void	Form::setStatus(bool status)	{
	_signed = status;
}

void	Form::beSigned(Bureaucrat const & brcrt)	{
	if (_signed)
		throw (Form::SignedFormException());
	if (brcrt.getGrade() > _gradeToSign)
		throw (Form::GradeTooLowException());
	_signed = true;
}

unsigned int const &	Form::getGradeToSign(void) const	{
	return (_gradeToSign);
}

unsigned int const &	Form::getGradeToExec(void) const	{
	return (_gradeToExec);
}

std::ostream	&operator<<(std::ostream &o, Form const & form)	{
	o << "Form: " << form.getName() << std::endl;
	o << "Grade to sign: " << form.getGradeToSign() << std::endl;
	o << "Grade to execute: " << form.getGradeToExec() << std::endl;
	o << "Signed : ";
   	if (form.getStatus())
		o << "Positive" << std::endl;
	else
		o << "Negative" << std::endl;
	return (o);
}

const char *Form::EmptyNameException::what() const throw()	{
	return ("'Blank name'");
}

const char *Form::GradeTooHighException::what() const throw()	{
	return ("'Too high grade'");
}

const char *Form::GradeTooLowException::what() const throw()	{
	return ("'Too low grade'");
}

const char *Form::SignedFormException::what() const throw()	{
	return ("'Form is already signed'");
}

const char *Form::UnsignedFormException::what() const throw()	{
	return ("'Form is not signed'");
}

const char *Form::NoRightsException::what() const throw()	{
	return ("'No rights to open the file'");
}
