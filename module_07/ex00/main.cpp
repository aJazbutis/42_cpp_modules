/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 00:02:36 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/28 20:19:28 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {
	{
	std::cout << "🦄🦄🦄🦄🦄🦄🦄🦄🦄🦄" << std::endl;
	std::cout << "🦄     PdfTEST    🦄" << std::endl;
	std::cout << "🦄🦄🦄🦄🦄🦄🦄🦄🦄🦄" << std::endl;

	int a = 2;
	int b = 3;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	getchar();
	{
	std::cout << "🦄🦄🦄🦄🦄🦄🦄🦄🦄🦄" << std::endl;
	std::cout << "🦄     SameTEST   🦄" << std::endl;
	std::cout << "🦄🦄🦄🦄🦄🦄🦄🦄🦄🦄" << std::endl;

	double a = 3.14;
	double b = 1.6180339887498948482;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "opop";
	std::string d = "tutstuts";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return (0);
}

