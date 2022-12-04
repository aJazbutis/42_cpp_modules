/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:00:31 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/25 00:13:20 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	chcklks(void)	{
	system ("leaks ex00");
}

int	main(void)	{
	atexit(chcklks);
{
	std::cout << "	#############" << std::endl;
	std::cout << "	# CanonTEST #" << std::endl;
	std::cout << "	#############" << std::endl;
	Bureaucrat	Bob;
	Bureaucrat	*Jon = new Bureaucrat("Jon", 1);
	Bureaucrat	Jim("Jim", 111);
	Bureaucrat	Ben(*Jon);
	std::cout << *Jon << std::endl;
	std::cout << Bob << std::endl;
	std::cout << Jim  << std::endl;
	std::cout << Ben << std::endl;
	Bob = Jim;
	std::cout << Bob << std::endl;
	delete Jon;
	getchar();
}
{
	std::cout << "	#############" << std::endl;
	std::cout << "	# CnstrTEST #" << std::endl;
	std::cout << "	#############" << std::endl;

	{
	try	{
		Bureaucrat	Bob;
		Bureaucrat	Jim("Jim",111);
		Bureaucrat	Ben("Ben", 100);
		Bureaucrat	Jon("Jon", 151);
		std::cout << Bob << std::endl;
		std::cout << Jim  << std::endl;
		std::cout << Ben << std::endl;
	}
	catch (Bureaucrat::EmptyNameException & e)	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e)	{
		std::cerr << e.what() << std::endl;
	}
	catch (...)	{
		std::cerr << "Exception happenend" << std::endl;
	}
	getchar();
	}
	{
	try	{
		Bureaucrat	Bob;
		Bureaucrat	Jim("Jim",111);
		Bureaucrat	Ben("Ben", 0);
		Bureaucrat	Jon("Jon", 151);
		std::cout << Bob << std::endl;
		std::cout << Jim  << std::endl;
		std::cout << Ben << std::endl;
	}
	catch (Bureaucrat::EmptyNameException & e)	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e)	{
		std::cerr << e.what() << std::endl;
	}
	catch (...)	{
		std::cerr << "Exception happenend" << std::endl;
	}
	}
}
{
	getchar();
	std::cout << "	#############" << std::endl;
	std::cout << "	# OtherTEST #" << std::endl;
	std::cout << "	#############" << std::endl;

	try	{
		Bureaucrat	Bob;
		Bureaucrat	Jim("Jim", 4);
		Bureaucrat	Ben("Ben", 100);
		Bureaucrat	Jon("Jon", 149);

		for (int i = 0; i < 5; i++)	{
			std::cout << Jim << std::endl;
			Jim.increment();
		}
	getchar();
		for (int i = 0; i < 5; i++)	{
			std::cout << Jon << std::endl;
			Jon.decrement();
		}
		std::cout << Bob << std::endl;
		std::cout << Jim << std::endl;
		std::cout << Ben << std::endl;
	}
	catch (Bureaucrat::EmptyNameException & e)	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e)	{
		std::cerr << e.what() << std::endl;
	}
	catch (...)	{
		std::cerr << "Exception happenend" << std::endl;
	}
	getchar();
}
	return (0);
}
