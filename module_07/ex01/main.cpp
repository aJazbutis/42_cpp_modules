/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:22:22 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/28 20:32:57 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)	{
	char	a[5] = {'a', 'b', 'c', 'd', 'e'};
	int		b[5] = {0, 1, 2, 3, 4};
	double	c[5] = {0.1, 1.1, 2.1, 3.1, 4.1};
	float	d[5] = {0.10f, 1.10f, 2.10f, 3.10f, 4.10f};

	std::cout << "char!" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << a[i] << ' ';
	std::cout << std::endl;
	iter(a, 5, &increment);
	for (int i = 0; i < 5; i++)
		std::cout << a[i] << ' ';
	std::cout << std::endl;
	iter(a, 5, &increment);
	for (int i = 0; i < 5; i++)
		std::cout << a[i] << ' ';
	std::cout << std::endl;

	std::cout << "int!" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << b[i] << ' ';
	std::cout << std::endl;
	iter(b, 5, &increment);
	for (int i = 0; i < 5; i++)
		std::cout << b[i] << ' ';
	std::cout << std::endl;
	iter(b, 5, &increment);
	for (int i = 0; i < 5; i++)
		std::cout << b[i] << ' ';
	std::cout << std::endl;

	std::cout << "double!" << std::endl;
	iter(b, 5, &increment);
	for (int i = 0; i < 5; i++)
		std::cout << c[i] << ' ';
	std::cout << std::endl;
	iter(c, 5, &increment);
	for (int i = 0; i < 5; i++)
		std::cout << c[i] << ' ';
	std::cout << std::endl;
	iter(c, 5, &increment);
	for (int i = 0; i < 5; i++)
		std::cout << c[i] << ' ';
	std::cout << std::endl;

	std::cout << "float!" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << d[i] << ' ';
	std::cout << std::endl;
	iter(d, 5, &increment);
	for (int i = 0; i < 5; i++)
		std::cout << d[i] << ' ';;
	std::cout << std::endl;
	iter(d, 5, &increment);
	for (int i = 0; i < 5; i++)
		std::cout << d[i] << ' ';;
	std::cout << std::endl;
}
