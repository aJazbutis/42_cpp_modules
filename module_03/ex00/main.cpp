/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:16:51 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/17 00:27:37 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()	{
	{
		ClapTrap	test;
		ClapTrap	Jon("Jon");
		ClapTrap	Ben(Jon);

		for(int i = 0; i < 12; i++)
			Jon.attack("Tree");
		for(int i = 0; i < 12; i++)
			Ben.beRepaired(1);
		Jon.beRepaired(1);
		Ben.attack("Tree");
		std::cout << "Copy assignement from Jon" << std::endl;
		std::cout << "*****#########******" << std::endl;
		test = Jon;
		test.attack("Tree");
		test.beRepaired(1);
		test.takeDamage(10);
		test.takeDamage(10);
	}
	std::cout << "#############" << std::endl;
	std::cout << "## Test II ##" << std::endl;
	std::cout << "#############" << std::endl;
	{
		ClapTrap	Ben("Ben");
		ClapTrap	Jon("Jon");

		for(int i = 0; i < 9; i++)	{
			Jon.attack("Ben");
			Ben.takeDamage(Jon.getAttackDamage());
			Ben.attack("Jon");
			Jon.takeDamage(Ben.getAttackDamage());
		}
		Ben.takeDamage(9);
		Jon.takeDamage(9);
		Jon.attack("Ben");
		Ben.takeDamage(Jon.getAttackDamage());
		Ben.attack("Jon");
		Jon.takeDamage(Ben.getAttackDamage());
		for(int i = 0; i < 2; i++) {
			Jon.beRepaired(1);
			Ben.beRepaired(1);
		}
		Jon.attack("Ben");
		Ben.takeDamage(Jon.getAttackDamage());
		Ben.attack("Jon");
		Jon.takeDamage(Ben.getAttackDamage());
		Ben.takeDamage(9);
		Jon.takeDamage(9);
	}
	return (0);
}
