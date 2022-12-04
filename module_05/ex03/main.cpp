/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:00:31 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/24 23:28:04 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberryCreationForm.hpp"
#include "Intern.hpp"

void chcklks(void)	{
	system ("leaks ex03");
}

int	main(void)	{
	atexit(chcklks);

	std::cout << "	#############" << std::endl;
	std::cout << "	# CanonTEST #" << std::endl;
	std::cout << "	#############" << std::endl;
	{
		Intern	Bob;
		Intern	*Jon = new Intern();
		Intern	Jim;
		Intern	Ben(*Jon);
		Bob = Jim;
		delete Jon;
	}
{
	getchar();
	std::cout << "	#############" << std::endl;
	std::cout << "	# OtherTEST #" << std::endl;
	std::cout << "	#############" << std::endl;
	try {
	{
		Bureaucrat	Bob("Bob", 147);
		Bureaucrat	Ben("Ben", 70);
		Bureaucrat	Jon("Jon", 1);

		Form	*f1;
		Form	*f2;
		Form	*f3;
		Form	*f4;

		Intern	praktikant;
		std::cout << std::endl << "%%%%%%%%%%%%%%%%%%%%" << std::endl;
		f1 = praktikant.makeForm("RobotomyRequestForm", "LoveBot");
		f2 = praktikant.makeForm("PresidentialPardonForm", "LoveBot");
		f3 = praktikant.makeForm("ShrubberryCreationForm", "LoveBot");
		f4 = praktikant.makeForm("RobotomyPardonForm", "LoveBot");
		std::cout << std::endl << "%%%%%%%%%%%%%%%%%%%%" << std::endl;
		std::cout << Bob << std::endl;
		std::cout << Jon  << std::endl;
		std::cout << Ben << std::endl;
		std::cout << std::endl << "%%%%%%%%%%%%%%%%%%%%" << std::endl;
		if (f1)
			std::cout << *f1 << std::endl;
		if (f2)
			std::cout << *f2  << std::endl;
		if (f3)
			std::cout << *f3 << std::endl;
		if (f4)
			std::cout << *f4 << std::endl;
		if (f1)	{
			Bob.signForm(*f1);
			std::cout << *f1 << std::endl;
		}
		if (f2)	{
			Ben.signForm(*f2);
			std::cout << *f2 << std::endl;
		}
		if (f3)	{
			Ben.signForm(*f3);
			std::cout << *f3 << std::endl;
		}
		if (f1)	{
			std::cout << *f1 << std::endl;
			Jon.signForm(*f1);
			std::cout << *f1 << std::endl;
			Bob.executeForm(*f1);
		}
		if (f2)
			Ben.executeForm(*f2);
		if (f3)
			Jon.executeForm(*f3);
		if (f4)
			Jon.executeForm(*f4);
		if (f1)
			Jon.executeForm(*f1);
		std::cout << std::endl << "%%%%%%%%%%%%%%%%%%%%" << std::endl;
		getchar();
		if (f1)
			std::cout << *f1 << std::endl;
		if (f2)
			std::cout << *f2  << std::endl;
		if (f3)
			std::cout << *f3 << std::endl;
		if (f4)
			std::cout << *f4 << std::endl;
		if (f1)
			Ben.signForm(*f1);
		if (f1)
			std::cout << *f1 << std::endl;
		if (f2)
			Bob.signForm(*f2);
		if (f2)
			std::cout << *f2 << std::endl;
		if (f1)	{
			std::cout << *f1 << std::endl;
			Jon.signForm(*f1);
			std::cout << *f1 << std::endl;
			Bob.executeForm(*f1);
		}
		if (f2)
			Ben.executeForm(*f2);
		if (f3)
			Jon.executeForm(*f3);
		if (f4)
			Jon.executeForm(*f4);
		if (f1)
			Jon.executeForm(*f1);

		delete f1;
		delete f2;
		delete f3;
		delete f4;
	}
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
