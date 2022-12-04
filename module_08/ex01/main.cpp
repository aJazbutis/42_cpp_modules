/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:49:20 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/10/03 20:51:47 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>

void	chcklks(void)	{
	system ("leaks ex01");
}

int	main(void)	{

	atexit(chcklks);
	{
		std::cout << "%%%%%%%%%%%%%%%%%%%" << std::endl;
		std::cout << "%  TinyCanonTest  %" << std::endl;
		std::cout << "%%%%%%%%%%%%%%%%%%%" << std::endl;

		try	{
			Span	Bob(5);
			Span	Job(10);

			Bob.addNumber(6);
			Bob.addNumber(3);
			Bob.addNumber(17);
			Bob.addNumber(9);
			Bob.addNumber(11);
			Bob.addNumber(11);

			std::cout << "Bob: " << Bob << std::endl;
			std::cout << "Job: " << Job << std::endl;
			Span	Jon(Bob);
			std::cout << "Jon: " << Jon << std::endl;
			Job = Jon;
			std::cout << "Job: " << Job << std::endl;
		}
		catch (std::exception & e)	{
			std::cerr << e.what() << std::endl;
		}
		getchar();
	}
	{
		std::cout << "🦄🦄🦄🦄🦄🦄🦄🦄🦄🦄" << std::endl;
		std::cout << "🦄     PdfTEST    🦄" << std::endl;
		std::cout << "🦄🦄🦄🦄🦄🦄🦄🦄🦄🦄" << std::endl;

		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		getchar();
	}
	{
		std::cout << "🦄🦄🦄🦄🦄🦄🦄🦄🦄🦄" << std::endl;
		std::cout << "🦄   BigGunsTEST  🦄" << std::endl;
		std::cout << "🦄🦄🦄🦄🦄🦄🦄🦄🦄🦄" << std::endl;

		Span	Bob(15000);
		std::vector<int>	Jon;


	try	{
			Bob.addNumber(6);
			Bob.addNumber(3);
			Bob.addNumber(17);
			Bob.addNumber(9);
			Bob.addNumber(11);
			std::srand((unsigned int)time(NULL));
			for (int i = 500; i < 12121; i++)	{
				Bob.addNumber(rand() % 42000);
			}
			std::cout << Bob << std::endl;
			std::cout << "That was Bob of size " << Bob.getSize();
			std::cout << ", now spans:" << std::endl;
			getchar();
			std::cout << Bob.longestSpan() << std::endl;
			std::cout << Bob.shortestSpan() << std::endl;
			getchar();
			Jon.reserve(14444);
			for (int i = 0; i < 14444; i++)	{
		//	std::srand((unsigned int)time(NULL));
			Jon.push_back(rand() % 42000);
			}
			std::cout << "Bob gets many number now:" << std::endl;
			Bob.addManyNumbers(Jon);
			std::cout << Bob << std::endl;
			std::cout << "That was Bob, now spans:" << std::endl;
			getchar();
			std::cout << Bob.longestSpan() << std::endl;
			std::cout << Bob.shortestSpan() << std::endl;
			getchar();
			std::cout << "Size of Bob is still:" << std::endl;
			std::cout << Bob.getSize() << std::endl;
			getchar();
	}
	catch (std::exception & e)	{
		std::cout << e.what() << std::endl;
	}
	}
	return (0);
}
