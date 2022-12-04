/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:28:25 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/10/04 16:35:09 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

 //Caninical
Cure::Cure(void)	{
	type = "cure";
	std::cout << "Default Cure construction" << std::endl;
}

//	[...]//Caninical
Cure::~Cure(void)	{
	std::cout << "Cure destruction" << std::endl;
}

//	[...]//Caninical
Cure::Cure(Cure const & src)	{
	std::cout << "Cure copy construction" << std::endl;
	type = src.type;
}

//Caninical
Cure	&Cure::operator=(Cure const & rhs)	{
	if (this == &rhs)
		return (*this);
	return (*this);
}
 //Returns the materia type
//std::string const &Cure::getType(void) const	{
//	return (type);
//}

Cure* Cure::clone(void) const	{
   return (new Cure(*this));
}
void Cure::use(ICharacter& target)	{
	std::cout <<  " * heals " << target.getName() << "’s wounds *" << std::endl;
};
