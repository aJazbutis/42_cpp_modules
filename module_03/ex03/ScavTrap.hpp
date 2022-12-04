/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:51:21 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/17 17:00:43 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	SCAVTRAP_HPP
#define	SCAVTRAP_HPP
#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap	{
	public:
		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		ScavTrap		&operator=(ScavTrap const &rhs);
		void			guardGate(void) const;
		void			attack(const std::string &target);
		unsigned int	getEnergyPoints(void);	
};

#endif
