/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:38:52 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/19 16:47:35 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

# include <iostream>

class	AAnimal	{
	protected:
		std::string	type;
	public:
		AAnimal(void);
		virtual ~AAnimal(void);
		AAnimal(AAnimal const &src);
		AAnimal				&operator=(AAnimal const & rhs);
		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;
};

#endif
