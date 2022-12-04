/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:57:07 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/15 20:23:40 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap	{
	private:
		std::string		_name;
		unsigned int	_hitP;
		unsigned int	_energyP;
		unsigned int	_attackD;
	public:
		ClapTrap(void); //Canonical
		~ClapTrap(void); //Canonical
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src); //Canonical
		ClapTrap			&operator=(ClapTrap const &rhs); //Canonical
		void				attack(const std::string& target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		unsigned int		getHitPoints(void) const;
		unsigned int		getEnergyPoints(void) const;
		unsigned int		getAttackDamage(void) const;
		std::string const	&getName(void) const;
		void				setName(std::string	const name);
		void				setHitPoints(unsigned int amount);
		void				setEnergyPoints(unsigned int amount);
		void				setAttackDamage(unsigned int amount);
};

#endif
