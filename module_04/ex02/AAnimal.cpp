/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 16:13:07 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/19 17:12:59 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void): type("AAnimal")	{
	std::cout << "Default animal constructed" << std::endl;
}

AAnimal::~AAnimal(void)	{
	std::cout << "An animal destructed" << std::endl;
}
AAnimal::AAnimal(AAnimal const &src): type(src.type)	{
	std::cout << "AAnimal copy constructed" << std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const & rhs)	{
	std::cout << "AAnimal assignement" << std::endl;
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

std::string AAnimal::getType(void)const	{
	return (type);
}

/*void	AAnimal::makeSound(void) const	{
	std::cout << "Bonechilling uncomprehensible sound!" << std::endl;
}

void	AAnimal::think(unsigned int i) const	{
	std::cout << i << std::endl;
}*/
