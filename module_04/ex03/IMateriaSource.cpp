/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:22:03 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/21 17:37:19 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void)	{
	std::cout << "Default IMateriaSource construction" << std::endl;
}
IMateriaSource::IMateriaSource(IMateriaSource const & src)	{
	std::cout << "IMateriaSource copy  construction" << std::endl;
	(void)src;
}
IMateriaSource & IMateriaSource::operator=(IMateriaSource const & rhs)	{
	std::cout << "IMateriaSource assignation" << std::endl;
		if (this == &rhs)
			return (*this);
		return (*this);
}
IMateriaSource::~IMateriaSource(void)	{
	std::cout << "IMateriaSource destruction" << std::endl;
}
