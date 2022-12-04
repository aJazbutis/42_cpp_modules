/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:19:30 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/21 23:34:06 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
//#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"


void	chcklks(void)	{
	system ("leaks ex03");
}


t_trash	*trash = NULL;

int	main (/*int argc, char **argv*/)	{

	atexit(chcklks);

	{
		std::cout << "###############" << std::endl;
		std::cout << "#  CanonTest  #" << std::endl;
		std::cout << "###############" << std::endl;

		ICharacter*	test = new Character("test");
		Character	*Bob = new Character("Bob");
		Bob->equip(new Ice());
		Character	Ben(*Bob);
		Character	mob;
		MateriaSource	*source = new MateriaSource();
		source->learnMateria(new Cure());
		source->learnMateria(new Ice());
		source->learnMateria(new Cure());
		source->learnMateria(new Ice());

		MateriaSource	sourceCopy(*source);
		Bob->equip(sourceCopy.createMateria("ice"));
		mob.use(3, *Bob);
		Bob->use(0, mob);
		mob = Ben;
		Ben.use(1, mob);
		mob.use(3, *Bob);	
		test->use(9, *Bob);
		std::cout << std::endl;
		std::cout << "###############" << std::endl;
		std::cout << std::endl;
		delete Bob;
		delete source;
		delete test;
	}
	getchar();
	{
		std::cout << "###############" << std::endl;
		std::cout << "#  RolePlay!  #" << std::endl;
		std::cout << "###############" << std::endl;

		AMateria	**loot = new AMateria*[11];

		for (int i = 0; i < 10; i++)	{
			if (i < 5)
				loot[i] = new Cure();
			else
				loot[i] = new Ice();
		}
		loot[10] = NULL;
	
		ICharacter *Bob = new Character("Bob");
		ICharacter *Liz = new Character("Liz");
		std::cout << std::endl;
		std::cout << "###############" << std::endl;
		std::cout << std::endl;
		for (int i = 0; i < 4; i++)	{
			Bob->equip(loot[i]);
		loot[i] = NULL;
		}
		Bob->equip(loot[5]);
		for (int i = 4; i < 8; i++)	{
			Liz->equip(loot[i]);
			loot[i] = NULL;
		}
		Liz->equip(loot[8]);
		Bob->use(9, *Liz);
		Liz->use(-1, *Bob);
		Bob->use(0, *Liz);
		Liz->use(2, *Bob);
		Bob->equip(loot[8]);
		loot[8] = NULL;
		Liz->equip(loot[9]);
		loot[9] = NULL;
		Bob->use(1, *Liz);
		Bob->unequip(2);
		Liz->unequip(2);
		std::cout << "###############" << std::endl;
		std::cout << std::endl;
		delete Bob;
		delete Liz;
		delete [] loot;
//	std::cout << "TRASH DELETE" << std::endl;
		deleteTrash(&trash);
		getchar();
	}
{
	std::cout << "###############" << std::endl;
	std::cout << "#   PdfPlay!  #" << std::endl;
	std::cout << "###############" << std::endl;

		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
//		me->unequip(0);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		std::cout << std::endl;
		std::cout << "###############" << std::endl;
		std::cout << std::endl;
		delete bob;
		delete me;
		delete src;
//	std::cout << "TRASH DELETE" << std::endl;
		deleteTrash(&trash);
}
	return (0);
}
