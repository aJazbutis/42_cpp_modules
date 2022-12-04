/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:28:43 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/19 17:41:38 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("Animal")	{
	std::cout << "Default animal constructed" << std::endl;
}

Animal::~Animal(void)	{
	std::cout << "An animal destructed" << std::endl;
}
Animal::Animal(Animal const &src): type(src.type)	{
	std::cout << "Animal copy constructed" << std::endl;
}

Animal	&Animal::operator=(Animal const & rhs)	{
	std::cout << "Animal assignement" << std::endl;
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

std::string Animal::getType(void)const	{
	return (type);
}

void	Animal::makeSound(void) const	{
	std::cout << "DA DA BING BONG!!" << std::endl;
}

