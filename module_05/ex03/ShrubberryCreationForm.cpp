/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberryCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:19:41 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/25 01:17:24 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberryCreationForm.hpp"
#include <fstream>

ShrubberryCreationForm::ShrubberryCreationForm(void) : Form("ShrubberryCreationForm", 145, 137)	{
	std::cout << "Default ShrubberryCreationForm constructor" << std::endl;
}

ShrubberryCreationForm::ShrubberryCreationForm(std::string target) : Form("ShrubberryCreationForm", 145, 137), _target(target)	{
	if (_target.empty())
		throw Form::EmptyNameException();
	std::cout << "Real ShrubberryCreationForm constructor" << std::endl;
}

ShrubberryCreationForm::~ShrubberryCreationForm(void)	{
	std::cout << "ShrubberryCreationForm Form destructor" << std::endl;
}

ShrubberryCreationForm::ShrubberryCreationForm(ShrubberryCreationForm const & src):	Form(src)	{
	std::cout << "ShrubberryCreationForm Copy constructor" << std::endl;
}

ShrubberryCreationForm	&ShrubberryCreationForm::operator=(ShrubberryCreationForm const & rhs)	{
	std::cout << "ShrubberryCreationForm assignation" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_target = rhs._target;
	this->setStatus(rhs.getStatus());
	return (*this);
}

void	ShrubberryCreationForm::execute(Bureaucrat const & brcrt) const	{
	if (!getStatus())
		throw (Form::UnsignedFormException());
	if (brcrt.getGrade() > getGradeToExec())
		throw (Form::GradeTooLowException());

	std::ofstream	ofs(_target + "_shruberry", std::ios::out | std::ios::app);
	if (!ofs.is_open())
		throw (Form::NoRightsException());
	for (int i = 0; i < ((rand() % 25) + 1); i++)	{
		ofs << "  %      %      %      %      %   " << std::endl;
		ofs << " %%%    %%%    %%%    %%%    %%%  " << std::endl;
		ofs << "%%%%%  %%%%%  %%%%%  %%%%%  %%%%% " << std::endl;
		ofs << "  |      |      |      |      |   " << std::endl;
		ofs << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << std::endl;  
	}
	ofs.close();
}

std::ostream	&operator<<(std::ostream &o, ShrubberryCreationForm const & form)	{
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
