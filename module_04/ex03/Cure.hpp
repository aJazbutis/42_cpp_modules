/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:24:06 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/10/04 16:34:23 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: virtual public AMateria	{
	public:
		Cure(void); //Caninical
		virtual~Cure(void);	//	[...]//Caninical
		Cure(Cure const & src);//Caninical
		Cure	&operator=(Cure const & rhs);//Caninical
//		std::string const & getType() const; //Returns the materia type
		virtual Cure* clone(void) const;
		virtual void use(ICharacter& target);
};

#endif
