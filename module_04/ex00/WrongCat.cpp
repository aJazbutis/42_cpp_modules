/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:41:09 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/19 22:10:27 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)	{
	std::cout << "Default WrongCat constructed" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat(void)	{
	std::cout << "A WrongCat destructed" << std::endl;
}
WrongCat::WrongCat(WrongCat const &src)	{
	std::cout << "WrongCat copy constructed" << std::endl;
	type = src.type;
}

WrongCat	&WrongCat::operator=(WrongCat const & rhs)	{
	std::cout << "WrongCat assignement" << std::endl;
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

void	WrongCat::makeSound(void) const	{
	std::cout << "Katzengeräusch!" << std::endl;
}
