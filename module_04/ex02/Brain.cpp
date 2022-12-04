/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:58:20 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/19 15:25:00 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)	{
	std::cout << "A Brain constructed" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "!";
}

Brain::~Brain(void)	{
	std::cout << "A Brain destructed" << std::endl;
}

Brain::Brain(Brain const & src)	{
	std::cout << "A Brain copy constructed" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "a copy of \" " + src.ideas[i] + "\"";
}

Brain	&Brain::operator=(Brain const & rhs)	{
	std::cout << "Brain assigned" << std::endl;
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < 100; i++)
		ideas[i] = rhs.ideas[i];
	return (*this);
}

std::string	Brain::getIdea(unsigned int i) const	{
	if (i < 100)
		return (this->ideas[i]);
	return ("");
}

bool	Brain::setIdea(unsigned int i, std::string const & idea)	{
	if (i < 100)	{
		this->ideas[i] = idea;
		return (true);
	}
	return (false);
}
