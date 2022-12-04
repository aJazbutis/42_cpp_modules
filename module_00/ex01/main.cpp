/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:00:23 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/07/26 18:48:26 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "PhoneBook.hpp"
#include <string>
#include <cstring>

int	main(void)
{
	PhoneBook		book;
	std::string		input;
	std::string		add = "ADD";
	std::string		ext = "EXIT";	
	std::string		srh = "SEARCH";

	std::cout << "Welcome to your interactive PhoneBook!" << std::endl;
	while (1)
	{
//		std::cout << book.Stored() << std::endl;
		std::cout << "Enter a command (ADD, SEARCH, EXIT):" << std::endl;
		std::getline(std::cin, input);
		if (!std::cin.good()){
			std::cout << "Something unexpected happended. Exiting now. Bye!";
			std::cout << std::endl;
			return (0);
		}
		if (!strncasecmp(input.c_str(), add.c_str(), 4))
		   book.Add();
		else if (!strncasecmp(input.c_str(), ext.c_str(), 5)){
			std::cout << "Bye!" << std::endl;
			break ;
		}
		else if (!strncasecmp(input.c_str(), srh.c_str(), 7)){
			book.Search();
		}
		else{
			std::cout << "PUNY HUMAN! Only ADD SEARCH and EXIT are acceptable!";
			std::cout << std::endl;
		}
	}
	return (0);
}

