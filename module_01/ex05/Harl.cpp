/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:09:23 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/07 17:27:49 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)	{
	std::cout << "Harl arrived" << std::endl;
}

Harl::~Harl(void)	{
	std::cout << "Harl left" << std::endl;
}

void	Harl::debug(void)	{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)	{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<  std::endl;
}

void	Harl::warning(void)	{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)	{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)	{
//	void	(Harl::*loc[])(void) = {&Harl::debug,&Harl::info, &Harl::warning, &Harl::error};
	pFn	loc[] = {&Harl::debug,&Harl::info, &Harl::warning, &Harl::error};
	std::string	lvl[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = -1;

	while (++i < 4)	{
		if (level == lvl[i])
			(this->*loc[i])();
	}
}
