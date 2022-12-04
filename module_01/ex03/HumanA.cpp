/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 23:03:42 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/05 17:44:05 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)	{
	std::cout << name << " constructed"  << std::endl;
}

HumanA::~HumanA(void)	{
	std::cout << name <<  " destructed" << std::endl;
}

void	HumanA::attack(void)	{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
