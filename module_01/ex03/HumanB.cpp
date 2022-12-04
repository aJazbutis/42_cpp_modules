/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:58:43 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/05 18:22:15 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)	{
	this->weapon = NULL;
	std::cout << name << " constructed"  << std::endl;
}

HumanB::~HumanB(void)	{
	std::cout << name <<  " destructed" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)	{
	this->weapon = &weapon;
}

void	HumanB::attack(void)	{
	if (this->weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacks barehanded" << std::endl;
}
