/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:00:31 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/24 20:35:41 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberryCreationForm.hpp"

int	main(void)	{
{
	std::cout << "	#############" << std::endl;
	std::cout << "	# CanonTEST #" << std::endl;
	std::cout << "	#############" << std::endl;
	{
		PresidentialPardonForm	Bob;
		PresidentialPardonForm	*Jon = new PresidentialPardonForm("Jon");
		PresidentialPardonForm	Jim("Jim");
		PresidentialPardonForm	Ben(*Jon);
		std::cout << *Jon << std::endl;
		std::cout << Bob << std::endl;
		std::cout << Jim  << std::endl;
		std::cout << Ben << std::endl;
		Bob = Jim;
		std::cout << Bob << std::endl;
		delete Jon;
	}
	{
		std::cout << std::endl << "%%%%%%%%%%%%%%%%%%%%" << std::endl;
		getchar();
		RobotomyRequestForm	Bob;
		RobotomyRequestForm	*Jon = new RobotomyRequestForm("Jon");
		RobotomyRequestForm	Jim("Jim");
		RobotomyRequestForm	Ben(*Jon);
		std::cout << *Jon << std::endl;
		std::cout << Bob << std::endl;
		std::cout << Jim  << std::endl;
		std::cout << Ben << std::endl;
		Bob = Jim;
		std::cout << Bob << std::endl;
		delete Jon;
	}
	{
		std::cout << std::endl << "%%%%%%%%%%%%%%%%%%%%" << std::endl;
		getchar();
		ShrubberryCreationForm	Bob;
		ShrubberryCreationForm	*Jon = new ShrubberryCreationForm("Jon");
		ShrubberryCreationForm	Jim("Jim");
		ShrubberryCreationForm	Ben(*Jon);
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

	{
	try	{
		PresidentialPardonForm	Bob("");
		PresidentialPardonForm	Ben("Ben");

		Bureaucrat	Jon("Jon", 1);
		Bureaucrat	Jim("Jim", 150);

		std::cout << Bob << std::endl;
		std::cout << Ben  << std::endl;
		std::cout << Jon << std::endl;
		std::cout << Jim  << std::endl;
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
	catch (Form::UnsignedFormException & e)	{
		std::cerr << e.what() << std::endl;
	}
	catch (...)	{
		std::cerr << "Exception happenend" << std::endl;
	}
}
	std::cout << std::endl << "%%%%%%%%%%%%%%%%%%%%" << std::endl;
	getchar();
	{
	try	{
		RobotomyRequestForm	Bob("");
		RobotomyRequestForm	Ben("Ben");

		Bureaucrat	Jon("Jon", 1);
		Bureaucrat	Jim("Jim", 150);
		Jim.executeForm(Bob);
		Jon.signForm(Bob);

		std::cout << Bob << std::endl;
		std::cout << Ben  << std::endl;
		std::cout << Jon << std::endl;
		std::cout << Jim  << std::endl;
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
	catch (Form::UnsignedFormException & e)	{
		std::cerr << e.what() << std::endl;
	}
	catch (...)	{
		std::cerr << "Exception happenend" << std::endl;
	}
	//WHEN to delete?
}
	{
	try	{
		ShrubberryCreationForm	Bob("");
		ShrubberryCreationForm	Ben("Ben");

		Bureaucrat	Jon("Jon", 1);
		Bureaucrat	Jim("Jim", 150);
		Jim.executeForm(Bob);
		Jon.signForm(Bob);

		std::cout << Bob << std::endl;
		std::cout << Ben  << std::endl;
		std::cout << Jon << std::endl;
		std::cout << Jim  << std::endl;
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
	catch (Form::UnsignedFormException & e)	{
		std::cerr << e.what() << std::endl;
	}
	catch (...)	{
		std::cerr << "Exception happenend" << std::endl;
	}
}
{
	getchar();
	std::cout << "	#############" << std::endl;
	std::cout << "	# OtherTEST #" << std::endl;
	std::cout << "	#############" << std::endl;
	try {

	{
		Bureaucrat	Bob("Bob", 123);
		Bureaucrat	Ben("Ben", 100);
		Bureaucrat	Jon("Jon", 1);

		PresidentialPardonForm		f1("Hedonism Bot");
		PresidentialPardonForm		f2("Leela");
		PresidentialPardonForm		f3("Fry");
		PresidentialPardonForm		f4("Bender");

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
		Bob.executeForm(f1);
		Ben.executeForm(f2);
		Jon.executeForm(f3);
		Jon.executeForm(f4);
		Jon.executeForm(f1);
	}
	{
		std::cout << std::endl << "%%%%%%%%%%%%%%%%%%%%" << std::endl;
		getchar();
		Bureaucrat	Bob("Bob", 123);
		Bureaucrat	Ben("Ben", 100);
		Bureaucrat	Jon("Jon", 1);

		RobotomyRequestForm		f1("Hedonism Bot");
		RobotomyRequestForm		f2("Leela");
		RobotomyRequestForm		f3("Fry");
		RobotomyRequestForm		f4("Bender");

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
		Bob.executeForm(f1);
		Ben.executeForm(f2);
		Jon.executeForm(f3);
		Jon.executeForm(f4);
		Jon.executeForm(f1);
	}
	{
		std::cout << std::endl << "%%%%%%%%%%%%%%%%%%%%" << std::endl;
		getchar();
		Bureaucrat	Bob("Bob", 123);
		Bureaucrat	Ben("Ben", 100);
		Bureaucrat	Jon("Jon", 1);

		ShrubberryCreationForm		f1("Hedonism Bot");
		ShrubberryCreationForm		f2("Leela");
		ShrubberryCreationForm		f3("Fry");
		ShrubberryCreationForm		f4("Bender");

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
		Bob.executeForm(f1);
		Ben.executeForm(f2);
		Jon.executeForm(f3);
		Jon.executeForm(f4);
		Jon.executeForm(f1);
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
}
	return (0);
}
