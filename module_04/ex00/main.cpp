/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:48:57 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/21 22:48:14 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void	palauk(void)
{
	std::cout << "Press any key to continue!" << std::endl;
	getchar();
}

void	chcklks(void)	{
	system ("leaks ex00");
}

int main(){
	atexit(chcklks);
	{
		std::cout << "	#############" << std::endl;
		std::cout << "	# CanonTEST #" << std::endl;
		std::cout << "	#############" << std::endl;
		
		{
			Animal	*Bob = new Animal();
			Animal	Rex(*Bob);
			Animal	Spot;

			std::cout << "Bob is " << Bob->getType() << " " << std::endl;
			std::cout << "Rex is " << Rex.getType() << " " << std::endl;
			std::cout << "Spot is " << Spot.getType() << " " << std::endl;
			Spot = *Bob;
			std::cout << "Spot is "<< Spot.getType() << " " << std::endl;
			delete Bob;
		}
		{
			std::cout << "#	Animal = Cat	#" << std::endl;
			Animal	*Bob = new Cat();
			Animal	Rex(*Bob);
			Animal	Spot;

			std::cout << "Bob is " << Bob->getType() << " " << std::endl;
			std::cout << "Rex is " << Rex.getType() << " " << std::endl;
			std::cout << "Spot is " << Spot.getType() << " " << std::endl;
			Spot = *Bob;
			std::cout << "Spot is "<< Spot.getType() << " " << std::endl;
			delete Bob;
		}
		{

			std::cout << "#	Animal = Dog	#" << std::endl;
			Animal	*Bob = new Dog();
			Animal	Rex(*Bob);
			Animal	Spot;

			std::cout << "Bob is " << Bob->getType() << " " << std::endl;
			std::cout << "Rex is " << Rex.getType() << " " << std::endl;
			std::cout << "Spot is " << Spot.getType() << " " << std::endl;
			Spot = *Bob;
			std::cout << "Spot is "<< Spot.getType() << " " << std::endl;
			delete Bob;
		}
		{
			std::cout << "#	Dog	#" << std::endl;
			Dog	*Bob = new Dog();
			Dog	Rex(*Bob);
			Dog	Spot;
			std::cout << "Bob is " << Bob->getType() << " " << std::endl;
			std::cout << "Rex is " << Rex.getType() << " " << std::endl;
			std::cout << "Spot is " << Spot.getType() << " " << std::endl;
			Spot = *Bob;
			std::cout << "Spot is "<< Spot.getType() << " " << std::endl;
			delete Bob;
		}
		{
			std::cout << "#	Cat	#" << std::endl;
			Cat	*Bob = new Cat();
			Cat	Rex(*Bob);
			Cat	Spot;
			std::cout << "Bob is " << Bob->getType() << " " << std::endl;
			std::cout << "Rex is " << Rex.getType() << " " << std::endl;
			std::cout << "Spot is " << Spot.getType() << " " << std::endl;
			Spot = *Bob;
			std::cout << "Spot is "<< Spot.getType() << " " << std::endl;
			delete Bob;
		}

	}
	palauk();
	{
		std::cout << "	############" << std::endl;
		std::cout << "	# PDF TEST #" << std::endl;
		std::cout << "	############" << std::endl;

		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << "Should say 'cat' - " << i->getType() << std::endl;
		std::cout << "Should say 'dog' - " << j->getType() << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete i;
		delete j;
	}
	palauk();
	{
		std::cout << "	############" << std::endl;
		std::cout << "	#WRONG TEST#" << std::endl;
		std::cout << "	############" << std::endl;

		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		std::cout << i->getType() << std::endl;
		i->makeSound();
		meta->makeSound();
		delete meta;
		delete i;
		const WrongCat* j = new WrongCat();
		std::cout << j->getType() << std::endl;
		j->makeSound();
		delete j;

	}
	return 0;
}
