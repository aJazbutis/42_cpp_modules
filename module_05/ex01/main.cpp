/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:00:31 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/25 00:39:06 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)	{
{
	std::cout << "	#############" << std::endl;
	std::cout << "	# CanonTEST #" << std::endl;
	std::cout << "	#############" << std::endl;
	{
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
	}
	std::cout << std::endl << "%%%%%%%%%%%%%%%%%%%%" << std::endl;
	{
	Form	Bob;
	Form	*Jon = new Form("Jon", 15, 60 );
	Form	Jim("Jim", 111, 147);
	Form	Ben(*Jon);
	std::cout << *Jon << std::endl;
	std::cout << Bob << std::endl;
	std::cout << Jim  << std::endl;
	std::cout << Ben << std::endl;
	Bob = Jim;
	std::cout << Bob << std::endl;
	delete Jon;
	}
	getchar();
}
{
	std::cout << "	#############" << std::endl;
	std::cout << "	# CnstrTEST #" << std::endl;
	std::cout << "	#############" << std::endl;

	try	{
		Form	Bob("Bob", 1, 150);
//		Form	*Jon = new Form("Jon", , 60 );
		Form	Ben("Ben", 111, 0);

		std::cout << Bob << std::endl;
		std::cout << Ben  << std::endl;
	}
	catch (Form::EmptyNameException & e)	{
		std::cerr << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException & e)	{
		std::cerr << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException & e)	{
		std::cerr << e.what() << std::endl;
	}
	catch (...)	{
		std::cerr << "Exception happenend" << std::endl;
	}
	//WHEN to delete?
}
{
	getchar();
	std::cout << "	#############" << std::endl;
	std::cout << "	# OtherTEST #" << std::endl;
	std::cout << "	#############" << std::endl;

	try	{
		Bureaucrat	Bob("Bob", 123);
		Bureaucrat	Ben("Ben", 100);
		Bureaucrat	Jon("Jon", 1);

		Form		f1("formular_1", 1, 150);
		Form		f2("formular_2", 100, 1);
		Form		f3("formular_3", 100, 1);
		Form		f4("formular_4", 1, 1);

		std::cout << Bob << std::endl;
		std::cout << Jon  << std::endl;
		std::cout << Ben << std::endl;
		std::cout << f1 << std::endl;
		std::cout << f2  << std::endl;
		std::cout << f3 << std::endl;
		Bob.signForm(f1);
		std::cout << f1 << std::endl;
		Ben.signForm(f2);
		std::cout << f2 << std::endl;
		std::cout << f1 << std::endl;
		Jon.signForm(f1);
		std::cout << f1 << std::endl;
		Jon.signForm(f1);
		std::cout << f1 << std::endl;
		f4.beSigned(Bob); //this the last catch
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
	catch (Form::EmptyNameException & e)	{
		std::cerr << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException & e)	{
		std::cerr << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException & e)	{
		std::cerr << e.what() << std::endl;
	}
	catch (...)	{
		std::cerr << "Exception happenend" << std::endl;
	}
}
	return (0);
}
