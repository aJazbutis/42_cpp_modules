/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 23:07:59 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/21 17:38:43 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(void)	{
	std::cout << "Default ICharacter construction" << std::endl;
}

ICharacter::~ICharacter(void)	{
	std::cout << "ICharacter destruction" << std::endl;
}

ICharacter::ICharacter(ICharacter const & src)	{
	(void)src;
		std::cout << "ICharacter copy construction" << std::endl;
}

ICharacter & ICharacter::operator=(ICharacter const & rhs)	{
	std::cout << "ICharacter assignemention" << std::endl;
	if (this == &rhs)
		return (*this);
	return (*this);
}
