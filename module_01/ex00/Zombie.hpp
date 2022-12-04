/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:18:36 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/02 20:22:00 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class	Zombie	{
	private:
		std::string	name;
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void) const;
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
