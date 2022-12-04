/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:12:53 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/30 15:49:16 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"
#include <list>

void	chcklks(void)	{
	system ("leaks ex02");
}

int	main(void)	{

	atexit(chcklks);
	{
		std::cout << "%%%%%%%%%%%%%%%%%%%" << std::endl;
		std::cout << "%  TinyCanonTest  %" << std::endl;
		std::cout << "%%%%%%%%%%%%%%%%%%%" << std::endl;

		try	{
			MutantStack<int>	Bob;
			MutantStack<int>	Job;

			Bob.push(17);
			Bob.push(9);
			Bob.push(11);
			Bob.push(11);

			
			std::cout << "Bob's last element: " << Bob.top() << std::endl;
			if (!Job.empty())
				std::cout << "Job's last element: " << Job.top() << std::endl;
			MutantStack<int>	Jon(Bob);
			if (!Jon.empty())
				std::cout << "Jon's last element: " << Jon.top() << std::endl;
			Job = Jon;
			if (!Job.empty())
				std::cout << "Job's last element: " << Job.top() << std::endl;
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
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}
{
	getchar();
	std::cout << "same but with list" << std::endl;
	std::list<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << mstack.back() << std::endl;
	mstack.pop_back();
	std::cout << mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	//[...]
	mstack.push_back(0);
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int> s(mstack);
	getchar();
}
	}
	return (0);
}
