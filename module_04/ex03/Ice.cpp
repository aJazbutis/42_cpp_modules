/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:48:15 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/21 23:32:26 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"


 //Caninical
Ice::Ice(void)	{
	type = "ice";
	std::cout << "Default Ice construction" << std::endl;
}

//	[...]//Caninical
Ice::~Ice(void)	{
	std::cout << "Ice destruction" << std::endl;
}

//	[...]//Caninical
Ice::Ice(Ice const & src)	{
	std::cout << "Ice copy construction" << std::endl;
	type = src.type;
}

//Caninical
Ice	&Ice::operator=(Ice const & rhs)	{
	if (this == &rhs)
		return (*this);
	return (*this);
}
 //Returns the materia type
std::string const &Ice::getType(void) const	{
	return (type);
}

Ice* Ice::clone(void) const	{
   return (new Ice(*this));
}
void Ice::use(ICharacter& target)	{
	std::cout << " * shoots an ice bolt at " << target.getName() << " *" << std::endl;
};
