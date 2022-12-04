/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 22:21:06 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/17 15:08:20 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
#define	FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap	{
	public:
		FragTrap(void);
		~FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		FragTrap	&operator=(FragTrap const &rhs);
//		void		attack(const std::string &target);
		void		highFiveGuys(void) const;
};

std::ostream    &operator<<(std::ostream &o, FragTrap const & src);

#endif
