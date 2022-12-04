/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:22:13 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/05 16:44:26 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {
	std::cout << "a zombie constructed" << std::endl;
	return ;
}

Zombie::~Zombie(void) {
	std::cout << name << " destructed" << std::endl;
	return ;
}

void	Zombie::announce(void) const	{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
