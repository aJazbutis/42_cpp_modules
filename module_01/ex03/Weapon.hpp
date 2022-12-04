/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 22:02:12 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/02 23:23:35 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class	Weapon	{
	private:
		std::string	type;
	public:
		Weapon(std::string type);
		~Weapon(void);
		void		setType(std::string type);
		std::string const &getType(void) const;
};

#endif
