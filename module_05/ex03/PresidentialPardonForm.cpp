/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:01:04 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/24 18:51:58 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5)	{
	std::cout << "Default PresidentialPardonForm constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)	{
	if (_target.empty())
		throw Form::EmptyNameException();
//	if (_gradeToSign < 1 || _gradeToExec < 1)
//		throw (Form::GradeTooHighException());
//	if (_gradeToSign > 150 || _gradeToExec > 150)
//		throw (Form::GradeTooLowException());
//	_signed = false;
	std::cout << "Real Presidential Form constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)	{
	std::cout << "PresidentialPardonForm Form destructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src):	Form(src)	{
	std::cout << "PresidentialPardonForm Copy constructor" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)	{
	std::cout << "PresidentialPardonForm assignation" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_target = rhs._target;
	this->setStatus(rhs.getStatus());
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & brcrt) const	{
	if (!getStatus())
		throw (Form::UnsignedFormException());
	if (brcrt.getGrade() > getGradeToExec())
		throw (Form::GradeTooLowException());

	std::cout << std::endl << "Dear " << _target << "," << std::endl;
	std::cout << "Please be informed, that You've been pardoned by ";
	std::cout << "Zaphod Beeblebrox!" << std::endl << std::endl;
}

/*void	PresidentialPardonForm::beSigned(Bureaucrat const & brcrt)	{
	if (brcrt.getGrade() > getGradeToSign())
		throw (Form::GradeTooLowException());
	setStatus(true);
}*/
/*
unsigned int const &	Form::getGradeToSign(void) const	{
	return (_gradeToSign);
}

unsigned int const &	Form::getGradeToExec(void) const	{
	return (_gradeToExec);*/
//}

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm const & form)	{
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
