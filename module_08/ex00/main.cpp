/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:01:59 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/30 17:43:44 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void	displayInt(int i)	{
	std::cout << i << ' ';
}

int	main(void)	{
	std::vector<int>	vct;
	std::list<int>		lst;

	for (int i = 0; i < 7; i++)
		lst.push_back(i);
	for (int i = 6; i < 12; i++)
		vct.push_back(i);
	std::cout << "here are Vector container values:" << std::endl;
	for_each(vct.begin(), vct.end(), displayInt);
	std::cout << std::endl;
	try	{
		std::cout << "Looking for 5!" << std::endl;
		std::cout << *easyfind(vct, 5) << " is there!" << std::endl; 
	}
	catch (std::exception & e)	{
		std::cout << e.what() << std::endl;
	}
	try	{
		std::cout << "Looking for 9!" << std::endl;
		std::cout << *easyfind(vct, 9) << " is there!" << std::endl;
	}
	catch (std::exception & e)	{
		std::cout << e.what() << std::endl;
	}
	getchar();
	std::cout << "here are List container values:" << std::endl;
	for_each(lst.begin(), lst.end(), displayInt);
	std::cout<< std::endl;
	try	{
		std::cout << "Looking for 5!" << std::endl;
		std::cout << *easyfind(lst, 5) << " is there!" << std::endl;
	}
	catch (std::exception & e)	{
		std::cout << e.what() << std::endl;
	}
	try	{
		std::cout << "Looking for 9!" << std::endl;
		std::cout << *easyfind(lst, 9) << " is there!" << std::endl;
	}
	catch (std::exception & e)	{
		std::cout << e.what() << std::endl;
	}
	return (0);
/*	std::vector<int>	vct;
	std::list<int>		lst;

	for (int i = 0; i < 7; i++)
		lst.push_back(i);
	for (int i = 6; i < 12; i++)
		vct.push_back(i);
//	std::vector<int>::const_iterator	it;
//	std::vector<int>::const_iterator	ite = vct.end();
	std::cout << "here are Vector container values:" << std::endl;
//	for (it = vct.begin(); it != ite; it++)	
//		std::cout << *it << ' ';
	for_each(vct.begin(), vct.end(), displayInt);
	std::cout << std::endl;
	try	{
		std::cout << "Looking for 5!" << std::endl;
		std::cout << easyfind(vct, 5) << " <- index" << std::endl;
		std::cout << vct[easyfind(vct, 5)] << "<- value" << std::endl; 
	}
	catch (std::exception & e)	{
		std::cout << e.what() << std::endl;
	}
	try	{
		std::cout << "Looking for 9!" << std::endl;
		std::cout << easyfind(vct, 9) << " <- index" << std::endl;
		std::cout << vct[easyfind(vct, 9)] << " <- value" << std::endl;
	}
	catch (std::exception & e)	{
		std::cout << e.what() << std::endl;
	}
	std::list<int>::const_iterator	j;
//	std::list<int>::const_iterator	je = lst.end();
	std::cout << "here are List container values:" << std::endl;
//	for (j = lst.begin(); j != je; j++)	
//		std::cout << *j << ' ';
	for_each(lst.begin(), lst.end(), displayInt);
	std::cout<< std::endl;
	try	{
		std::cout << "Looking for 5!" << std::endl;
		std::cout << easyfind(lst, 5) << " <- in this node" << std::endl;
		j = lst.begin();
		for (int i = 0; i < easyfind(lst, 5); i ++)
			j++;
		std::cout << *j << " <- this value" << std::endl;
	}
	catch (std::exception & e)	{
		std::cout << e.what() << std::endl;
	}
	try	{
		std::cout << "Looking for 9!" << std::endl;
		std::cout << easyfind(lst, 9) << " <- index" << std::endl;
		j = lst.begin();
		for (int i = 0; i < easyfind(lst, 5); i ++)
			j++;
		std::cout << *j << " <- this value" << std::endl;
	}
	catch (std::exception & e)	{
		std::cout << e.what() << std::endl;
	}
	return (0);*/
}

