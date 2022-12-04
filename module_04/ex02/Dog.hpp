/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:08:10 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/21 22:58:12 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog : virtual public AAnimal	{
	private:
		Brain	*brain;
	public:
		Dog(void);
		virtual~Dog(void);
		Dog(Dog const &src);
		Dog		&operator=(Dog const & rhs);
		virtual void	makeSound(void) const;
		Brain	*getBrain(void) const;
};

#endif
