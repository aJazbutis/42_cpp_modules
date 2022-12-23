/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:55:32 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/12/23 19:21:15 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
void	chcklks(void)	{
	system ("leaks ex02");
}

int main(int, char**)
{
	atexit(chcklks);
	std::cout << "	#############" << std::endl;
	std::cout << "	# CanonTEST #" << std::endl;
	std::cout << "	#############" << std::endl;
	{
		Array<int>	Bob;
		Array<int>	Jon(42);
		Array<int>	Jim(24);
		Array<int>	Ben(Jon);
		Bob = Jim;
		getchar();
	}
	{
	std::cout << "%%%%%%%%%%%%%%%%" << std::endl;
	std::cout << "% providedTEST %" << std::endl;
	std::cout << "%%%%%%%%%%%%%%%%" << std::endl;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
	}
	getchar();
	{
	std::cout << "%%%%%%%%%%%%%%%%" << std::endl;
	std::cout << "%     TEST     %" << std::endl;
	std::cout << "%%%%%%%%%%%%%%%%" << std::endl;

	Array<double>	dubles;

	std::cout << dubles.size() << std::endl;
	Array<std::string> words(7);
	std::cout << words.size() << std::endl;

	std::cout << "put some words here words!" << std::endl;
	for (unsigned int i = 0; i <  words.size(); i++)	{
		getline(std::cin, words[i]);
		if (!std::cin.good())	{
			std::cout << "🦄" << std::endl;
			return (0);
		}
	}
	getchar();
	std::cout << "here are your words!" << std::endl;
	for (unsigned int i = 0; i <  words.size(); i++)	{
		std::cout << words[i] << std::endl;
	}
	getchar();
	try {
		words[-1] = "DOOM";
	}
	catch (std::exception & e)	{
		std::cout << e.what() << std::endl;
	}
	try {
		words[words.size()] = "DOOM";
	}
	catch (std::exception & e)	{
		std::cout << e.what() << std::endl;
	}
	getchar();
	}
    return 0;
}
