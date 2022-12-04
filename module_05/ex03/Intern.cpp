/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 21:00:07 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/24 23:09:20 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)	{
	std::cout << "Default Intern constructed" << std::endl;
}

Intern::~Intern(void)	{
	std::cout << "Intern destructed" << std::endl;
}

Intern::Intern(Intern const & src)	{
	(void)src;
	std::cout << "Intern copy constructed" << std::endl;
}

Intern &Intern::operator=(Intern const & rhs)	{
	std::cout << "Intern assignation" << std::endl;
	if (this == &rhs)
		return (*this);
	return (*this);
}

Form	*Intern::makeForm(std::string name, std::string target)	{
	std::string	names[] = {"ShrubberryCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
//	Form	*ret = NULL;
//	try	{
		int  i = -1;
		while(++i < 3)	{
			if (!names[i].compare(name))	{
				std::cout << "Intern creates " << name << std::endl;
				break ;
			}
		}
		switch (i)	{
			case (0):
				return (new ShrubberryCreationForm(target));
				break ;
			case (1):
				return (new RobotomyRequestForm(target));
				break ;
			case (2):
				return (new PresidentialPardonForm(target));
				break ;
			default:
				std::cout << "Intern wasn't able to find the '";
				std::cout << name << "' template!" << std::endl;
		}
//	}
//	catch (Form::EmptyNameException & e)	{
//		std::cerr << e.what() << std::endl;
//		std::cout << "Intern is visibly confused by that!" << std::endl;
//		delete ret;
//		ret = NULL;
//		return NULL;
//	}
	return (NULL);
}

