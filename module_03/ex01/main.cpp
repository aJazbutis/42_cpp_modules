/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:16:51 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/18 15:31:14 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()	{
	{
		std::cout << "	#############" << std::endl;
		std::cout << "	##  Test I ##" << std::endl;
		std::cout << "	#############" << std::endl;
		ScavTrap	test;
		ScavTrap	Jon("Jon");
		ScavTrap	Ben(Jon);

		std::cout << Jon << std::endl;
		for(int i = 0; i < 50; i++)
			Jon.attack("Tree");
		for(int i = 0; i < 50; i++)
			Ben.beRepaired(1);
		Jon.beRepaired(1);
		Ben.attack("Tree");
		std::cout << "Copy assignement from Jon" << std::endl;
		std::cout << "*****#########******" << std::endl;
		test = Jon;
		test.attack("Tree");
		test.beRepaired(1);
		test.takeDamage(100);
		test.takeDamage(10);
	}
	{
		std::cout << "	#############" << std::endl;
		std::cout << "	## Test II ##" << std::endl;
		std::cout << "	#############" << std::endl;

		ScavTrap	Ben("Ben");
		ScavTrap	Jon("Jon");

		Ben.guardGate();
		for (int i = 0; i < 4; i++)	{
			Jon.attack("Ben");
			Ben.takeDamage(Jon.getAttackDamage());
			Ben.attack("Jon");
			Jon.takeDamage(Ben.getAttackDamage());
		}
		for (int i = 0; i < 40; i++) {
			Jon.beRepaired(1);
			Ben.beRepaired(1);
		}
		Jon.guardGate();
		for (int i = 0; i < 6; i++)	{
			Ben.attack("Jon");
			Jon.takeDamage(Ben.getAttackDamage());
		}
		std::cout << Jon << std::endl;
		std::cout << Ben << std::endl;
		Ben.beRepaired(8);
		Ben.guardGate();
		Jon.attack("Ben");
		Ben.takeDamage(200);
		Jon.guardGate();
	Ben.guardGate();
	}
	return (0);
}
