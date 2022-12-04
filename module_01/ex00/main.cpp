/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:57:21 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/05 16:46:34 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)	{
	Zombie *Ben = newZombie("Ben");

	Ben->announce();
	Ben->announce();

	randomChump("Jon");
	Ben->announce();
	Ben->announce();
	delete Ben;
	system("leaks ex00");
	return (0);
}

