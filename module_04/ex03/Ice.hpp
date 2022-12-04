/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:50:37 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/21 23:47:54 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: virtual public AMateria	{
	public:
		Ice(void); //Caninical
		virtual~Ice(void);	//	[...]//Caninical
		Ice(Ice const & src);//Caninical
		Ice	&operator=(Ice const & rhs);//Caninical
		std::string const & getType() const; //Returns the materia type
		virtual Ice* clone(void) const;
		virtual void use(ICharacter& target);
};

#endif
