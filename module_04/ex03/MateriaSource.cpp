/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:03:04 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/21 23:44:04 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)	{
	std::cout << "MateriaSource constructed by Default" << std::endl;
	templates = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		templates[i] = NULL;
}

MateriaSource::~MateriaSource(void)	{
	std::cout << " MateriaSource destructed" << std::endl;
	for (int i = 0; i < 4; i++)	{
		if (templates[i])
			delete templates[i];
	}
	delete [] templates;
}

MateriaSource::MateriaSource(MateriaSource const & src)	{
	std::cout << " MateriaSource Copy construction" << std::endl;

	templates = new AMateria*[4];
	for (int i = 0; i < 4; i++)	{
		if (src.templates[i]) 
			templates[i] = src.templates[i]->clone();
		else
			templates[i] = NULL;
	}
}

MateriaSource	& MateriaSource::operator=(MateriaSource const & rhs)	{
	std::cout << " MateriaSource assignement" << std::endl;
	if (this == &rhs)
		return (*this);
//	for (int i = 0; i < 4; i++)	{
//		if (templates[i])
//			delete templates[i];
//	}
//	for (int i = 0; i < 4; i++)	{
//		if (rhs.templates[i]) 
//			templates[i] = rhs.templates[i]->clone();
//		else
//			templates[i] = NULL;
//	this->templates = rhs.templates;
*this = rhs;
	//	if (tmp) 
	//		templates[i] = (*tmp).clone();
	//	else
	//		templates[i] = tmp;
//		templates[i] = (*rhs.getMateria(i)).clone();
//	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)	{

	if (m)	{
		for (int i = 0; i < 4; i++)	{
			if (!templates[i])	{
				templates[i] = m;
				return ;
			}
		}
		std::cout << "Can't learn more materias!" << std::endl;
	}
	else
		std::cout << "Imitates learning process" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const & type)	{
	for (int i = 0; i < 4; i++)	{
		if (!(templates[i]))
			break ;
		if (!(type.compare(templates[i]->getType())))
			return (templates[i]->clone());
		}
	std::cout << "Unknown Materia type!" << std::endl;
	return (NULL);
}
