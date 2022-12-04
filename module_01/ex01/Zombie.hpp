/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:18:36 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/02 20:22:56 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class	Zombie	{
	private:
		std::string	name;
	public:
		Zombie(void);
		bool	setName(std::string name);
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
