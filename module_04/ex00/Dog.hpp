/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:08:10 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/21 22:44:43 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal	{
	public:
		Dog(void);
		~Dog(void);
		Dog(Dog const &src);
		Dog		&operator=(Dog const & rhs);
		virtual void	makeSound(void) const;
};

#endif
