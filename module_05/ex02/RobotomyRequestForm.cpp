/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:47:52 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/25 00:55:03 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45)	{
	std::cout << "Default RobotomyRequestForm constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)	{
	if (_target.empty())
		throw Form::EmptyNameException();
	std::cout << "Real RobotomyRequestForm constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)	{
	std::cout << "RobotomyRequestForm Form destructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src):	Form(src)	{
	std::cout << "RobotomyRequestForm Copy constructor" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)	{
	std::cout << "RobotomyRequestForm assignation" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_target = rhs._target;
	this->setStatus(rhs.getStatus());
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & brcrt) const	{
	if (!getStatus())
		throw (Form::UnsignedFormException());
	if (brcrt.getGrade() > getGradeToExec())
		throw (Form::GradeTooLowException());

	std::cout << std::endl;
	std::cout << "wher wher wher, brum-brum-brumbrum-brrrrrrrrrrrrrrrrrrrrr";
	std::cout <<  std::endl;
	if (rand() % 2)	{
		std::cout << _target << " was successfully robotomized!" << std::endl;
	}
	else	{
		std::cout << " The robotomy failed on " << _target  << std::endl;
	}
	std::cout << "Thank You for participating and have a nice day!";
	std::cout << std::endl << std::endl;
}

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm const & form)	{
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
