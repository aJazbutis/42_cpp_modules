/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:09:09 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/19 18:37:54 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void)	{
	std::cout << "Default dog constructed" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::~Dog(void)	{
	std::cout << "A dog destructed" << std::endl;
	delete brain;
}
Dog::Dog(Dog const &src)	{
	std::cout << "Dog copy constructed" << std::endl;
	type = src.type;
	brain = new Brain(*src.brain);
}

Dog	&Dog::operator=(Dog const & rhs)	{
	std::cout << "Dog assignement" << std::endl;
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

void	Dog::makeSound(void) const	{
	std::cout << "OWOOOOoooooooOO!" << std::endl;
}

Brain	*Dog::getBrain(void)	const	{
	return (this->brain);
}
