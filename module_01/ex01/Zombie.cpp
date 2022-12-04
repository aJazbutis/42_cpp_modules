/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:22:13 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/02 20:25:18 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)	{
	std::cout << "a nameless zombie constructed" << std::endl;
	return ;
}

Zombie::Zombie(std::string name):name(name)	{
	std::cout << "a named zombie constructed" << std::endl;
	return ;
}

Zombie::~Zombie(void) {
	std::cout << name << " destructed" << std::endl;
	return ;
}

bool	Zombie::setName(std::string name)	{
	if (name.length() > 0)	{
		this->name = name;
		return (true);
	}
	return (false);
}

void	Zombie::announce(void)	{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
