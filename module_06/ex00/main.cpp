/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:11:55 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/27 20:45:06 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Proselytizer.hpp"

/*void	chcklks(void)	{
	system ("leaks convert");
}
*/

int	main(int argc, char **argv)	{
//	atexit(chcklks);
	if (argc != 2)	{
		std::cout <<  "Conversion of scalar types:" << std::endl;
		std::cout << "The program takes a string representation of a C++ literal";
		std::cout << std::endl << "in its most common form." << std::endl;
		std::cout << "Use wisely!" << std::endl;
		return (0);
	}
	/*{
		std::cout << "%%%%%%%%%%%%%%%%%%%" << std::endl;
		std::cout << "%  TinyCanonTest  %" << std::endl;
		std::cout << "%%%%%%%%%%%%%%%%%%%" << std::endl;

		try	{
			Proselytizer	Bob;
			Proselytizer	Job(argv[1]);
			Proselytizer	Jon(Job);

			std::cout << Bob << std::endl;
			std::cout << Job << std::endl;
			std::cout << Jon << std::endl;
			Bob = Jon;
			std::cout << Bob << std::endl;
		}
		catch (std::exception & e)	{
			std::cerr << e.what() << std::endl;
		}
		getchar();
	}*/
	try	{
		Proselytizer	Bob(argv[1]);
		Bob.proselytize();
	}
	catch (std::exception & e)	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
