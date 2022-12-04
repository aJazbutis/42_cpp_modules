/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:57:21 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/05 17:22:59 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)	{
	Zombie *horde = zombieHorde(15, "headless zombie");
	int i = 0;

	while (i < 15)	{
		std::cout << i << std::endl;
		horde[i].announce();
		i++;
	}
	horde[5].announce();
	delete [] horde;
	system("leaks ex01");
	return (0);
}

