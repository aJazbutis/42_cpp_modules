/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 21:33:33 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/21 20:56:05 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)	{
	std::cout << "Default Materia construction" << std::endl;
}

AMateria::~AMateria(void)	{
	std::cout << "AMateria destruction" << std::endl;
}

AMateria::AMateria(AMateria const &src)	{
	(void)src;
	std::cout << "AMateria copy construction" << std::endl;
}

AMateria	&AMateria::operator=(AMateria const & rhs)	{
	if (this == &rhs)
		return (*this);
	return (*this);
}

	//Returns the materia type
std::string const &AMateria::getType() const	{
	return (type);
}

void AMateria::use(ICharacter& target)	{
		std::cout << "* shoots an ice bolt at" << target.getName() << "or heals it *" << std::endl;
}

void	newTrash(t_trash **head, AMateria *trash)	{
	t_trash *tmp;

	if (!trash)
		return ;
	tmp = *head;

	if (!tmp)	{
		tmp = new t_trash;
		tmp->trash = trash;
		tmp->next = NULL;
		*head = tmp;
		
	}
	else	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new t_trash;
		tmp->next->next = NULL;
		tmp->next->trash = trash;

	}
}

void	deleteTrash(t_trash	**head)	{
	t_trash	*tmp;

	while (*head)	{

		tmp = *head;
		*head = (*head)->next;
		delete tmp->trash;
		delete tmp;
	}
}
