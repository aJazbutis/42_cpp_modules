/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 21:31:19 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/21 23:32:00 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;
class AMateria	{
	protected:
		std::string	type;
	public:
		AMateria(void); //Caninical
		AMateria(std::string const & type);
		virtual~AMateria(void);	//	[...]//Caninical
		AMateria(AMateria const & src);//Caninical
		AMateria	&operator=(AMateria const & rhs);//Caninical
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

typedef struct	s_trash	{
	AMateria	*trash;
	s_trash		*next;
}t_trash;

void	newTrash(t_trash **head, AMateria *trash);
void	deleteTrash(t_trash	**head);

#endif
