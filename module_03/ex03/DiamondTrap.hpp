/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 00:30:00 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/17 15:25:45 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DIAMONDTRAP_HPP
#define	DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap	{
	private:
		std::string	_name;
	public:
		DiamondTrap(void);
		~DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap	&operator=(DiamondTrap const &rhs);

		std::string getName(void) const;
		void		setName(std::string name);
		void		whoAmI(void) const;
};

std::ostream	&operator<<(std::ostream &o, DiamondTrap const & src);
#endif


