/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:07:22 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/14 20:28:55 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"
int main( void ) {

{
	Point	a(1, 2);
	Point	b(3, 3);
	Point	c(5.5f, 1);
	Point	d(1, 2);
	std::cout << "****************" << std::endl;
	std::cout << "Triangle: ";
	std::cout << a << ", " << b << ", " << c << std::endl;
	std::cout << d;
	if (bsp(a, b, c, d))
		std::cout << " is inside of the triangle" << std::endl;
	else
		std::cout << " is not inside of the triangle" << std::endl;
}
{
	const Point a;
	const Point b(42, 0);
	const Point c(0, 42);
	const Point d(1, 1);

	std::cout << "Triangle: ";
	std::cout << a << ", " << b << ", " << c << std::endl;
	std::cout << d;
	if (bsp(a, b, c, d))
		std::cout << " is inside of the triangle" << std::endl;
	else
		std::cout << " is not inside of the triangle" << std::endl;
}
{
	Point a(-2.5, 0);
	Point b(2.5, 0);
	Point c(0, 2.5);
	Point d(0, -1);
//	Point d(0, 1);
	std::cout << "Triangle: ";
	std::cout << a << ", " << b << ", " << c << std::endl;
	std::cout << d;
	if (bsp(a, b, c, d))
		std::cout << " is inside of the triangle" << std::endl;
	else
		std::cout << " is not inside of the triangle" << std::endl;

}
	return (0);
}
