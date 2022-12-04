/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:31:34 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/21 22:01:48 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("mob")	{
	std::cout << _name << " constructed by Default" << std::endl;
	inv = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		inv[i] = NULL;
}

Character::Character(std::string const & name) : _name(name)	{
	std::cout << _name << " constructed with a given name" << std::endl;
	inv = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		inv[i] = NULL;
}

Character::~Character(void)	{
	std::cout << _name << " Character destructed" << std::endl;
	for (int i = 0; i < 4; i++)	{
		if (inv[i])
			delete inv[i];
	}
	delete [] inv;
}

Character::Character(Character const & src) : _name(src.getName())	{
	std::cout << _name << " Character Copy construction" << std::endl;

	AMateria*	tmp = NULL;

	inv = new AMateria*[4];
	for (int i = 0; i < 4; i++)	{
		tmp = src.getMateria(i);
		if (tmp) 
			inv[i] = (*tmp).clone();
		else
			inv[i] = tmp;
	}
}

Character	& Character::operator=(Character const & rhs)	{
	std::cout << " Character assignement" << std::endl;
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < 4; i++)	{
		if (inv[i])
			delete inv[i];
	}
	_name = rhs._name;

	AMateria*	tmp = NULL;

	for (int i = 0; i < 4; i++)	{
		tmp = rhs.getMateria(i);
		if (tmp) 
			inv[i] = (*tmp).clone();
		else
			inv[i] = tmp;
//		inv[i] = (*rhs.getMateria(i)).clone();
	}
	return (*this);
}

std::string const & Character::getName(void) const	{
	return (_name);
}

AMateria	*Character::getMateria(int idx) const	{
	if (idx >= 0 && idx < 4)
		return (inv[idx]);
	return (NULL);
}

void Character::equip(AMateria* m)	{

	if (m)	{
		for (int i = 0; i < 4; i++)	{
			if (inv[i] == NULL)	{
				inv[i] = m;
				return ;
			}
		}
		std::cout << _name << "'s inventory is full!" << std::endl;
	}
	else
		std::cout << _name << " pretends to put something in a pocket" << std::endl;
}

void Character::unequip(int idx)	{
	if (idx >= 0 && idx < 4)	{
		newTrash(&trash, inv[idx]);
		inv[idx] = NULL;
	}
	else
		std::cout << _name << " pretends to drop something" << std::endl;
}

void Character::use(int idx, ICharacter& target)	{
	std::cout << _name;
	if (idx >= 0 && idx < 4)	{
		if (inv[idx])	{
			inv[idx]->use(target);
			delete inv[idx];
			inv[idx] = NULL;
		}
		else
			std::cout << "'s inventory slot appears to be empty!" << std::endl;
	}
	else
		std::cout << " makes some strange gestures at " << target.getName() << "!" << std::endl;
}

