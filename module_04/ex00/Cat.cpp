/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:11:30 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/19 17:10:39 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)	{
	std::cout << "Default cat constructed" << std::endl;
	type = "Cat";
}

Cat::~Cat(void)	{
	std::cout << "A cat destructed" << std::endl;
}
Cat::Cat(Cat const &src)	{
	std::cout << "Cat copy constructed" << std::endl;
	type = src.type;
}

Cat	&Cat::operator=(Cat const & rhs)	{
	std::cout << "Cat assignement" << std::endl;
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

//(That female cats in heat make while calling a mate.)
//meow, mow, mrow, mrrr, prr, prrt, hh, mrrrrrrrrrrawr, mew, rrrr, e-e-e-e-e-e, awr, hiiiiiiiiiss, mEEEwr, aaaaaaaaaaaa
void	Cat::makeSound(void) const	{
	std::cout << "A distressed caterwauling sound with yowling ";
	std::cout << "vocalizations and soft, melodious purrs!" << std::endl;
}
