/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:11:30 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/19 18:36:26 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)	{
	std::cout << "Default cat constructed" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::~Cat(void)	{
	std::cout << "A cat destructed" << std::endl;
	delete brain;
}
Cat::Cat(Cat const &src)	{
	std::cout << "Cat copy constructed" << std::endl;
	type = src.type;
	brain = new Brain(*src.brain);
}

Cat	&Cat::operator=(Cat const & rhs)	{
	std::cout << "Cat assignement" << std::endl;
	if (this == &rhs)
		return (*this);
	type = rhs.type;
	*brain = *rhs.brain;
	return (*this);
}

void	Cat::makeSound(void) const	{
	std::cout << "A distressed caterwauling sound with yowling ";
	std::cout << "vocalizations and soft, melodious purrs!" << std::endl;
}

void	Cat::think(unsigned int i) const	{
	std::cout << "mrrrrrrrrrrawr" << std::endl;
	if (i < 100)
		std::cout << brain->getIdea(i) << std::endl;
	std::cout << "mrrrrrrrrrrawr" << std::endl;
}

Brain	*Cat::getBrain(void) const	{
	return (brain);
}

bool	Cat::setIdea(unsigned int i, std::string const & idea)	{
	if (i < 100)	{
		this->brain->setIdea(i, idea);
		return (true);
	}
	return (false);
}
