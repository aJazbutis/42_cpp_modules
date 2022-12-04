/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:00:23 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/05 17:30:47 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)	{
	std::string	string_VAR = "HI THIS IS BRAIN";
	std::string	*stringPTR;
	std::string	&stringREF = string_VAR;

	stringPTR = &string_VAR;
	std::cout << "***Addressses***" << std::endl;
	std::cout << "string - " << &string_VAR << std::endl;
	std::cout << "PTR    - " << stringPTR << std::endl;
	std::cout << "REF    - " << &stringREF << std::endl;
	std::cout << "***Values***" << std::endl;
	std::cout << "string - " << string_VAR << std::endl;
	std::cout << "PTR    - " << *stringPTR << std::endl;
	std::cout << "REF    - " << stringREF << std::endl;
	return (0);
}
