/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:48:57 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/21 22:59:21 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

void	palauk(void)
{
	std::cout << "Press any key to continue!" << std::endl;
	getchar();
}
void	chklks(void)	{
	system ("leaks ex02");
}

int main(){
	atexit(chklks);
	{
		std::cout << "	#############" << std::endl;
		std::cout << "	# CanonTEST #" << std::endl;
		std::cout << "	#############" << std::endl;
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
	palauk();
	{
		std::cout << "	############" << std::endl;
		std::cout << "	# PDF TEST #" << std::endl;
		std::cout << "	############" << std::endl;

		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		AAnimal *cat = new Cat();
		AAnimal *dog = new Dog();

		cat->makeSound();
		dog->makeSound();

		delete cat;
		delete dog;

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		delete i;
		delete j;
		std::cout << "#	ARRAY test	# " << std::endl;
		AAnimal	**farm = new AAnimal*[8];
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
	{
		std::cout << "	############" << std::endl;
		std::cout << "	#WRONG TEST#" << std::endl;
		std::cout << "	############" << std::endl;
		
		std::cout << "#	Uncomment and recompile!	#" << std::endl;
/*		
		{

			AAnimal	*animal = new AAnimal();
			AAnimal	*Bob = new Cat();
			AAnimal	Rex(*Bob);
			AAnimal	Spot;

			std::cout << "Bob is " << Bob->getType() << " " << std::endl;
			std::cout << "Rex is " << Rex.getType() << " " << std::endl;
			std::cout << "Spot is " << Spot.getType() << " " << std::endl;
			Spot = *Bob;
			std::cout << "Spot is "<< Spot.getType() << " " << std::endl;
			delete Bob;
		}
		{
			AAnimal	*Bob = new Dog();
			AAnimal	Rex(*Bob);
			AAnimal	Spot;

			std::cout << "Bob is " << Bob->getType() << " " << std::endl;
			std::cout << "Rex is " << Rex.getType() << " " << std::endl;
			std::cout << "Spot is " << Spot.getType() << " " << std::endl;
			Spot = *Bob;
			std::cout << "Spot is "<< Spot.getType() << " " << std::endl;
			delete Bob;
		}
*/


	}
	return (0);
}
