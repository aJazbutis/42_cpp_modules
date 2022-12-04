/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 22:50:51 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/02 23:31:24 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)	{
	std::cout << "weapon contructor" << std::endl;
}

Weapon::~Weapon(void)	{
	std::cout << "weapon destructor" << std::endl;
}
void	Weapon::setType(std::string type)	{
	this->type = type;
	return ;
}

std::string const	&Weapon::getType(void) const	{
	return (type);
}
