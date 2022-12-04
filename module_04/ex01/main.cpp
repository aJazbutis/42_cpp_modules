/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:48:57 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/21 22:51:25 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

void	palauk(void)
{
	std::cout << "Press ENTER/RETURN to continue!" << std::endl;
	getchar();
}

void	chklks(void)	{
	system ("leaks ex01");
}

int main(){
	atexit(chklks);
	{
		std::cout << "	#############" << std::endl;
		std::cout << "	# CanonTEST #" << std::endl;
		std::cout << "	#############" << std::endl;
		
		{
			std::cout << "#	BRAINS!	" << std::endl;
			Brain	*brain = new Brain();
			brain->setIdea(99, "I'm cat");
			std::cout << brain->getIdea(99) << std::endl;
			Brain	b(*brain);
			std::cout << b.getIdea(99) << std::endl;
			Brain	a;
			std::cout << a.getIdea(99) << std::endl;
			a = *brain;
			std::cout << a.getIdea(99) << std::endl;
			std::cout << "New Ideas!" << std::endl;
			brain->setIdea(99, "I'm fantastich");
			std::cout << brain->getIdea(99) << std::endl;
			b.setIdea(99, brain->getIdea(99) + "er");
			std::cout << b.getIdea(99) << std::endl;
			a.setIdea(99, brain->getIdea(99) + "est");
			std::cout << a.getIdea(99) << std::endl;
			delete brain;
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

			Cat	&BobREF = *Bob;
			Cat	&RexREF = Rex;

			std::cout << "Bob is " << Bob->getType() << " " << std::endl;
			std::cout << "Rex is " << Rex.getType() << " " << std::endl;
			std::cout << "Spot is " << Spot.getType() << " " << std::endl;
			Spot = *Bob;
			std::cout << "Spot is "<< Spot.getType() << " " << std::endl;
			std::cout << Bob->getBrain() << std::endl;
			std::cout << Rex.getBrain() << std::endl;
			std::cout << BobREF.getBrain() << std::endl;
			std::cout << RexREF.getBrain() << std::endl;
			delete Bob;
		}
	palauk();
	{
		std::cout << "	#################" << std::endl;
		std::cout << "	# Ultimate test #" << std::endl;
		std::cout << "	#################" << std::endl;
		Cat	*Bob = new Cat();
		Dog	*Rex = new Dog();
		Cat	Spot;
		Dog	Op(*Rex);

		std::cout << Bob->getType() << " " << std::endl;
		std::cout << Rex->getType() << " " << std::endl;
		std::cout << Spot.getType() << " " << std::endl;
		Spot = *Bob;
		std::cout << Spot.getType() << " " << std::endl;
		Spot.think(99);
		Spot.setIdea(99, "I'm a dog");
		Spot.think(99);
		Bob->think(99);
		delete Bob;
		delete Rex;
		}
	}
	palauk();
	{
		std::cout << "	############" << std::endl;
		std::cout << "	# PDF TEST #" << std::endl;
		std::cout << "	############" << std::endl;

		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		delete i;
		delete j;
		std::cout << std::endl;
		std::cout << "#	ARRAY test	# " << std::endl;
		std::cout << std::endl;
		Animal	**farm = new Animal*[8];
		for (int i = 0; i < 4; i++)
			farm[i] = new Cat();
		for (int i = 4; i < 8; i++)
			farm[i] = new Dog();
		for (int i = 0; i < 8; i++)
			farm[i]->makeSound();
		for (int i = 0; i < 8; i++)
			delete farm[i];
		delete [] farm;
	}
	palauk();
	return (0);
}
