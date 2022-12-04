/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:09:09 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/19 17:07:04 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)	{
	std::cout << "Default dog constructed" << std::endl;
	type = "Dog";
}

Dog::~Dog(void)	{
	std::cout << "A dog destructed" << std::endl;
}
Dog::Dog(Dog const &src)	{
	std::cout << "Dog copy constructed" << std::endl;
	type = src.type;
}

Dog	&Dog::operator=(Dog const & rhs)	{
	std::cout << "Dog assignement" << std::endl;
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

//"A long, sad, crying sound! 
void	Dog::makeSound(void) const	{
	std::cout << "OWOOOOoooooooOO" << std::endl;
}

