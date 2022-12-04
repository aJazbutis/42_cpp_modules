/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:33:22 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/06 23:58:04 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)	{
	if (argc != 2)	{
		std::cout << "set some level, but one at a time please" << std::endl;
		return (0);
	}

	Harl	harl;

	harl.filter(argv[1]);
	return(0);
}
