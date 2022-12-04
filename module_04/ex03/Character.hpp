/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:14:52 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/21 20:47:46 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

extern t_trash *trash;

class Character : virtual public ICharacter	{
	private:
		std::string	_name;
		AMateria	**inv;
	public:
		Character(void);
		Character(std::string const & name);
		virtual ~Character(void);
		Character(Character const & src);
		Character &operator=(Character const & rhs);
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		AMateria	*getMateria(int idx) const;
};

#endif
