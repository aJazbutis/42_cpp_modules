/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:23:25 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/27 20:50:45 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdexcept>

Base *generate(void)	{	
	int i = rand() % 3 + 1;
	switch (i)	{
		case 1:
			return (new A);
		case 2:
			return (new	B);
		case 3:
			return (new C);
	}
	return (NULL);
}

void identify(Base* p)	{
	A	*a;
	B	*b;
	C	*c;

	if (!p)	{
		std::cout << "Just a NULL pointer" << std::endl;
		return ;
	}
	a = dynamic_cast<A*>(p);
	if (a)	{
		std::cout << "It's A!" << std::endl;
		return ;
	}
	b = dynamic_cast<B*>(p);
	if (b)	{
		std::cout << "It's B!" << std::endl;
		return ;
	}
	c = dynamic_cast<C*>(p);
	if (c)	{
		std::cout << "It's C!" << std::endl;
		return ;
	}
}

void identify(Base& p)	{
	try	{
		A & a = dynamic_cast<A&>(p);
		std::cout << "It's A!" << std::endl;
		return ;
		(void)a;
	}
	catch (std::exception & e)	{
//		std::cerr << e.what() << std::endl;
	}
	try	{
		B & b = dynamic_cast<B&>(p);
		std::cout << "It's B!" << std::endl;
		return ;
		(void)b;
	}
	catch (std::exception & e)	{
//		std::cerr << e.what() << std::endl;
	}
	try	{
		C & c = dynamic_cast<C&>(p);
		std::cout << "It's C!" << std::endl;
		return ;
		(void)c;
	}
	catch (std::exception & e)	{
//		std::cerr << e.what() << std::endl;
	}
}

/*void	chcklks(void)	{
	system ("leaks ex02");
}*/

int	main(void)	{
	Base	*p;

//	atexit(chcklks);
	for (int i = 0; i < 7; i++)	{
		p = generate();
		identify(p);
		identify(*p);
		delete p;
	}


	return (0);
}
