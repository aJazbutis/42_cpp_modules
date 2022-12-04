/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:31:06 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/19 15:39:56 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>

class	Animal	{
	protected:
		std::string	type;
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(Animal const &src);
		Animal			&operator=(Animal const & rhs);
		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};

#endif
