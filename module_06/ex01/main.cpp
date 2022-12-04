/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:11:55 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/27 20:48:31 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Proselytizer.hpp"
#include "Serialization.hpp"

/*void	chcklks(void)	{
	system ("leaks ex01");
}*/

int	main(int argc, char **argv)	{

//	atexit(chcklks);
	if (argc != 2)	{
		std::cout <<  "Conversion of scalar types:" << std::endl;
		std::cout << "The program takes a string representation of a C++ literal";
		std::cout << std::endl << "in its most common form." << std::endl;
		std::cout << "Use wisely!" << std::endl;
		return (0);
	}
	try	{
		uintptr_t	uptr;
		Data		*ptr;
		Data	Bob(argv[1]);

		ptr = &Bob;

		std::cout << "Bob works:" << std::endl;
		(*ptr).proselytize();
		getchar();
		std::cout << "Address of struct:" << std::endl;

		std::cout << ptr << std::endl;
		getchar();
		std::cout << "Insides of struct through the pointer:" << std::endl;
		std::cout << *ptr << std::endl;
		getchar();
		uptr = serialize(&Bob);
		std::cout << "Value of uintptr_t thing:" << std::endl;
		std::cout << uptr << std::endl;
		getchar();
		std::cout << "Converting back and the value is:" << std::endl;
		ptr = deserialize(uptr);

		std::cout << ptr << std::endl;
		getchar();
		std::cout << "Insides of struct through the pointer:" << std::endl;
		std::cout << *ptr << std::endl;
		getchar();
		std::cout << "You can still use the struct!" << std::endl;
		(*ptr).proselytize();
		getchar();
	}
	catch (std::exception & e)	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
