/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:35:27 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/19 17:47:41 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("WrongAnimal")	{
	std::cout << "Default WrongAnimal constructed" << std::endl;
}

WrongAnimal::~WrongAnimal(void)	{
	std::cout << "A WrongAnimal destructed" << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal const &src): type(src.type)	{
	std::cout << "A WrongAnimal copy constructed" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const & rhs)	{
	std::cout << "WrongAnimal assignement" << std::endl;
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

std::string WrongAnimal::getType(void)const	{
	return (type);
}

void	WrongAnimal::makeSound(void) const	{
	std::cout << "DA DA BING BONG!" << std::endl;
}
